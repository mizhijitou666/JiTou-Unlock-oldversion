/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JiTou
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_11;
    QWidget *deviceBar;
    QHBoxLayout *horizontalLayout_4;
    QWidget *horizontalWidget_2;
    QHBoxLayout *horizontalLayout_19;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_15;
    QToolButton *toolButton_6;
    QComboBox *devicePicker;
    QToolButton *refreshBtn;
    QToolButton *titleBar;
    QToolButton *closeBtn;
    QWidget *body;
    QHBoxLayout *horizontalLayout_18;
    QWidget *sidebar;
    QVBoxLayout *verticalLayout;
    QToolButton *homePageBtn;
    QFrame *sidebarDiv1;
    QToolButton *setupOptionsPageBtn;
    QFrame *sidebarDiv2;
    QToolButton *applyPageBtn;
    QSpacerItem *verticalSpacer;
    QWidget *main;
    QVBoxLayout *_3;
    QStackedWidget *pages;
    QWidget *homePage;
    QVBoxLayout *verticalLayout_2;
    QWidget *horizontalWidget1;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_9;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *phoneNameLbl;
    QLabel *phoneVersionLbl;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_4;
    QWidget *horizontalWidget2;
    QHBoxLayout *horizontalLayout_27;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *bigMilkBtn;
    QWidget *verticalWidget1;
    QVBoxLayout *verticalLayout_26;
    QSpacerItem *verticalSpacer_11;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_12;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_25;
    QWidget *horizontalWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *toolButton;
    QLabel *label_7;
    QWidget *horizontalWidget_21;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *avangelistaBtn;
    QToolButton *toolButton_5;
    QWidget *horizontalWidget3;
    QHBoxLayout *horizontalLayout_24;
    QToolButton *leminBtn;
    QToolButton *toolButton_14;
    QLabel *label_8;
    QLabel *label;
    QWidget *setupOptionsPage;
    QVBoxLayout *verticalLayout_17;
    QWidget *horizontalWidget_6;
    QHBoxLayout *horizontalLayout_21;
    QToolButton *toolButton_11;
    QWidget *verticalWidget_5;
    QVBoxLayout *verticalLayout_15;
    QLabel *setupOptionsLbl;
    QSpacerItem *horizontalSpacer_8;
    QWidget *verticalWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QWidget *horizontalWidget4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *maxValueTxt;
    QFrame *line;
    QWidget *setupOptionsPageContent;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_5;
    QCheckBox *restoreFileChk;
    QFrame *line_2;
    QLabel *setupWarning;
    QCheckBox *skipSetupChk;
    QCheckBox *setupCloseChk;
    QSpacerItem *verticalSpacer_7;
    QWidget *applyPage;
    QVBoxLayout *verticalLayout_6;
    QWidget *verticalWidget2;
    QVBoxLayout *verticalLayout_24;
    QWidget *locSimPageHeader_2;
    QHBoxLayout *horizontalLayout_33;
    QToolButton *toolButton_18;
    QWidget *verticalWidget_11;
    QVBoxLayout *verticalLayout_33;
    QLabel *statusBarLbl_5;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_15;
    QFrame *line_5;
    QLabel *applyWarning;
    QSpacerItem *verticalSpacer_10;
    QLabel *label_6;
    QLabel *enabledTweaksLbl;
    QWidget *horizontalWidget5;
    QHBoxLayout *horizontalLayout_17;
    QToolButton *applyTweaksBtn;
    QLabel *statusLbl;
    QSpacerItem *verticalSpacer_2;
    QWidget *horizontalWidget6;
    QHBoxLayout *horizontalLayout_25;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *horizontalSpacer_16;

    void setupUi(QMainWindow *JiTou)
    {
        if (JiTou->objectName().isEmpty())
            JiTou->setObjectName("JiTou");
        JiTou->resize(1000, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JiTou->sizePolicy().hasHeightForWidth());
        JiTou->setSizePolicy(sizePolicy);
        JiTou->setMinimumSize(QSize(1000, 600));
        JiTou->setMaximumSize(QSize(1000, 600));
        JiTou->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    color: #FFFFFF;\n"
"    background-color: transparent;\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QWidget:focus {\n"
"    outline: none;\n"
"}\n"
"\n"
"QWidget [cls=central] {\n"
"    background-color: #1e1e1e;\n"
"	border-radius: 14px;\n"
"	border: 1px solid #4B4B4B;\n"
"}\n"
"\n"
"QLabel {\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QToolButton {\n"
"    background-color: #3b3b3b;\n"
"    border: none;\n"
"    color: #e8e8e8;\n"
"    font-size: 14px;\n"
"	min-height: 35px;\n"
"	icon-size: 16px;\n"
"	padding-left: 10px;\n"
"	padding-right: 10px;\n"
"	border-radius: 8px;\n"
"}\n"
"\n"
"QToolButton[cls=sidebarBtn] {\n"
"    background-color: transparent;\n"
"	icon-size: 24px;\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"    background-color: #535353;\n"
"    color: #FFFFFF;\n"
"}\n"
"\n"
"QToolButton:checked {\n"
"    background-color: #2860ca;\n"
"    color: #FFFFFF;\n"
"}\n"
"\n"
"QCheckBox {\n"
"	spacing: 8px;\n"
"	font-size: 14px;\n"
"}\n"
"\n"
"QRadioButton {\n"
"	spacing: 8px;\n"
"	font-size: 14px;\n"
"}"
                        "\n"
"\n"
"QLineEdit {\n"
"	border: none;\n"
"	background-color: transparent;\n"
"	color: #FFFFFF;\n"
"	font-size: 14px;\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"    background: transparent;\n"
"    width: 8px;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    background: transparent;\n"
"    height: 8px;\n"
"}\n"
"\n"
"QScrollBar::handle {\n"
"    background: #3b3b3b;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QScrollBar::handle:pressed {\n"
"    background: #535353;\n"
"}\n"
"\n"
"QScrollBar::add-line,\n"
"QScrollBar::sub-line {\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar::add-page,\n"
"QScrollBar::sub-page {\n"
"    background: none;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    background-color: #3b3b3b;\n"
"    height: 4px;\n"
"	border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background-color: #535353;\n"
"    width: 8px;\n"
"    margin: -8px 0;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:pressed {\n"
"    background-color: #3b82f7;\n"
"}\n"
"\n"
""
                        "QSlider::tick:horizontal {\n"
"    background-color: #535353;\n"
"    width: 1px;\n"
"}\n"
""));
        centralwidget = new QWidget(JiTou);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        centralwidget->setContextMenuPolicy(Qt::NoContextMenu);
        centralwidget->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        verticalLayout_11 = new QVBoxLayout(centralwidget);
        verticalLayout_11->setObjectName("verticalLayout_11");
        deviceBar = new QWidget(centralwidget);
        deviceBar->setObjectName("deviceBar");
        horizontalLayout_4 = new QHBoxLayout(deviceBar);
        horizontalLayout_4->setSpacing(1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalWidget_2 = new QWidget(deviceBar);
        horizontalWidget_2->setObjectName("horizontalWidget_2");
        horizontalWidget_2->setMinimumSize(QSize(300, 0));
        horizontalLayout_19 = new QHBoxLayout(horizontalWidget_2);
        horizontalLayout_19->setSpacing(1);
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        horizontalWidget = new QWidget(horizontalWidget_2);
        horizontalWidget->setObjectName("horizontalWidget");
        horizontalLayout_15 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_15->setSpacing(0);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        toolButton_6 = new QToolButton(horizontalWidget);
        toolButton_6->setObjectName("toolButton_6");
        toolButton_6->setEnabled(false);
        toolButton_6->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	border-top-right-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/phone.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_6->setIcon(icon);

        horizontalLayout_15->addWidget(toolButton_6);

        devicePicker = new QComboBox(horizontalWidget);
        devicePicker->setObjectName("devicePicker");
        devicePicker->setStyleSheet(QString::fromUtf8("#devicePicker {\n"
"	background-color: #3b3b3b;\n"
"    border: none;\n"
"    color: #e8e8e8;\n"
"    font-size: 14px;\n"
"    min-height: 38px;\n"
"	min-width: 35px;\n"
"	padding-left: 8px;\n"
"}\n"
"\n"
"#devicePicker::drop-down {\n"
"    image: url(:/icon/caret-down-fill.svg);\n"
"	icon-size: 16px;\n"
"    subcontrol-position: right center;\n"
"	margin-right: 8px;\n"
"}\n"
"\n"
"#devicePicker QAbstractItemView {\n"
"	background-color: #3b3b3b;\n"
"    outline: none;\n"
"	margin-top: 1px;\n"
"}\n"
"\n"
"#devicePicker QAbstractItemView::item {\n"
"	background-color: #3b3b3b;\n"
"	color: #e8e8e8;\n"
"	min-height: 38px;\n"
"    padding-left: 8px;\n"
"}\n"
"\n"
"#devicePicker QAbstractItemView::item:hover {\n"
"    background-color: #535353;\n"
"    color: #ffffff;\n"
"}"));
        devicePicker->setDuplicatesEnabled(true);

        horizontalLayout_15->addWidget(devicePicker);


        horizontalLayout_19->addWidget(horizontalWidget);

        refreshBtn = new QToolButton(horizontalWidget_2);
        refreshBtn->setObjectName("refreshBtn");
        refreshBtn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	border-radius: 0px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/arrow-clockwise.svg"), QSize(), QIcon::Normal, QIcon::Off);
        refreshBtn->setIcon(icon1);
        refreshBtn->setCheckable(false);
        refreshBtn->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout_19->addWidget(refreshBtn);


        horizontalLayout_4->addWidget(horizontalWidget_2);

        titleBar = new QToolButton(deviceBar);
        titleBar->setObjectName("titleBar");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(titleBar->sizePolicy().hasHeightForWidth());
        titleBar->setSizePolicy(sizePolicy1);
        titleBar->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"	background-color: #3b3b3b;\n"
"}"));

        horizontalLayout_4->addWidget(titleBar);

        closeBtn = new QToolButton(deviceBar);
        closeBtn->setObjectName("closeBtn");
        closeBtn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	border-top-left-radius: 0px;\n"
