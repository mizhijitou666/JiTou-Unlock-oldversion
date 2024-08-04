#include "DeviceManager.h"
#include "CreateBackup.h"
#include "plistmanager.h"
#include "qprocess.h"
#include "qregularexpression.h"
#include <libimobiledevice/libimobiledevice.h>
#include <libimobiledevice/lockdown.h>
#include <libimobiledevice/restore.h>
#include <plist/plist.h>
#include <iostream>
#include <fstream>
#include <QDebug>
#include <QDir>
#include <QFile>
#include <QStandardPaths>
#include <QCoreApplication>
#include <QDirIterator>
#include <QMessageBox>
#include <QPlainTextEdit>
#include <QPushButton>
#include <QLayout>

DeviceManager::DeviceManager()
{
    // Constructor implementation
    currentDevice = std::nullopt;
    currentDeviceIndex = 0;
    deviceAvailable = false;
}

DeviceManager &DeviceManager::getInstance()
{
    static DeviceManager instance;
    return instance;
}

DeviceManager::~DeviceManager()
{
    // Destructor implementation
}

void DeviceManager::setCurrentWorkspace(std::string str)
{
    this->currentWorkspace = str;
}

void DeviceManager::configureWorkspace(std::string uuid)
{
    // Get the destination directory path
    auto workspaceDir = QCoreApplication::applicationDirPath() + "/JiTou/Workspace/" + QString::fromStdString(uuid);
    // Set the source directory path (assuming it's located in the binary directory)
    auto sourceDir = QCoreApplication::applicationDirPath() + "/files";

    if (Utils::copyDirectory(sourceDir, workspaceDir))
    {
        // fix this idk
    }
    else
    {
        qDebug() << "无法创建目录";
    }

    setCurrentWorkspace(workspaceDir.toStdString());
}

const std::optional<std::string> DeviceManager::getCurrentWorkspace() const
{
    return this->currentWorkspace;
}

std::vector<DeviceInfo> DeviceManager::loadDevices()
{
    auto devices = std::vector<DeviceInfo>();

    char **device_list = nullptr;
    int device_count = 0;
    idevice_get_device_list(&device_list, &device_count);

    for (int i = 0; i < device_count; ++i)
    {
        char *uuid = device_list[i];

        if (uuid)
        {
            idevice_t device = nullptr;
            idevice_error_t error = idevice_new_with_options(&device, uuid, IDEVICE_LOOKUP_USBMUX);
            lockdownd_client_t client = nullptr;
            lockdownd_error_t lockdownd_error = lockdownd_client_new_with_handshake(device, &client, "DeviceManager");

            if (error == IDEVICE_E_SUCCESS && lockdownd_error == LOCKDOWN_E_SUCCESS)
            {
                plist_t device_info = nullptr;
                lockdownd_error_t info_error = lockdownd_get_value(client, nullptr, "ProductVersion", &device_info);

                if (info_error == LOCKDOWN_E_SUCCESS)
                {
                    char *device_version = nullptr;
                    plist_get_string_val(device_info, &device_version);

                    plist_t device_name_plist = nullptr;
                    lockdownd_error_t name_error = lockdownd_get_value(client, nullptr, "DeviceName", &device_name_plist);

                    if (name_error == LOCKDOWN_E_SUCCESS && device_name_plist && plist_get_node_type(device_name_plist) == PLIST_STRING)
                    {
                        char *device_name = nullptr;
                        plist_get_string_val(device_name_plist, &device_name);

                        DeviceInfo deviceInfo;
                        deviceInfo.UUID = uuid;
                        deviceInfo.Name = (device_name != nullptr) ? device_name : "";
                        deviceInfo.Version = (device_version != nullptr) ? Version(device_version) : Version();

                        devices.push_back(deviceInfo);

                        if (device_name)
                            free(device_name);
                    }

                    if (device_name_plist)
                        plist_free(device_name_plist);

                    if (device_version)
                        free(device_version);
                }

                if (device_info)
                    plist_free(device_info);
            }

            if (client)
                lockdownd_client_free(client);

            if (device)
                idevice_free(device);
        }
    }

    if (device_list)
        idevice_device_list_free(device_list);

    this->devices = devices;

    // If the same device is still there, set it as current
    if (this->currentDevice)
    {
        for (size_t i = 0; i < devices.size(); ++i)
        {
            if (devices.at(i).UUID == this->currentDevice->UUID)
            {
                setCurrentDeviceIndex(i);
                return devices;
            }
        }
    }

    // Otherwise, reset the current device
    resetCurrentDevice();
    return devices;
}

