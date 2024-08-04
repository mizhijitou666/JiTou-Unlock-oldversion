#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class JiTou; }
QT_END_NAMESPACE

enum class Page {
    Home = 0,
    SetupOptions = 1,
    Apply = 2
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // Sidebar
    void on_refreshBtn_clicked();
    void on_devicePicker_activated(int index);
    void on_homePageBtn_clicked();
    void on_setupOptionsPageBtn_clicked();
    void on_applyPageBtn_clicked();

    // Home
    void on_phoneVersionLbl_linkActivated(const QString &link);

    // Setup Options
    void on_maxValueTxt_textEdited(const QString &text);
    void on_restoreFileChk_clicked(bool checked);
    void on_skipSetupChk_clicked(bool checked);
    void on_setupCloseChk_clicked(bool checked);
    // Apply
    void on_applyTweaksBtn_clicked();

    // Window
    void on_titleBar_pressed();
    void on_closeBtn_clicked();

private:
    Ui::JiTou *ui;

    // Utilities
    void updateInterfaceForNewDevice();

    // Sidebar
    void refreshDevices();

    // Home
    void updatePhoneInfo();

    // Setup Options
    void loadSetupOptions();

    // Apply
    void updateEnabledTweaks();
};
#endif // MAINWINDOW_H