"	border-bottom-left-radius: 0px;\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"	background-color: #ff453a;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/x-lg.svg"), QSize(), QIcon::Normal, QIcon::Off);
        closeBtn->setIcon(icon2);

        horizontalLayout_4->addWidget(closeBtn);


        verticalLayout_11->addWidget(deviceBar);

        body = new QWidget(centralwidget);
        body->setObjectName("body");
        body->setMinimumSize(QSize(0, 20));
        horizontalLayout_18 = new QHBoxLayout(body);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        sidebar = new QWidget(body);
        sidebar->setObjectName("sidebar");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sidebar->sizePolicy().hasHeightForWidth());
        sidebar->setSizePolicy(sizePolicy2);
        sidebar->setMinimumSize(QSize(300, 0));
        sidebar->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	color: #414141;\n"
"}"));
        verticalLayout = new QVBoxLayout(sidebar);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 9, 9, 0);
        homePageBtn = new QToolButton(sidebar);
        homePageBtn->setObjectName("homePageBtn");
        sizePolicy1.setHeightForWidth(homePageBtn->sizePolicy().hasHeightForWidth());
        homePageBtn->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/house.svg"), QSize(), QIcon::Normal, QIcon::Off);
        homePageBtn->setIcon(icon3);
        homePageBtn->setCheckable(true);
        homePageBtn->setChecked(true);
        homePageBtn->setAutoExclusive(true);
        homePageBtn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(homePageBtn);

        sidebarDiv1 = new QFrame(sidebar);
        sidebarDiv1->setObjectName("sidebarDiv1");
        sidebarDiv1->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	color: #414141;\n"