int DeviceManager::getCurrentDeviceIndex()
{
    return this->currentDeviceIndex;
}

bool DeviceManager::isDeviceAvailable()
{
    return this->deviceAvailable;
}

void DeviceManager::setCurrentDeviceIndex(int index)
{
    currentDeviceIndex = index;
    currentDevice = devices.at(index);
    // version check
    if (currentDevice->Version >= Version(15))
    {
        this->deviceAvailable = true;
        DeviceManager::configureWorkspace(currentDevice->UUID);
        // fix - maybe we dont want these to reset?
    }
    else
    {
        this->deviceAvailable = false;
    }

}

// fix: do something to blank all pages?
void DeviceManager::resetCurrentDevice()
{
    this->currentWorkspace.reset();
    this->enabledTweaks = {};
    if (this->devices.empty())
    {
        this->currentDeviceIndex = 0;
        this->currentDevice.reset();
        this->deviceAvailable = false;
    }
    else
    {
        this->enabledTweaks.insert(Tweak::SkipSetup);
        this->enabledTweaks.insert(Tweak::AppleWatchUnlock);
        DeviceManager::setCurrentDeviceIndex(0);
    }
}

const std::optional<std::string> DeviceManager::getCurrentUUID() const
{
    if (this->currentDevice)
    {
        return this->currentDevice->UUID;
    }
    else
    {
        return std::nullopt;
    }
}

const std::optional<Version> DeviceManager::getCurrentVersion() const
{
    if (this->currentDevice)
    {
        return this->currentDevice->Version;
    }
    else
    {
        return std::nullopt;
    }
}

const std::optional<std::string> DeviceManager::getCurrentName() const
{
    if (this->currentDevice)
    {
        return this->currentDevice->Name;
    }
    else
    {
        return std::nullopt;
    }
}


void DeviceManager::setTweakEnabled(Tweak t, bool enabled = true)
{
    if (enabled)
    {
        this->enabledTweaks.insert(t);
    }
    else
    {
        this->enabledTweaks.erase(t);
    }
}

bool DeviceManager::isTweakEnabled(Tweak t)
{
    return this->enabledTweaks.find(t) != this->enabledTweaks.end();
}

std::vector<Tweak> DeviceManager::getEnabledTweaks()
{
    auto tweaks = std::vector<Tweak>(this->enabledTweaks.begin(), this->enabledTweaks.end());

    // Sort the vector based on the tweak description
    std::sort(tweaks.begin(), tweaks.end(), [](auto a, auto b)
              { return Tweaks::getTweakData(a).description < Tweaks::getTweakData(b).description; });

    return tweaks;
}

void DeviceManager::removeTweaks(QLabel *statusLabel, bool deepClean) {
    statusLabel->setText("正在复制恢复的文件......");

    // Set the source directory path (assuming it's located in the binary directory)
    auto sourceDir = QCoreApplication::applicationDirPath();
    /*
    if (deepClean) {
        sourceDir +=  + "/restore-deepclean";
    } else {
        sourceDir +=  + "/restore";
    }*/
    auto enabledTweaksDirectoryPath = QCoreApplication::applicationDirPath() + "/JiTou/EnabledTweaks";
    auto enabledTweaksDirectory = QDir(enabledTweaksDirectoryPath);
    if (enabledTweaksDirectory.exists())
    {
        enabledTweaksDirectory.removeRecursively();
    }

    if (Utils::copyDirectory(sourceDir, enabledTweaksDirectoryPath))
    {
        // fix this idk
    }
    else
    {
        qDebug() << "无法创建工作目录";
    }

    statusLabel->setText("正在创建目录......");

    auto backupDirectoryPath = QCoreApplication::applicationDirPath() + "/JiTou/Backup";

    CreateBackup::createBackup(enabledTweaksDirectoryPath, backupDirectoryPath);

    statusLabel->setText("正在将文件写入设备......");

    auto success = DeviceManager::restoreBackupToDevice(*DeviceManager::getCurrentUUID(), QCoreApplication::applicationDirPath().toStdString()+ "/JiTou");

    if (success) {
        statusLabel->setText("大成功！！!");
    } else {
        statusLabel->setText("大失败!!!");
    }
}


