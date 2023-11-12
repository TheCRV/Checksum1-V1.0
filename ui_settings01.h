/********************************************************************************
** Form generated from reading UI file 'settings01.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS01_H
#define UI_SETTINGS01_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settings01
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_bottom;
    QHBoxLayout *horizontalLayout;
    QPushButton *ok01;
    QPushButton *cancel01;
    QPushButton *apply01;
    QPushButton *saveSettings01;
    QPushButton *loadSettings01;
    QPushButton *restoreDefaults01;
    QFrame *frame01;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget01;
    QWidget *page01;
    QGridLayout *gridLayout_4;
    QScrollArea *scrollArea01;
    QWidget *scrollAreaWidgetContents01;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_placeHolder;
    QWidget *page02;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea02;
    QWidget *scrollAreaWidgetContents02;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_basicFilters01;
    QCheckBox *checkBox_showHidden01;
    QCheckBox *checkBox_showSystem01;
    QCheckBox *checkBox_hideSymLinks01;
    QLabel *label_advFilters01;
    QCheckBox *checkBox_dontFollowSymLinks01;
    QCheckBox *checkBox_dontUseIcons01;
    QCheckBox *checkBox_dontWatchFS01;
    QLabel *label_miscSettings01;
    QCheckBox *checkBox_listAllFiles01;
    QCheckBox *checkBox_allowAutoThreads01;
    QLabel *label_numThreads01;
    QSpinBox *spinBox_numberOfThreads01;
    QWidget *page03;
    QGridLayout *gridLayout_5;
    QScrollArea *scrollArea03;
    QWidget *scrollAreaWidgetContents03;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_basicFilters02;
    QComboBox *comboBox_verifyFilePaths01;
    QCheckBox *checkBox_searchHidden01;
    QCheckBox *checkBox_searchSystem01;
    QCheckBox *checkBox_ignoreSymLinks01;
    QLabel *label_advFilters02;
    QCheckBox *checkBox_noFollowSymLinks01;
    QLabel *label_miscSettings02;
    QFrame *frame_settings01;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_fileChecksumSettings01;
    QSpacerItem *verticalSpacer01;
    QPushButton *pushButton_checksumFileSettings01;
    QSpacerItem *verticalSpacer02;
    QPushButton *pushButton_verifyCSFileSettings01;
    QSpacerItem *verticalSpacer03;

    void setupUi(QDialog *settings01)
    {
        if (settings01->objectName().isEmpty())
            settings01->setObjectName(QString::fromUtf8("settings01"));
        settings01->resize(1000, 700);
        gridLayout = new QGridLayout(settings01);
        gridLayout->setSpacing(1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, 0, 0);
        frame_bottom = new QFrame(settings01);
        frame_bottom->setObjectName(QString::fromUtf8("frame_bottom"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_bottom->sizePolicy().hasHeightForWidth());
        frame_bottom->setSizePolicy(sizePolicy);
        frame_bottom->setMinimumSize(QSize(0, 0));
        frame_bottom->setSizeIncrement(QSize(0, 0));
        frame_bottom->setBaseSize(QSize(0, 0));
        frame_bottom->setFrameShape(QFrame::StyledPanel);
        frame_bottom->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_bottom);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ok01 = new QPushButton(frame_bottom);
        ok01->setObjectName(QString::fromUtf8("ok01"));

        horizontalLayout->addWidget(ok01);

        cancel01 = new QPushButton(frame_bottom);
        cancel01->setObjectName(QString::fromUtf8("cancel01"));

        horizontalLayout->addWidget(cancel01);

        apply01 = new QPushButton(frame_bottom);
        apply01->setObjectName(QString::fromUtf8("apply01"));

        horizontalLayout->addWidget(apply01);

        saveSettings01 = new QPushButton(frame_bottom);
        saveSettings01->setObjectName(QString::fromUtf8("saveSettings01"));

        horizontalLayout->addWidget(saveSettings01);

        loadSettings01 = new QPushButton(frame_bottom);
        loadSettings01->setObjectName(QString::fromUtf8("loadSettings01"));

        horizontalLayout->addWidget(loadSettings01);

        restoreDefaults01 = new QPushButton(frame_bottom);
        restoreDefaults01->setObjectName(QString::fromUtf8("restoreDefaults01"));

        horizontalLayout->addWidget(restoreDefaults01);


        gridLayout->addWidget(frame_bottom, 1, 2, 1, 3);

        frame01 = new QFrame(settings01);
        frame01->setObjectName(QString::fromUtf8("frame01"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame01->sizePolicy().hasHeightForWidth());
        frame01->setSizePolicy(sizePolicy1);
        frame01->setFrameShape(QFrame::StyledPanel);
        frame01->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame01);
        gridLayout_2->setSpacing(5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        stackedWidget01 = new QStackedWidget(frame01);
        stackedWidget01->setObjectName(QString::fromUtf8("stackedWidget01"));
        page01 = new QWidget();
        page01->setObjectName(QString::fromUtf8("page01"));
        gridLayout_4 = new QGridLayout(page01);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        scrollArea01 = new QScrollArea(page01);
        scrollArea01->setObjectName(QString::fromUtf8("scrollArea01"));
        scrollArea01->setWidgetResizable(true);
        scrollAreaWidgetContents01 = new QWidget();
        scrollAreaWidgetContents01->setObjectName(QString::fromUtf8("scrollAreaWidgetContents01"));
        scrollAreaWidgetContents01->setGeometry(QRect(0, 0, 87, 32));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents01);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_placeHolder = new QLabel(scrollAreaWidgetContents01);
        label_placeHolder->setObjectName(QString::fromUtf8("label_placeHolder"));

        verticalLayout_3->addWidget(label_placeHolder);

        scrollArea01->setWidget(scrollAreaWidgetContents01);

        gridLayout_4->addWidget(scrollArea01, 0, 0, 1, 1);

        stackedWidget01->addWidget(page01);
        page02 = new QWidget();
        page02->setObjectName(QString::fromUtf8("page02"));
        gridLayout_3 = new QGridLayout(page02);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        scrollArea02 = new QScrollArea(page02);
        scrollArea02->setObjectName(QString::fromUtf8("scrollArea02"));
        scrollArea02->setWidgetResizable(true);
        scrollAreaWidgetContents02 = new QWidget();
        scrollAreaWidgetContents02->setObjectName(QString::fromUtf8("scrollAreaWidgetContents02"));
        scrollAreaWidgetContents02->setGeometry(QRect(0, 0, 673, 625));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents02);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_basicFilters01 = new QLabel(scrollAreaWidgetContents02);
        label_basicFilters01->setObjectName(QString::fromUtf8("label_basicFilters01"));
        QFont font;
        font.setPointSize(10);
        label_basicFilters01->setFont(font);
        label_basicFilters01->setFrameShape(QFrame::NoFrame);
        label_basicFilters01->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_basicFilters01);

        checkBox_showHidden01 = new QCheckBox(scrollAreaWidgetContents02);
        checkBox_showHidden01->setObjectName(QString::fromUtf8("checkBox_showHidden01"));
        sizePolicy1.setHeightForWidth(checkBox_showHidden01->sizePolicy().hasHeightForWidth());
        checkBox_showHidden01->setSizePolicy(sizePolicy1);
        checkBox_showHidden01->setFont(font);

        verticalLayout_2->addWidget(checkBox_showHidden01);

        checkBox_showSystem01 = new QCheckBox(scrollAreaWidgetContents02);
        checkBox_showSystem01->setObjectName(QString::fromUtf8("checkBox_showSystem01"));
        sizePolicy1.setHeightForWidth(checkBox_showSystem01->sizePolicy().hasHeightForWidth());
        checkBox_showSystem01->setSizePolicy(sizePolicy1);
        checkBox_showSystem01->setFont(font);

        verticalLayout_2->addWidget(checkBox_showSystem01);

        checkBox_hideSymLinks01 = new QCheckBox(scrollAreaWidgetContents02);
        checkBox_hideSymLinks01->setObjectName(QString::fromUtf8("checkBox_hideSymLinks01"));
        sizePolicy1.setHeightForWidth(checkBox_hideSymLinks01->sizePolicy().hasHeightForWidth());
        checkBox_hideSymLinks01->setSizePolicy(sizePolicy1);
        checkBox_hideSymLinks01->setFont(font);

        verticalLayout_2->addWidget(checkBox_hideSymLinks01);

        label_advFilters01 = new QLabel(scrollAreaWidgetContents02);
        label_advFilters01->setObjectName(QString::fromUtf8("label_advFilters01"));
        label_advFilters01->setFont(font);
        label_advFilters01->setFrameShape(QFrame::NoFrame);
        label_advFilters01->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_advFilters01);

        checkBox_dontFollowSymLinks01 = new QCheckBox(scrollAreaWidgetContents02);
        checkBox_dontFollowSymLinks01->setObjectName(QString::fromUtf8("checkBox_dontFollowSymLinks01"));
        sizePolicy1.setHeightForWidth(checkBox_dontFollowSymLinks01->sizePolicy().hasHeightForWidth());
        checkBox_dontFollowSymLinks01->setSizePolicy(sizePolicy1);
        checkBox_dontFollowSymLinks01->setFont(font);
        checkBox_dontFollowSymLinks01->setChecked(false);

        verticalLayout_2->addWidget(checkBox_dontFollowSymLinks01);

        checkBox_dontUseIcons01 = new QCheckBox(scrollAreaWidgetContents02);
        checkBox_dontUseIcons01->setObjectName(QString::fromUtf8("checkBox_dontUseIcons01"));
        sizePolicy1.setHeightForWidth(checkBox_dontUseIcons01->sizePolicy().hasHeightForWidth());
        checkBox_dontUseIcons01->setSizePolicy(sizePolicy1);
        checkBox_dontUseIcons01->setFont(font);

        verticalLayout_2->addWidget(checkBox_dontUseIcons01);

        checkBox_dontWatchFS01 = new QCheckBox(scrollAreaWidgetContents02);
        checkBox_dontWatchFS01->setObjectName(QString::fromUtf8("checkBox_dontWatchFS01"));
        sizePolicy1.setHeightForWidth(checkBox_dontWatchFS01->sizePolicy().hasHeightForWidth());
        checkBox_dontWatchFS01->setSizePolicy(sizePolicy1);
        checkBox_dontWatchFS01->setFont(font);

        verticalLayout_2->addWidget(checkBox_dontWatchFS01);

        label_miscSettings01 = new QLabel(scrollAreaWidgetContents02);
        label_miscSettings01->setObjectName(QString::fromUtf8("label_miscSettings01"));
        label_miscSettings01->setFont(font);

        verticalLayout_2->addWidget(label_miscSettings01);

        checkBox_listAllFiles01 = new QCheckBox(scrollAreaWidgetContents02);
        checkBox_listAllFiles01->setObjectName(QString::fromUtf8("checkBox_listAllFiles01"));
        sizePolicy1.setHeightForWidth(checkBox_listAllFiles01->sizePolicy().hasHeightForWidth());
        checkBox_listAllFiles01->setSizePolicy(sizePolicy1);
        checkBox_listAllFiles01->setFont(font);

        verticalLayout_2->addWidget(checkBox_listAllFiles01);

        checkBox_allowAutoThreads01 = new QCheckBox(scrollAreaWidgetContents02);
        checkBox_allowAutoThreads01->setObjectName(QString::fromUtf8("checkBox_allowAutoThreads01"));
        checkBox_allowAutoThreads01->setFont(font);

        verticalLayout_2->addWidget(checkBox_allowAutoThreads01);

        label_numThreads01 = new QLabel(scrollAreaWidgetContents02);
        label_numThreads01->setObjectName(QString::fromUtf8("label_numThreads01"));
        sizePolicy1.setHeightForWidth(label_numThreads01->sizePolicy().hasHeightForWidth());
        label_numThreads01->setSizePolicy(sizePolicy1);
        label_numThreads01->setMinimumSize(QSize(0, 0));
        label_numThreads01->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(9);
        label_numThreads01->setFont(font1);
        label_numThreads01->setLineWidth(0);
        label_numThreads01->setTextFormat(Qt::RichText);
        label_numThreads01->setScaledContents(false);
        label_numThreads01->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_numThreads01->setWordWrap(false);

        verticalLayout_2->addWidget(label_numThreads01);

        spinBox_numberOfThreads01 = new QSpinBox(scrollAreaWidgetContents02);
        spinBox_numberOfThreads01->setObjectName(QString::fromUtf8("spinBox_numberOfThreads01"));
        spinBox_numberOfThreads01->setMinimum(1);
        spinBox_numberOfThreads01->setMaximum(20);

        verticalLayout_2->addWidget(spinBox_numberOfThreads01);

        scrollArea02->setWidget(scrollAreaWidgetContents02);

        gridLayout_3->addWidget(scrollArea02, 0, 0, 1, 1);

        stackedWidget01->addWidget(page02);
        page03 = new QWidget();
        page03->setObjectName(QString::fromUtf8("page03"));
        gridLayout_5 = new QGridLayout(page03);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        scrollArea03 = new QScrollArea(page03);
        scrollArea03->setObjectName(QString::fromUtf8("scrollArea03"));
        scrollArea03->setWidgetResizable(true);
        scrollAreaWidgetContents03 = new QWidget();
        scrollAreaWidgetContents03->setObjectName(QString::fromUtf8("scrollAreaWidgetContents03"));
        scrollAreaWidgetContents03->setGeometry(QRect(0, 0, 673, 625));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents03);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_basicFilters02 = new QLabel(scrollAreaWidgetContents03);
        label_basicFilters02->setObjectName(QString::fromUtf8("label_basicFilters02"));
        label_basicFilters02->setFont(font);
        label_basicFilters02->setFrameShape(QFrame::NoFrame);
        label_basicFilters02->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_basicFilters02);

        comboBox_verifyFilePaths01 = new QComboBox(scrollAreaWidgetContents03);
        comboBox_verifyFilePaths01->addItem(QString());
        comboBox_verifyFilePaths01->addItem(QString());
        comboBox_verifyFilePaths01->setObjectName(QString::fromUtf8("comboBox_verifyFilePaths01"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox_verifyFilePaths01->sizePolicy().hasHeightForWidth());
        comboBox_verifyFilePaths01->setSizePolicy(sizePolicy2);
        comboBox_verifyFilePaths01->setMinimumSize(QSize(0, 0));
        comboBox_verifyFilePaths01->setBaseSize(QSize(0, 0));
        comboBox_verifyFilePaths01->setFont(font);
        comboBox_verifyFilePaths01->setFrame(true);

        verticalLayout_4->addWidget(comboBox_verifyFilePaths01);

        checkBox_searchHidden01 = new QCheckBox(scrollAreaWidgetContents03);
        checkBox_searchHidden01->setObjectName(QString::fromUtf8("checkBox_searchHidden01"));
        sizePolicy1.setHeightForWidth(checkBox_searchHidden01->sizePolicy().hasHeightForWidth());
        checkBox_searchHidden01->setSizePolicy(sizePolicy1);
        checkBox_searchHidden01->setFont(font);

        verticalLayout_4->addWidget(checkBox_searchHidden01);

        checkBox_searchSystem01 = new QCheckBox(scrollAreaWidgetContents03);
        checkBox_searchSystem01->setObjectName(QString::fromUtf8("checkBox_searchSystem01"));
        sizePolicy1.setHeightForWidth(checkBox_searchSystem01->sizePolicy().hasHeightForWidth());
        checkBox_searchSystem01->setSizePolicy(sizePolicy1);
        checkBox_searchSystem01->setFont(font);

        verticalLayout_4->addWidget(checkBox_searchSystem01);

        checkBox_ignoreSymLinks01 = new QCheckBox(scrollAreaWidgetContents03);
        checkBox_ignoreSymLinks01->setObjectName(QString::fromUtf8("checkBox_ignoreSymLinks01"));
        sizePolicy1.setHeightForWidth(checkBox_ignoreSymLinks01->sizePolicy().hasHeightForWidth());
        checkBox_ignoreSymLinks01->setSizePolicy(sizePolicy1);
        checkBox_ignoreSymLinks01->setFont(font);

        verticalLayout_4->addWidget(checkBox_ignoreSymLinks01);

        label_advFilters02 = new QLabel(scrollAreaWidgetContents03);
        label_advFilters02->setObjectName(QString::fromUtf8("label_advFilters02"));

        verticalLayout_4->addWidget(label_advFilters02);

        checkBox_noFollowSymLinks01 = new QCheckBox(scrollAreaWidgetContents03);
        checkBox_noFollowSymLinks01->setObjectName(QString::fromUtf8("checkBox_noFollowSymLinks01"));
        checkBox_noFollowSymLinks01->setFont(font);

        verticalLayout_4->addWidget(checkBox_noFollowSymLinks01);

        label_miscSettings02 = new QLabel(scrollAreaWidgetContents03);
        label_miscSettings02->setObjectName(QString::fromUtf8("label_miscSettings02"));

        verticalLayout_4->addWidget(label_miscSettings02);

        scrollArea03->setWidget(scrollAreaWidgetContents03);

        gridLayout_5->addWidget(scrollArea03, 0, 0, 1, 1);

        stackedWidget01->addWidget(page03);

        gridLayout_2->addWidget(stackedWidget01, 0, 0, 1, 1);


        gridLayout->addWidget(frame01, 0, 4, 1, 1);

        frame_settings01 = new QFrame(settings01);
        frame_settings01->setObjectName(QString::fromUtf8("frame_settings01"));
        frame_settings01->setFrameShape(QFrame::StyledPanel);
        frame_settings01->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_settings01);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_fileChecksumSettings01 = new QPushButton(frame_settings01);
        pushButton_fileChecksumSettings01->setObjectName(QString::fromUtf8("pushButton_fileChecksumSettings01"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_fileChecksumSettings01->setFont(font2);
        pushButton_fileChecksumSettings01->setLayoutDirection(Qt::LeftToRight);
        pushButton_fileChecksumSettings01->setCheckable(true);
        pushButton_fileChecksumSettings01->setFlat(true);

        verticalLayout->addWidget(pushButton_fileChecksumSettings01);

        verticalSpacer01 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer01);

        pushButton_checksumFileSettings01 = new QPushButton(frame_settings01);
        pushButton_checksumFileSettings01->setObjectName(QString::fromUtf8("pushButton_checksumFileSettings01"));
        pushButton_checksumFileSettings01->setFont(font2);
        pushButton_checksumFileSettings01->setCheckable(true);
        pushButton_checksumFileSettings01->setFlat(true);

        verticalLayout->addWidget(pushButton_checksumFileSettings01);

        verticalSpacer02 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer02);

        pushButton_verifyCSFileSettings01 = new QPushButton(frame_settings01);
        pushButton_verifyCSFileSettings01->setObjectName(QString::fromUtf8("pushButton_verifyCSFileSettings01"));
        pushButton_verifyCSFileSettings01->setFont(font2);
        pushButton_verifyCSFileSettings01->setCheckable(true);
        pushButton_verifyCSFileSettings01->setFlat(true);

        verticalLayout->addWidget(pushButton_verifyCSFileSettings01);

        verticalSpacer03 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer03);


        gridLayout->addWidget(frame_settings01, 0, 2, 1, 1);


        retranslateUi(settings01);

        stackedWidget01->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(settings01);
    } // setupUi

    void retranslateUi(QDialog *settings01)
    {
        settings01->setWindowTitle(QCoreApplication::translate("settings01", "Checksum1 Settings", nullptr));
        ok01->setText(QCoreApplication::translate("settings01", "OK", nullptr));
        cancel01->setText(QCoreApplication::translate("settings01", "Cancel", nullptr));
        apply01->setText(QCoreApplication::translate("settings01", "Apply", nullptr));
        saveSettings01->setText(QCoreApplication::translate("settings01", "Save Settings", nullptr));
        loadSettings01->setText(QCoreApplication::translate("settings01", "Load Settings", nullptr));
        restoreDefaults01->setText(QCoreApplication::translate("settings01", "Restore Defaults", nullptr));
        label_placeHolder->setText(QCoreApplication::translate("settings01", "placeHolder01", nullptr));
        label_basicFilters01->setText(QCoreApplication::translate("settings01", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Basic File Filters:</span></p></body></html>", nullptr));
        checkBox_showHidden01->setText(QCoreApplication::translate("settings01", "Show Hidden Files", nullptr));
        checkBox_showSystem01->setText(QCoreApplication::translate("settings01", "Show System Files", nullptr));
        checkBox_hideSymLinks01->setText(QCoreApplication::translate("settings01", "Hide Shortcuts And Symbolic Links", nullptr));
        label_advFilters01->setText(QCoreApplication::translate("settings01", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Advanced Filters:</span></p></body></html>", nullptr));
        checkBox_dontFollowSymLinks01->setText(QCoreApplication::translate("settings01", "Don't Follow Shortcuts Or Symbolic Links\n"
"(Recommended On Windows)", nullptr));
        checkBox_dontUseIcons01->setText(QCoreApplication::translate("settings01", "Don't Use Custom Icons", nullptr));
        checkBox_dontWatchFS01->setText(QCoreApplication::translate("settings01", "Don't Watch File System", nullptr));
        label_miscSettings01->setText(QCoreApplication::translate("settings01", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Miscellaneous Settings:</span></p></body></html>", nullptr));
        checkBox_listAllFiles01->setText(QCoreApplication::translate("settings01", "Show All Files To Be Checksumed Prior To Start", nullptr));
        checkBox_allowAutoThreads01->setText(QCoreApplication::translate("settings01", "Allow Program To Determine Number Of Threads To Use", nullptr));
        label_numThreads01->setText(QCoreApplication::translate("settings01", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Number Of Threads Used For Checksum File:</span></p></body></html>", nullptr));
        label_basicFilters02->setText(QCoreApplication::translate("settings01", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Basic File Filters:</span></p></body></html>", nullptr));
        comboBox_verifyFilePaths01->setItemText(0, QCoreApplication::translate("settings01", "Attempt to verify only the files in the .csv file.", nullptr));
        comboBox_verifyFilePaths01->setItemText(1, QCoreApplication::translate("settings01", "Attempt to verify all files in all of the directories in the .csv file.", nullptr));

        checkBox_searchHidden01->setText(QCoreApplication::translate("settings01", "Search Hidden Files", nullptr));
        checkBox_searchSystem01->setText(QCoreApplication::translate("settings01", "Search System Files", nullptr));
        checkBox_ignoreSymLinks01->setText(QCoreApplication::translate("settings01", "Ignore Symbolic Links", nullptr));
        label_advFilters02->setText(QCoreApplication::translate("settings01", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Advanced Filters:</span></p></body></html>", nullptr));
        checkBox_noFollowSymLinks01->setText(QCoreApplication::translate("settings01", "Don't Follow Symbolic Links\n"
"(Recommended On Windows)", nullptr));
        label_miscSettings02->setText(QCoreApplication::translate("settings01", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Miscellaneous Settings:</span></p></body></html>", nullptr));
        pushButton_fileChecksumSettings01->setText(QCoreApplication::translate("settings01", "File Checksum - Settings            ", nullptr));
        pushButton_checksumFileSettings01->setText(QCoreApplication::translate("settings01", "Create Checksum File - Settings", nullptr));
        pushButton_verifyCSFileSettings01->setText(QCoreApplication::translate("settings01", "Verify Checksum File - Settings ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settings01: public Ui_settings01 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS01_H