"}"));
        sidebarDiv1->setFrameShadow(QFrame::Plain);
        sidebarDiv1->setFrameShape(QFrame::Shape::HLine);

        verticalLayout->addWidget(sidebarDiv1);

        setupOptionsPageBtn = new QToolButton(sidebar);
        setupOptionsPageBtn->setObjectName("setupOptionsPageBtn");
        sizePolicy1.setHeightForWidth(setupOptionsPageBtn->sizePolicy().hasHeightForWidth());
        setupOptionsPageBtn->setSizePolicy(sizePolicy1);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/gear.svg"), QSize(), QIcon::Normal, QIcon::Off);
        setupOptionsPageBtn->setIcon(icon4);
        setupOptionsPageBtn->setCheckable(true);
        setupOptionsPageBtn->setAutoExclusive(true);
        setupOptionsPageBtn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(setupOptionsPageBtn);

        sidebarDiv2 = new QFrame(sidebar);
        sidebarDiv2->setObjectName("sidebarDiv2");
        sidebarDiv2->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	color: #414141;\n"
"}"));
        sidebarDiv2->setFrameShadow(QFrame::Plain);
        sidebarDiv2->setFrameShape(QFrame::Shape::HLine);

        verticalLayout->addWidget(sidebarDiv2);

        applyPageBtn = new QToolButton(sidebar);
        applyPageBtn->setObjectName("applyPageBtn");
        sizePolicy1.setHeightForWidth(applyPageBtn->sizePolicy().hasHeightForWidth());
        applyPageBtn->setSizePolicy(sizePolicy1);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/check-circle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        applyPageBtn->setIcon(icon5);
        applyPageBtn->setCheckable(true);
        applyPageBtn->setAutoExclusive(true);
        applyPageBtn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(applyPageBtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_18->addWidget(sidebar);

        main = new QWidget(body);
        main->setObjectName("main");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(main->sizePolicy().hasHeightForWidth());
        main->setSizePolicy(sizePolicy3);
        _3 = new QVBoxLayout(main);
        _3->setSpacing(0);
        _3->setObjectName("_3");
        _3->setContentsMargins(9, 0, 0, 0);
        pages = new QStackedWidget(main);
        pages->setObjectName("pages");
        homePage = new QWidget();
        homePage->setObjectName("homePage");
        verticalLayout_2 = new QVBoxLayout(homePage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalWidget1 = new QWidget(homePage);
        horizontalWidget1->setObjectName("horizontalWidget1");
        horizontalLayout = new QHBoxLayout(horizontalWidget1);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 9, 0, 9);
        toolButton_9 = new QToolButton(horizontalWidget1);
        toolButton_9->setObjectName("toolButton_9");
        toolButton_9->setEnabled(false);
        toolButton_9->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	icon-size: 24px;\n"
"	background-color: transparent;\n"
"	padding-left: 0px;\n"
"	padding-right: 5px;\n"
"	border-radius: 0px;\n"
"}"));
        toolButton_9->setIcon(icon);

        horizontalLayout->addWidget(toolButton_9);

        verticalWidget = new QWidget(horizontalWidget1);
        verticalWidget->setObjectName("verticalWidget");
        verticalLayout_3 = new QVBoxLayout(verticalWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        phoneNameLbl = new QLabel(verticalWidget);
        phoneNameLbl->setObjectName("phoneNameLbl");
        QFont font;
        font.setBold(false);
        phoneNameLbl->setFont(font);

        verticalLayout_3->addWidget(phoneNameLbl);

        phoneVersionLbl = new QLabel(verticalWidget);
        phoneVersionLbl->setObjectName("phoneVersionLbl");
        phoneVersionLbl->setCursor(QCursor(Qt::PointingHandCursor));
        phoneVersionLbl->setTextFormat(Qt::RichText);
        phoneVersionLbl->setOpenExternalLinks(false);

        verticalLayout_3->addWidget(phoneVersionLbl);


        horizontalLayout->addWidget(verticalWidget);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_2->addWidget(horizontalWidget1);

        line_4 = new QFrame(homePage);
        line_4->setObjectName("line_4");
        line_4->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	color: #414141;\n"
"}"));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setFrameShape(QFrame::Shape::HLine);

        verticalLayout_2->addWidget(line_4);

        horizontalWidget2 = new QWidget(homePage);
        horizontalWidget2->setObjectName("horizontalWidget2");
        horizontalLayout_27 = new QHBoxLayout(horizontalWidget2);
        horizontalLayout_27->setSpacing(50);
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        horizontalLayout_27->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_2);

        bigMilkBtn = new QToolButton(horizontalWidget2);
        bigMilkBtn->setObjectName("bigMilkBtn");
        bigMilkBtn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: transparent;\n"