void DeviceManager::applyTweaks(QLabel *statusLabel)
{
    auto workspace = DeviceManager::getCurrentWorkspace();
    statusLabel->setText("正在复制修改的文件...");

    // Erase backup folder
    auto enabledTweaksDirectoryPath = QCoreApplication::applicationDirPath() + "/JiTou/EnabledTweaks";
    auto enabledTweaksDirectory = QDir(enabledTweaksDirectoryPath);
    if (enabledTweaksDirectory.exists())
    {
        enabledTweaksDirectory.removeRecursively();
    }

    for (auto t : DeviceManager::getEnabledTweaks())
    {
        auto folderName = Tweaks::getTweakData(t).folderName;
        Utils::copyDirectory(QString::fromStdString(*workspace + "/" + folderName), enabledTweaksDirectoryPath);
    }

    statusLabel->setText("创建备份...");

    auto backupDirectoryPath = QCoreApplication::applicationDirPath() + "/JiTou/Backup";

    auto success_Create = CreateBackup::createBackup(enabledTweaksDirectoryPath, backupDirectoryPath);
    if (success_Create) {
        //
    } else {
        statusLabel->setText("大失败！！！创建备份文件失败");
        return;
    }

    statusLabel->setText("正在将文件写入设备...");

    auto success = DeviceManager::restoreBackupToDevice(*DeviceManager::getCurrentUUID(), QCoreApplication::applicationDirPath().toStdString() + "/JiTou");

    if (success) {
        statusLabel->setText("大成功！！！");
    } else {
        statusLabel->setText("大失败！！！");
    }
}

bool DeviceManager::restoreBackupToDevice(const std::string &udid, const std::string &backupDirectory)
{
    QStringList arguments;
    // do we need "settings"? it seems to make it faster, maybe it messes something?
    arguments << "-u" << QString::fromStdString(udid) << "-s" << "Backup" << "restore" << "--system" << "--skip-apps" << QString::fromStdString(backupDirectory);

    QProcess process;
    process.start("idevicebackup2.exe", arguments);
    process.waitForFinished(-1);

    QByteArray output = process.readAllStandardOutput();
    QByteArray errorOutput = process.readAllStandardError();

    // Split the output into lines using '\n' as the separator
    // AAA Fix using \r\n
    QStringList outputLines = QString(output).split("\r\n");

    // Get the last two lines of the output
    QString lastLine;
    QString secondLastLine;
    if (outputLines.size() >= 3) {
        lastLine = outputLines.at(outputLines.size() - 2);
        secondLastLine = outputLines.at(outputLines.size() - 3);
    } else {
        lastLine = output;
        secondLastLine = errorOutput;
    }

    if (lastLine == "Restore Successful.")
    {
        QMessageBox::information(nullptr, "大成功！！！", "哦耶恭喜你! 设备将会重启.\n\n如果输入密码后出现黑色的苹果加载界面不要害怕，稍等片刻后它就会消失\n\n!重要: 如果你进入系统发现是激活界面, 选择不传输APP和数据选项，很快你的设备就会回到主界面");
        return true;
    }
    QMessageBox detailsMessageBox;
    detailsMessageBox.setWindowTitle("Error!");
    detailsMessageBox.setIcon(QMessageBox::Critical);
    if (lastLine == "Restore Failed (Error Code 211).")
    {
        detailsMessageBox.setText("请关闭查找iPhone功能\n" + secondLastLine);/* code */
    }
    else{
        detailsMessageBox.setText(lastLine + "\n" + secondLastLine);
    }
    detailsMessageBox.setTextInteractionFlags(Qt::TextSelectableByMouse);
    detailsMessageBox.setDetailedText(errorOutput + "\n" + output);
    detailsMessageBox.exec();
    return false;
}
