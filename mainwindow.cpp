#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "DeviceManager.h"
#include "qdir.h"
#include "qmessagebox.h"
#include "qprocess.h"
#include "qstandardpaths.h"
#include "plistmanager.h"
#include <QDebug>
#include <QWindow>
#include <QPainter>
#include <QPainterPath>
#include <QFileDialog>
#include <QScrollBar>
#include <QDesktopServices>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <iostream>
#include <libimobiledevice/libimobiledevice.h>
#include <libimobiledevice/lockdown.h>
#include <libimobiledevice/service.h>
#include <endianness.h>

#define DT_SIMULATELOCATION_SERVICE "com.apple.dt.simulatelocation"

enum {
    SET_LOCATION = 0,
    RESET_LOCATION = 1
};

// Boilerplate

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::JiTou)
{
    setWindowFlag(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    ui->setupUi(this);
    ui->pages->setCurrentIndex(static_cast<int>(Page::Home));
    refreshDevices();
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Utilities

void MainWindow::updateInterfaceForNewDevice()
{
    // Update names
    MainWindow::updatePhoneInfo();

    if (DeviceManager::getInstance().isDeviceAvailable())
    {
        MainWindow::loadSetupOptions();
    }
    MainWindow::updateEnabledTweaks();
}

// Sidebar

void MainWindow::refreshDevices()
{
    // Clear existing items in the combobox
    ui->devicePicker->clear();

    // Load devices
    auto devices = DeviceManager::getInstance().loadDevices();

    if (devices.empty())
    {
        ui->devicePicker->setEnabled(false);
        ui->devicePicker->addItem(QString("无"), QVariant::fromValue(NULL));
        ui->pages->setCurrentIndex(static_cast<int>(Page::Home));
        ui->homePageBtn->setChecked(true);

        // hide all pages
        ui->sidebarDiv1->hide();
        ui->setupOptionsPageBtn->hide();
        ui->sidebarDiv2->hide();
        ui->applyPageBtn->hide();
    }
    else
    {
        ui->devicePicker->setEnabled(true);
        // Populate the combobox with device names
        for (auto &device : devices)
        {
            auto deviceName = QString("%1").arg(QString::fromStdString(device.Name));
            ui->devicePicker->addItem(deviceName, QVariant::fromValue(device.UUID));
        }

        // show all pages
        ui->sidebarDiv1->show();
        ui->setupOptionsPageBtn->show();
        ui->sidebarDiv2->show();
        ui->applyPageBtn->show();
    }

    // Update selected device
    ui->devicePicker->setCurrentIndex(DeviceManager::getInstance().getCurrentDeviceIndex());

    // Update interface
    MainWindow::updateInterfaceForNewDevice();
}

void MainWindow::on_homePageBtn_clicked()
{
    ui->pages->setCurrentIndex(static_cast<int>(Page::Home));
}




void MainWindow::on_setupOptionsPageBtn_clicked()
{
    ui->pages->setCurrentIndex(static_cast<int>(Page::SetupOptions));
}

void MainWindow::on_applyPageBtn_clicked()
{
    ui->pages->setCurrentIndex(static_cast<int>(Page::Apply));
    QFont font("Microsoft YaHei UI",30,QFont::Bold);
    ui->applyWarning->setFont(font);
}

void MainWindow::on_refreshBtn_clicked()
{
    refreshDevices();
}

void MainWindow::on_devicePicker_activated(int index)
{
    DeviceManager::getInstance().setCurrentDeviceIndex(index);
    MainWindow::updateInterfaceForNewDevice();
}

// Home Page

void MainWindow::updatePhoneInfo()
{
    auto name = DeviceManager::getInstance().getCurrentName();
    if (name)
    {
        ui->phoneNameLbl->setText(QString::fromStdString(*name));
    }
    else
    {
        ui->phoneNameLbl->setText("没有设备");
    }
    auto version = DeviceManager::getInstance().getCurrentVersion();
    if (version)
    {
        if (DeviceManager::getInstance().isDeviceAvailable())
        {
            if (*version >= Version(17)) {
                ui->phoneVersionLbl->setText("<a style=\"text-decoration:none; color: white;\" href=\"#\">iOS " + QString::fromStdString(version->toString()) + " <span style=\"color: #ffff00;\">Supported, YMMV.</span></a>");
            } else {
                ui->phoneVersionLbl->setText("<a style=\"text-decoration:none; color: white;\" href=\"#\">iOS " + QString::fromStdString(version->toString()) + " <span style=\"color: #32d74b;\">Supported!</span></a>");
            }
        }
        else
        {
            ui->phoneVersionLbl->setText("<a style=\"text-decoration:none; color: white;\" href=\"#\">iOS " + QString::fromStdString(version->toString()) + " <span style=\"color: #ff453a;\">Not Supported.</span></a>");
        }
    }
    else
    {
        ui->phoneVersionLbl->setText("请使用USB接口连接设备");
    }
}

void MainWindow::on_phoneVersionLbl_linkActivated(const QString &link)
{
    auto uuid = DeviceManager::getInstance().getCurrentUUID();
    if (uuid)
    {
        ui->phoneVersionLbl->setText("<a style=\"text-decoration:none; color: white\" href=\"#\">" + QString::fromStdString(*uuid) + "</a>");
    }
}


// Setup Options Page

void MainWindow::loadSetupOptions()
{
    ui->maxValueTxt->setValidator(new QIntValidator(ui->maxValueTxt));
    auto workspace = DeviceManager::getInstance().getCurrentWorkspace();
    auto location = QString::fromStdString(*workspace + "/SkipSetup/ConfigProfileDomain/Library/ConfigurationProfiles/CloudConfigurationDetails.plist");
    auto value = PlistManager::getPlistValue(location, "SkipSetup");
    if (value)
    {
        ui->skipSetupChk->setChecked(
            dynamic_cast<PList::Array *>(value)->GetSize() != 0);
    }
    else
    {
        ui->skipSetupChk->setChecked(false);
    }  
    location = QString::fromStdString(*workspace + "/AppleWatchUnlock/HomeDomain/Library/Preferences/com.apple.NanoRegistry.plist");
    value = PlistManager::getPlistValue(location, "maxPairingCompatibilityVersion");
    if (value)
    {
        ui->maxValueTxt->setText(QString::number(dynamic_cast<PList::Integer *>(value)->GetValue()));
    }
    else
    {
        ui->maxValueTxt->setText("36");
    }
}

void MainWindow::on_restoreFileChk_clicked(bool checked)
{
    if (checked)
    {
        DeviceManager::getInstance().setTweakEnabled(Tweak::AppleWatchUnlock, !checked);
        DeviceManager::getInstance().setTweakEnabled(Tweak::UnlockRestore, checked);
        MainWindow::updateEnabledTweaks();
    }
    else{
        DeviceManager::getInstance().setTweakEnabled(Tweak::AppleWatchUnlock, !checked);
        DeviceManager::getInstance().setTweakEnabled(Tweak::UnlockRestore, checked);
        MainWindow::updateEnabledTweaks();
    }
}
void MainWindow::on_setupCloseChk_clicked(bool checked)
{
    if (checked)
    {
        DeviceManager::getInstance().setTweakEnabled(Tweak::SkipSetup, !checked);
        ui->skipSetupChk->setDisabled(checked);
        MainWindow::updateEnabledTweaks();
    }
    else{
        DeviceManager::getInstance().setTweakEnabled(Tweak::SkipSetup, !checked);
        ui->skipSetupChk->setDisabled(checked);
        MainWindow::updateEnabledTweaks();
    }
}
void MainWindow::on_skipSetupChk_clicked(bool checked)
{
    auto workspace = DeviceManager::getInstance().getCurrentWorkspace();
    if (!workspace)
        return;
    auto location = QString::fromStdString(*workspace + "/SkipSetup/ConfigProfileDomain/Library/ConfigurationProfiles/CloudConfigurationDetails.plist");
    if (checked)
    {
        // auto node1 = PList::Boolean(checked);
        // PlistManager::setPlistValue(location, "CloudConfigurationUIComplete", node1);

        auto strings = {
            "Diagnostics",
            "WiFi",
            "AppleID",
            "Siri",
            "Restore",
            "SoftwareUpdate",
            "Welcome",
            "Appearance",
            "Privacy",
            "SIMSetup",
            "OnBoarding",
            "Zoom",
            "Biometric",
            "ScreenTime",
            "Payment",
            "Passcode",
            "Display",
            "TOS"};

        auto node2 = PList::Array();
        for (const auto &str : strings)
        {
            node2.Append(new PList::String(str));
        }

        PlistManager::setPlistValue(location, "SkipSetup", node2);
    }
    else
    {
        // PlistManager::deletePlistKey(location, "CloudConfigurationUIComplete");
        PlistManager::deletePlistKey(location, "SkipSetup");
    }
}


void MainWindow::on_maxValueTxt_textEdited(const QString &text)
{
    auto workspace = DeviceManager::getInstance().getCurrentWorkspace();
    if (!workspace)
        return;
    auto location = QString::fromStdString(*workspace + "/AppleWatchUnlock/HomeDomain/Library/Preferences/com.apple.NanoRegistry.plist");
    if (!text.isEmpty())
    {
        //auto node = PList::Integer(text.toStdString());
        qDebug() << text.toInt();
        auto node = PList::Integer(text.toLongLong());
        PlistManager::setPlistValue(location, "maxPairingCompatibilityVersion", node);
    }
}

// Internal Options Page

// Apply Page

void MainWindow::updateEnabledTweaks()
{
    auto labelText = std::string();
    auto tweaks = DeviceManager::getInstance().getEnabledTweaks();
    if (tweaks.empty())
    {
        labelText = "没有项目";
    }
    else
    {
        std::ostringstream labelTextStream;
        bool firstTweak = true;
        for (auto t : tweaks) {
            if (!firstTweak) {
                labelTextStream << ", ";
            } else {
                firstTweak = false;
            }
            labelTextStream << Tweaks::getTweakData(t).description;
        }
        labelText = labelTextStream.str();
    }
    ui->enabledTweaksLbl->setText(QString::fromStdString(labelText));
    //ui->setupOptionsEnabledChk->setChecked(std::find(tweaks.begin(), tweaks.end(), Tweak::SkipSetup) != tweaks.end());
}

void MainWindow::on_applyTweaksBtn_clicked()
{
    DeviceManager::getInstance().applyTweaks(ui->statusLbl);
}
/*
void MainWindow::on_removeTweaksBtn_clicked() {
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(nullptr, "Sure?", "This will remove all tweaks previously added with Cowabunga Lite (except themed app icons, you'll need to remove them manually).\n\nAre you sure?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        DeviceManager::getInstance().removeTweaks(ui->statusLbl, false);
    }
}

void MainWindow::on_deepCleanBtn_clicked() {
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(nullptr, "Sure?", "This will remove all tweaks previously added with Cowabunga Lite (except themed app icons, you'll need to remove them manually).\n\nIt will also remove any tweaks that may have been set with older versions.\n\nAre you sure?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        DeviceManager::getInstance().removeTweaks(ui->statusLbl, true);
    }
}
*/
// Window

void MainWindow::on_titleBar_pressed()
{
    windowHandle()->startSystemMove();
}

void MainWindow::on_closeBtn_clicked()
{
    close();
}