"	padding: 0px;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("icon_512x512@2x@2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        bigMilkBtn->setIcon(icon6);
        bigMilkBtn->setIconSize(QSize(120, 200));

        horizontalLayout_27->addWidget(bigMilkBtn);

        verticalWidget1 = new QWidget(horizontalWidget2);
        verticalWidget1->setObjectName("verticalWidget1");
        verticalLayout_26 = new QVBoxLayout(verticalWidget1);
        verticalLayout_26->setObjectName("verticalLayout_26");
        verticalLayout_26->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_26->addItem(verticalSpacer_11);

        label_2 = new QLabel(verticalWidget1);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-size: 29px;\n"
"}"));

        verticalLayout_26->addWidget(label_2);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_26->addItem(verticalSpacer_12);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_26->addItem(verticalSpacer_4);


        horizontalLayout_27->addWidget(verticalWidget1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_12);


        verticalLayout_2->addWidget(horizontalWidget2);

        verticalWidget_2 = new QWidget(homePage);
        verticalWidget_2->setObjectName("verticalWidget_2");
        verticalLayout_25 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_25->setSpacing(15);
        verticalLayout_25->setObjectName("verticalLayout_25");
        verticalLayout_25->setContentsMargins(0, 30, 0, 30);
        horizontalWidget_3 = new QWidget(verticalWidget_2);
        horizontalWidget_3->setObjectName("horizontalWidget_3");
        horizontalLayout_5 = new QHBoxLayout(horizontalWidget_3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        toolButton = new QToolButton(horizontalWidget_3);
        toolButton->setObjectName("toolButton");
        toolButton->setEnabled(false);
        toolButton->setMinimumSize(QSize(150, 35));
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background: none;\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("credits/4261694412967_.pic.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon7.addFile(QString::fromUtf8("credits/4261694412967_.pic.jpg"), QSize(), QIcon::Disabled, QIcon::Off);
        toolButton->setIcon(icon7);
        toolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_5->addWidget(toolButton);

        label_7 = new QLabel(horizontalWidget_3);
        label_7->setObjectName("label_7");
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setMinimumSize(QSize(0, 35));
        label_7->setLayoutDirection(Qt::LeftToRight);
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_7);

        label_7->raise();
        toolButton->raise();

        verticalLayout_25->addWidget(horizontalWidget_3);

        horizontalWidget_21 = new QWidget(verticalWidget_2);
        horizontalWidget_21->setObjectName("horizontalWidget_21");
        horizontalLayout_2 = new QHBoxLayout(horizontalWidget_21);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        avangelistaBtn = new QToolButton(horizontalWidget_21);
        avangelistaBtn->setObjectName("avangelistaBtn");
        avangelistaBtn->setEnabled(false);
        avangelistaBtn->setMinimumSize(QSize(150, 35));
        avangelistaBtn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background: none;\n"
"}"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("credits/Avangelista.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon8.addFile(QString::fromUtf8("credits/Avangelista.png"), QSize(), QIcon::Disabled, QIcon::Off);
        avangelistaBtn->setIcon(icon8);
        avangelistaBtn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(avangelistaBtn);

        toolButton_5 = new QToolButton(horizontalWidget_21);
        toolButton_5->setObjectName("toolButton_5");
        toolButton_5->setEnabled(false);
        sizePolicy1.setHeightForWidth(toolButton_5->sizePolicy().hasHeightForWidth());
        toolButton_5->setSizePolicy(sizePolicy1);
        toolButton_5->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background: none;\n"
"}"));

        horizontalLayout_2->addWidget(toolButton_5);


        verticalLayout_25->addWidget(horizontalWidget_21);

        horizontalWidget3 = new QWidget(verticalWidget_2);
        horizontalWidget3->setObjectName("horizontalWidget3");
        horizontalLayout_24 = new QHBoxLayout(horizontalWidget3);
        horizontalLayout_24->setSpacing(0);
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        horizontalLayout_24->setContentsMargins(0, 0, 0, 0);
        leminBtn = new QToolButton(horizontalWidget3);
        leminBtn->setObjectName("leminBtn");
        leminBtn->setEnabled(false);
        leminBtn->setMinimumSize(QSize(150, 35));
        leminBtn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background: none;\n"
"}"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("credits/LeminLimez.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon9.addFile(QString::fromUtf8("credits/LeminLimez.png"), QSize(), QIcon::Disabled, QIcon::Off);
        leminBtn->setIcon(icon9);
        leminBtn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_24->addWidget(leminBtn);

        toolButton_14 = new QToolButton(horizontalWidget3);
        toolButton_14->setObjectName("toolButton_14");
        toolButton_14->setEnabled(false);
        sizePolicy1.setHeightForWidth(toolButton_14->sizePolicy().hasHeightForWidth());
        toolButton_14->setSizePolicy(sizePolicy1);
        toolButton_14->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background: none;\n"
"}"));

        horizontalLayout_24->addWidget(toolButton_14);


        verticalLayout_25->addWidget(horizontalWidget3);

        label_8 = new QLabel(verticalWidget_2);
        label_8->setObjectName("label_8");

        verticalLayout_25->addWidget(label_8);


        verticalLayout_2->addWidget(verticalWidget_2);

        label = new QLabel(homePage);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label);

        pages->addWidget(homePage);
        setupOptionsPage = new QWidget();
        setupOptionsPage->setObjectName("setupOptionsPage");
        verticalLayout_17 = new QVBoxLayout(setupOptionsPage);
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        horizontalWidget_6 = new QWidget(setupOptionsPage);
        horizontalWidget_6->setObjectName("horizontalWidget_6");
        horizontalLayout_21 = new QHBoxLayout(horizontalWidget_6);
        horizontalLayout_21->setSpacing(10);
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        horizontalLayout_21->setContentsMargins(0, 9, 0, 9);
        toolButton_11 = new QToolButton(horizontalWidget_6);
        toolButton_11->setObjectName("toolButton_11");
        toolButton_11->setEnabled(false);
        toolButton_11->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	icon-size: 24px;\n"
"	background-color: transparent;\n"
"	padding-left: 0px;\n"
"	padding-right: 5px;\n"
"	border-radius: 0px;\n"
"}"));
        toolButton_11->setIcon(icon4);

        horizontalLayout_21->addWidget(toolButton_11);

        verticalWidget_5 = new QWidget(horizontalWidget_6);
        verticalWidget_5->setObjectName("verticalWidget_5");
        verticalLayout_15 = new QVBoxLayout(verticalWidget_5);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        setupOptionsLbl = new QLabel(verticalWidget_5);
        setupOptionsLbl->setObjectName("setupOptionsLbl");
        setupOptionsLbl->setFont(font);

        verticalLayout_15->addWidget(setupOptionsLbl);


        horizontalLayout_21->addWidget(verticalWidget_5);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_8);


        verticalLayout_17->addWidget(horizontalWidget_6);

        verticalWidget_3 = new QWidget(setupOptionsPage);
        verticalWidget_3->setObjectName("verticalWidget_3");
        verticalLayout_4 = new QVBoxLayout(verticalWidget_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(verticalWidget_3);
        label_4->setObjectName("label_4");

        verticalLayout_4->addWidget(label_4);

        horizontalWidget4 = new QWidget(verticalWidget_3);
        horizontalWidget4->setObjectName("horizontalWidget4");
        horizontalLayout_3 = new QHBoxLayout(horizontalWidget4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(horizontalWidget4);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        maxValueTxt = new QLineEdit(horizontalWidget4);
        maxValueTxt->setObjectName("maxValueTxt");

        horizontalLayout_3->addWidget(maxValueTxt);


        verticalLayout_4->addWidget(horizontalWidget4);


        verticalLayout_17->addWidget(verticalWidget_3);

        line = new QFrame(setupOptionsPage);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_17->addWidget(line);

        setupOptionsPageContent = new QWidget(setupOptionsPage);
        setupOptionsPageContent->setObjectName("setupOptionsPageContent");
        setupOptionsPageContent->setEnabled(true);
        verticalLayout_16 = new QVBoxLayout(setupOptionsPageContent);
        verticalLayout_16->setObjectName("verticalLayout_16");
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(setupOptionsPageContent);
        label_5->setObjectName("label_5");

        verticalLayout_16->addWidget(label_5);

        restoreFileChk = new QCheckBox(setupOptionsPageContent);
        restoreFileChk->setObjectName("restoreFileChk");

        verticalLayout_16->addWidget(restoreFileChk);

        line_2 = new QFrame(setupOptionsPageContent);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_16->addWidget(line_2);

        setupWarning = new QLabel(setupOptionsPageContent);
        setupWarning->setObjectName("setupWarning");

        verticalLayout_16->addWidget(setupWarning);

        skipSetupChk = new QCheckBox(setupOptionsPageContent);
        skipSetupChk->setObjectName("skipSetupChk");

        verticalLayout_16->addWidget(skipSetupChk);

        setupCloseChk = new QCheckBox(setupOptionsPageContent);
        setupCloseChk->setObjectName("setupCloseChk");

        verticalLayout_16->addWidget(setupCloseChk);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_16->addItem(verticalSpacer_7);


        verticalLayout_17->addWidget(setupOptionsPageContent);

        pages->addWidget(setupOptionsPage);
        applyPage = new QWidget();
        applyPage->setObjectName("applyPage");
        verticalLayout_6 = new QVBoxLayout(applyPage);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalWidget2 = new QWidget(applyPage);
        verticalWidget2->setObjectName("verticalWidget2");
        verticalLayout_24 = new QVBoxLayout(verticalWidget2);
        verticalLayout_24->setObjectName("verticalLayout_24");
        verticalLayout_24->setContentsMargins(0, 0, 0, 0);
        locSimPageHeader_2 = new QWidget(verticalWidget2);
        locSimPageHeader_2->setObjectName("locSimPageHeader_2");
        horizontalLayout_33 = new QHBoxLayout(locSimPageHeader_2);
        horizontalLayout_33->setSpacing(10);
        horizontalLayout_33->setObjectName("horizontalLayout_33");
        horizontalLayout_33->setContentsMargins(0, -1, 0, -1);
        toolButton_18 = new QToolButton(locSimPageHeader_2);
        toolButton_18->setObjectName("toolButton_18");
        toolButton_18->setEnabled(false);
        toolButton_18->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	icon-size: 24px;\n"
"	background-color: transparent;\n"
"	padding-left: 0px;\n"
"	padding-right: 5px;\n"
"	border-radius: 0px;\n"
"}"));
        toolButton_18->setIcon(icon5);

        horizontalLayout_33->addWidget(toolButton_18);

        verticalWidget_11 = new QWidget(locSimPageHeader_2);
        verticalWidget_11->setObjectName("verticalWidget_11");
        verticalLayout_33 = new QVBoxLayout(verticalWidget_11);
        verticalLayout_33->setSpacing(6);
        verticalLayout_33->setObjectName("verticalLayout_33");
        verticalLayout_33->setContentsMargins(0, 0, 0, 0);
        statusBarLbl_5 = new QLabel(verticalWidget_11);
        statusBarLbl_5->setObjectName("statusBarLbl_5");
        statusBarLbl_5->setFont(font);

        verticalLayout_33->addWidget(statusBarLbl_5);

        label_16 = new QLabel(verticalWidget_11);
        label_16->setObjectName("label_16");

        verticalLayout_33->addWidget(label_16);


        horizontalLayout_33->addWidget(verticalWidget_11);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_33->addItem(horizontalSpacer_15);


        verticalLayout_24->addWidget(locSimPageHeader_2);

        line_5 = new QFrame(verticalWidget2);
        line_5->setObjectName("line_5");
        line_5->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	color: #414141;\n"
"}"));
        line_5->setFrameShadow(QFrame::Plain);
        line_5->setFrameShape(QFrame::Shape::HLine);

        verticalLayout_24->addWidget(line_5);

        applyWarning = new QLabel(verticalWidget2);
        applyWarning->setObjectName("applyWarning");
        applyWarning->setFont(font);

        verticalLayout_24->addWidget(applyWarning);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_24->addItem(verticalSpacer_10);

        label_6 = new QLabel(verticalWidget2);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_24->addWidget(label_6);

        enabledTweaksLbl = new QLabel(verticalWidget2);
        enabledTweaksLbl->setObjectName("enabledTweaksLbl");
        enabledTweaksLbl->setAlignment(Qt::AlignCenter);

        verticalLayout_24->addWidget(enabledTweaksLbl);

        horizontalWidget5 = new QWidget(verticalWidget2);
        horizontalWidget5->setObjectName("horizontalWidget5");
        horizontalLayout_17 = new QHBoxLayout(horizontalWidget5);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_17->setContentsMargins(0, 20, 0, 0);
        applyTweaksBtn = new QToolButton(horizontalWidget5);
        applyTweaksBtn->setObjectName("applyTweaksBtn");
        applyTweaksBtn->setIcon(icon5);
        applyTweaksBtn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_17->addWidget(applyTweaksBtn);


        verticalLayout_24->addWidget(horizontalWidget5);

        statusLbl = new QLabel(verticalWidget2);
        statusLbl->setObjectName("statusLbl");
        statusLbl->setAlignment(Qt::AlignCenter);

        verticalLayout_24->addWidget(statusLbl);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_24->addItem(verticalSpacer_2);

        horizontalWidget6 = new QWidget(verticalWidget2);
        horizontalWidget6->setObjectName("horizontalWidget6");
        horizontalLayout_25 = new QHBoxLayout(horizontalWidget6);
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        horizontalLayout_25->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_14);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_16);


        verticalLayout_24->addWidget(horizontalWidget6);


        verticalLayout_6->addWidget(verticalWidget2);

        pages->addWidget(applyPage);

        _3->addWidget(pages);


        horizontalLayout_18->addWidget(main);


        verticalLayout_11->addWidget(body);

        JiTou->setCentralWidget(centralwidget);

        retranslateUi(JiTou);

        pages->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(JiTou);
    } // setupUi

    void retranslateUi(QMainWindow *JiTou)
    {
        JiTou->setWindowTitle(QCoreApplication::translate("JiTou", "JiTou-unlock", nullptr));
        centralwidget->setProperty("cls", QVariant(QCoreApplication::translate("JiTou", "central", nullptr)));
        devicePicker->setPlaceholderText(QCoreApplication::translate("JiTou", "None", nullptr));
        refreshBtn->setProperty("cls", QVariant(QCoreApplication::translate("JiTou", "btn", nullptr)));
        titleBar->setText(QCoreApplication::translate("JiTou", "\350\247\243\351\231\244Apple Watch OS \351\205\215\345\257\271\351\231\220\345\210\266", nullptr));
        homePageBtn->setText(QCoreApplication::translate("JiTou", "  \344\270\273\351\241\265", nullptr));
        homePageBtn->setProperty("cls", QVariant(QCoreApplication::translate("JiTou", "sidebarBtn", nullptr)));
        setupOptionsPageBtn->setText(QCoreApplication::translate("JiTou", "  \350\247\243\351\231\244Apple Watch OS \347\211\210\346\234\254\351\205\215\345\257\271\351\231\220\345\210\266", nullptr));
        setupOptionsPageBtn->setProperty("cls", QVariant(QCoreApplication::translate("JiTou", "sidebarBtn", nullptr)));
        applyPageBtn->setText(QCoreApplication::translate("JiTou", "  \345\272\224\347\224\250", nullptr));
        applyPageBtn->setProperty("cls", QVariant(QCoreApplication::translate("JiTou", "sidebarBtn", nullptr)));
        phoneNameLbl->setText(QCoreApplication::translate("JiTou", "Phone", nullptr));
        phoneVersionLbl->setText(QCoreApplication::translate("JiTou", "<a style=\"text-decoration:none; color: white\" href=\"#\">Version</a>", nullptr));
        bigMilkBtn->setText(QCoreApplication::translate("JiTou", "...", nullptr));
        label_2->setText(QCoreApplication::translate("JiTou", "Apple Watch Unlock", nullptr));
        toolButton->setText(QCoreApplication::translate("JiTou", "   \350\234\234\346\261\201\351\270\241\345\244\264", nullptr));
        label_7->setText(QCoreApplication::translate("JiTou", "\344\277\256\346\224\271Apple Watch Unlock\347\211\210\346\234\254\351\205\215\345\257\271\351\231\220\345\210\266", nullptr));
        avangelistaBtn->setText(QCoreApplication::translate("JiTou", "  Avangelista", nullptr));
        toolButton_5->setText(QCoreApplication::translate("JiTou", "Main Windows Developer, Backup Generator, App Getter", nullptr));
        leminBtn->setText(QCoreApplication::translate("JiTou", "  LeminLimez", nullptr));
        toolButton_14->setText(QCoreApplication::translate("JiTou", "Main Mac Developer, Cowabunga MDC Developer", nullptr));
        label_8->setText(QCoreApplication::translate("JiTou", "<html><head/><body><p>\346\260\270\344\271\205\345\205\215\350\264\271\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201</p><p>\346\234\254\350\275\257\344\273\266\346\260\270\344\271\205\345\205\215\350\264\271\357\274\214\345\246\202\346\236\234\346\202\250\346\230\257\344\273\230\350\264\271\350\216\267\345\276\227\350\257\245\350\275\257\344\273\266\347\232\204\350\257\235\357\274\214</p><p>\350\257\267\345\217\212\346\227\266\344\270\276\346\212\245\345\271\266\351\200\200\346\254\276\346\235\245\347\273\264\346\212\244\350\207\252\350\272\253\347\232\204\346\235\203\347\233\212\357\274\201\357\274\201\357\274\201</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("JiTou", "\344\277\256\346\224\271\350\207\252Cowabunga Lite Windows - Version 1.0.1", nullptr));
        setupOptionsLbl->setText(QCoreApplication::translate("JiTou", "\350\247\243\351\231\244Apple Watch OS \347\211\210\346\234\254\351\205\215\345\257\271\351\231\220\345\210\266\357\274\210\344\275\216\347\211\210\346\234\254IOS\351\205\215\345\257\271\351\253\230\347\211\210\346\234\254\357\274\211", nullptr));
        label_4->setText(QCoreApplication::translate("JiTou", "<html><head/><body><p>\345\275\223watchOS\347\211\210\346\234\254\345\207\272\347\216\260\346\233\264\346\226\260\345\257\274\350\207\264max\345\200\274\346\227\240\346\263\225\351\205\215\345\257\271\346\234\200\346\226\260\347\232\204watchOS\345\200\274\346\227\266</p><p>\344\275\240\345\217\257\344\273\245\345\234\250\344\270\213\351\235\242\346\233\264\346\224\271max\345\200\274\357\274\214\351\273\230\350\256\244\344\270\27236</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("JiTou", "max\345\200\274\357\274\232", nullptr));
        maxValueTxt->setPlaceholderText(QCoreApplication::translate("JiTou", "max\345\200\274", nullptr));
        label_5->setText(QCoreApplication::translate("JiTou", "\345\275\223\345\207\272\347\216\260\345\245\207\346\200\252\347\232\204\351\227\256\351\242\230\347\232\204\346\227\266\345\200\231\357\274\214\345\217\257\344\273\245\345\213\276\351\200\211\344\270\213\345\210\227\351\200\211\351\241\271\350\277\230\345\216\237\346\226\207\344\273\266", nullptr));
        restoreFileChk->setText(QCoreApplication::translate("JiTou", "\350\277\230\345\216\237\344\277\256\346\224\271\350\277\207\347\232\204\346\226\207\344\273\266", nullptr));
        setupWarning->setText(QCoreApplication::translate("JiTou", "\346\234\211\351\224\201\346\234\272\344\275\277\347\224\250\345\267\245\345\205\267\345\220\216\345\207\272\347\216\260\346\227\240\346\263\225\345\215\241IPCC\347\232\204\351\227\256\351\242\230(\345\217\257\350\203\275\345\267\262\347\273\217\344\277\256\345\244\215)\n"
"\345\246\202\346\236\234\344\275\240\344\275\277\347\224\250\347\232\204\346\230\257\346\234\211\351\224\201\346\234\272\345\271\266\346\234\211\345\215\241IPCC\347\232\204\351\234\200\346\261\202\350\257\267\346\211\213\345\212\250\346\212\212\344\270\213\351\235\242\347\232\204\351\200\211\351\241\271\345\213\276\346\216\211\n"
"\345\246\202\346\236\234\344\275\277\347\224\250\350\275\257\344\273\266\345\220\216\350\277\230\346\230\257\346\227\240\346\263\225\345\215\241IPCC\346\210\226\345\207\272\347\216\260\345\215\241\347\233\221\347\256\241\346\250\241\345\274\217\346\227\240\346\263\225\346\277\200\346\264\273\347\232\204\346\203\205\345\206\265\350\257\267\345\222\214\344\275\234\350\200\205\350\201\224\347\263\273", nullptr));
        skipSetupChk->setText(QCoreApplication::translate("JiTou", "\350\267\263\350\277\207\351\207\215\345\220\257\345\220\216\347\232\204\346\277\200\346\264\273\347\225\214\351\235\242\357\274\210\346\216\250\350\215\220\357\274\211", nullptr));
        setupCloseChk->setText(QCoreApplication::translate("JiTou", "iOS15.4\345\217\212\344\273\245\344\270\213\346\234\272\345\236\213\350\257\267\345\213\276\351\200\211\350\277\231\344\270\252\346\214\211\351\222\256", nullptr));
        statusBarLbl_5->setText(QCoreApplication::translate("JiTou", "\345\272\224\347\224\250", nullptr));
        label_16->setText(QString());
        applyWarning->setText(QCoreApplication::translate("JiTou", "\351\207\215\345\220\257\345\220\216\350\213\245\345\207\272\347\216\260\342\200\234APP\344\270\216\346\225\260\346\215\256\342\200\235\344\274\240\350\276\223\344\270\200\345\256\232\350\246\201\351\200\211\357\274\232\n"
"\344\270\215\350\246\201\344\274\240\350\276\223APP\344\270\216\346\225\260\346\215\256\n"
"\n"
"\345\246\202\346\236\234iOS17.2\344\273\245\344\270\212\344\275\277\347\224\250\350\257\245\345\267\245\345\205\267\357\274\214\350\257\267\346\263\250\346\204\217\357\274\201\357\274\201\n"
"\345\246\202\346\236\234\346\202\250\347\234\213\345\210\260\346\230\276\347\244\272\342\200\234iPhone\351\203\250\345\210\206\350\256\276\347\275\256\342\200\235\347\232\204\345\261\217\345\271\225\n"
"\350\257\267\345\215\225\345\207\273\342\200\234\347\273\247\347\273\255\351\203\250\345\210\206\350\256\276\347\275\256\342\200\235\346\214\211\351\222\256\357\274\214\345\220\246\345\210\231\346\202\250\347\232\204\346\211\213\346\234\272\346\225\260\346\215\256\345\260\206\350\242\253\345\210\240\351\231\244"
                        "\357\274\201", nullptr));
        label_6->setText(QCoreApplication::translate("JiTou", "\345\220\257\347\224\250\347\232\204\344\277\256\346\224\271\357\274\232", nullptr));
        enabledTweaksLbl->setText(QCoreApplication::translate("JiTou", "\346\227\240", nullptr));
        applyTweaksBtn->setText(QCoreApplication::translate("JiTou", " \345\272\224\347\224\250\346\233\264\346\224\271", nullptr));
        statusLbl->setText(QCoreApplication::translate("JiTou", "\345\207\206\345\244\207\345\245\275\344\272\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JiTou: public Ui_JiTou {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
