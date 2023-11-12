/********************************************************************************
** Form generated from reading UI file 'dialog_settings01.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SETTINGS01_H
#define UI_DIALOG_SETTINGS01_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialog_settings01
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_01;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea_01;
    QWidget *scrollAreaWidgetContents_01;
    QGridLayout *gridLayout_3;
    QFrame *frame_02_01;
    QFrame *frame_03;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_FileChecksumSettings01;
    QFrame *frame_05_01;
    QFrame *frame_03_01;
    QFrame *frame_04;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_CreateCSFileSettings01;
    QSpacerItem *verticalSpacer_1;
    QLabel *label_filterDescription02_1;
    QCheckBox *checkBox_showHidden02;
    QCheckBox *checkBox_showSystem02;
    QCheckBox *checkBox_hideSymLinks02;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_filterDescription02_2;
    QCheckBox *checkBox_dontFollowSymLinks02;
    QCheckBox *checkBox_dontUseIcons02;
    QCheckBox *checkBox_dontWatchFS02;
    QFrame *frame_02;
    QVBoxLayout *verticalLayout;
    QLabel *label_GlobalSettings01;
    QFrame *frame_05;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_VerifyCSFileSettings01;
    QFrame *frame_04_01;
    QFrame *frame_Bottom;
    QHBoxLayout *horizontalLayout;
    QPushButton *ok_02;
    QPushButton *cancel_02;
    QPushButton *apply_02;
    QPushButton *saveSettings_02;
    QPushButton *loadSettings_02;
    QPushButton *restoreDefaults_02;

    void setupUi(QDialog *dialog_settings01)
    {
        if (dialog_settings01->objectName().isEmpty())
            dialog_settings01->setObjectName(QString::fromUtf8("dialog_settings01"));
        dialog_settings01->resize(517, 389);
        gridLayout = new QGridLayout(dialog_settings01);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame_01 = new QFrame(dialog_settings01);
        frame_01->setObjectName(QString::fromUtf8("frame_01"));
        frame_01->setFrameShape(QFrame::StyledPanel);
        frame_01->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_01);
        gridLayout_2->setSpacing(5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        scrollArea_01 = new QScrollArea(frame_01);
        scrollArea_01->setObjectName(QString::fromUtf8("scrollArea_01"));
        scrollArea_01->setWidgetResizable(true);
        scrollAreaWidgetContents_01 = new QWidget();
        scrollAreaWidgetContents_01->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_01"));
        scrollAreaWidgetContents_01->setGeometry(QRect(0, 0, 471, 404));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents_01);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame_02_01 = new QFrame(scrollAreaWidgetContents_01);
        frame_02_01->setObjectName(QString::fromUtf8("frame_02_01"));
        frame_02_01->setFrameShape(QFrame::StyledPanel);
        frame_02_01->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(frame_02_01, 0, 1, 1, 1);

        frame_03 = new QFrame(scrollAreaWidgetContents_01);
        frame_03->setObjectName(QString::fromUtf8("frame_03"));
        frame_03->setFrameShape(QFrame::StyledPanel);
        frame_03->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_03);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_FileChecksumSettings01 = new QLabel(frame_03);
        label_FileChecksumSettings01->setObjectName(QString::fromUtf8("label_FileChecksumSettings01"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_FileChecksumSettings01->sizePolicy().hasHeightForWidth());
        label_FileChecksumSettings01->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_FileChecksumSettings01);


        gridLayout_3->addWidget(frame_03, 1, 0, 1, 1);

        frame_05_01 = new QFrame(scrollAreaWidgetContents_01);
        frame_05_01->setObjectName(QString::fromUtf8("frame_05_01"));
        frame_05_01->setFrameShape(QFrame::StyledPanel);
        frame_05_01->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(frame_05_01, 3, 1, 1, 1);

        frame_03_01 = new QFrame(scrollAreaWidgetContents_01);
        frame_03_01->setObjectName(QString::fromUtf8("frame_03_01"));
        frame_03_01->setFrameShape(QFrame::StyledPanel);
        frame_03_01->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(frame_03_01, 1, 1, 1, 1);

        frame_04 = new QFrame(scrollAreaWidgetContents_01);
        frame_04->setObjectName(QString::fromUtf8("frame_04"));
        frame_04->setFrameShape(QFrame::StyledPanel);
        frame_04->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_04);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_CreateCSFileSettings01 = new QLabel(frame_04);
        label_CreateCSFileSettings01->setObjectName(QString::fromUtf8("label_CreateCSFileSettings01"));
        sizePolicy.setHeightForWidth(label_CreateCSFileSettings01->sizePolicy().hasHeightForWidth());
        label_CreateCSFileSettings01->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_CreateCSFileSettings01);

        verticalSpacer_1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_1);

        label_filterDescription02_1 = new QLabel(frame_04);
        label_filterDescription02_1->setObjectName(QString::fromUtf8("label_filterDescription02_1"));
        label_filterDescription02_1->setFrameShape(QFrame::NoFrame);
        label_filterDescription02_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_filterDescription02_1);

        checkBox_showHidden02 = new QCheckBox(frame_04);
        checkBox_showHidden02->setObjectName(QString::fromUtf8("checkBox_showHidden02"));

        verticalLayout_3->addWidget(checkBox_showHidden02);

        checkBox_showSystem02 = new QCheckBox(frame_04);
        checkBox_showSystem02->setObjectName(QString::fromUtf8("checkBox_showSystem02"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBox_showSystem02->sizePolicy().hasHeightForWidth());
        checkBox_showSystem02->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(checkBox_showSystem02);

        checkBox_hideSymLinks02 = new QCheckBox(frame_04);
        checkBox_hideSymLinks02->setObjectName(QString::fromUtf8("checkBox_hideSymLinks02"));

        verticalLayout_3->addWidget(checkBox_hideSymLinks02);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        label_filterDescription02_2 = new QLabel(frame_04);
        label_filterDescription02_2->setObjectName(QString::fromUtf8("label_filterDescription02_2"));
        label_filterDescription02_2->setFrameShape(QFrame::NoFrame);
        label_filterDescription02_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_filterDescription02_2);

        checkBox_dontFollowSymLinks02 = new QCheckBox(frame_04);
        checkBox_dontFollowSymLinks02->setObjectName(QString::fromUtf8("checkBox_dontFollowSymLinks02"));
        sizePolicy1.setHeightForWidth(checkBox_dontFollowSymLinks02->sizePolicy().hasHeightForWidth());
        checkBox_dontFollowSymLinks02->setSizePolicy(sizePolicy1);
        checkBox_dontFollowSymLinks02->setChecked(false);

        verticalLayout_3->addWidget(checkBox_dontFollowSymLinks02);

        checkBox_dontUseIcons02 = new QCheckBox(frame_04);
        checkBox_dontUseIcons02->setObjectName(QString::fromUtf8("checkBox_dontUseIcons02"));

        verticalLayout_3->addWidget(checkBox_dontUseIcons02);

        checkBox_dontWatchFS02 = new QCheckBox(frame_04);
        checkBox_dontWatchFS02->setObjectName(QString::fromUtf8("checkBox_dontWatchFS02"));
        sizePolicy1.setHeightForWidth(checkBox_dontWatchFS02->sizePolicy().hasHeightForWidth());
        checkBox_dontWatchFS02->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(checkBox_dontWatchFS02);


        gridLayout_3->addWidget(frame_04, 2, 0, 1, 1);

        frame_02 = new QFrame(scrollAreaWidgetContents_01);
        frame_02->setObjectName(QString::fromUtf8("frame_02"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_02->sizePolicy().hasHeightForWidth());
        frame_02->setSizePolicy(sizePolicy2);
        frame_02->setFrameShape(QFrame::StyledPanel);
        frame_02->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_02);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_GlobalSettings01 = new QLabel(frame_02);
        label_GlobalSettings01->setObjectName(QString::fromUtf8("label_GlobalSettings01"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_GlobalSettings01->sizePolicy().hasHeightForWidth());
        label_GlobalSettings01->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(label_GlobalSettings01);


        gridLayout_3->addWidget(frame_02, 0, 0, 1, 1);

        frame_05 = new QFrame(scrollAreaWidgetContents_01);
        frame_05->setObjectName(QString::fromUtf8("frame_05"));
        frame_05->setFrameShape(QFrame::StyledPanel);
        frame_05->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_05);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_VerifyCSFileSettings01 = new QLabel(frame_05);
        label_VerifyCSFileSettings01->setObjectName(QString::fromUtf8("label_VerifyCSFileSettings01"));
        sizePolicy.setHeightForWidth(label_VerifyCSFileSettings01->sizePolicy().hasHeightForWidth());
        label_VerifyCSFileSettings01->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(label_VerifyCSFileSettings01);


        gridLayout_3->addWidget(frame_05, 3, 0, 1, 1);

        frame_04_01 = new QFrame(scrollAreaWidgetContents_01);
        frame_04_01->setObjectName(QString::fromUtf8("frame_04_01"));
        frame_04_01->setFrameShape(QFrame::StyledPanel);
        frame_04_01->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(frame_04_01, 2, 1, 1, 1);

        scrollArea_01->setWidget(scrollAreaWidgetContents_01);

        gridLayout_2->addWidget(scrollArea_01, 0, 0, 1, 1);


        gridLayout->addWidget(frame_01, 0, 0, 1, 1);

        frame_Bottom = new QFrame(dialog_settings01);
        frame_Bottom->setObjectName(QString::fromUtf8("frame_Bottom"));
        frame_Bottom->setFrameShape(QFrame::StyledPanel);
        frame_Bottom->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_Bottom);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ok_02 = new QPushButton(frame_Bottom);
        ok_02->setObjectName(QString::fromUtf8("ok_02"));

        horizontalLayout->addWidget(ok_02);

        cancel_02 = new QPushButton(frame_Bottom);
        cancel_02->setObjectName(QString::fromUtf8("cancel_02"));

        horizontalLayout->addWidget(cancel_02);

        apply_02 = new QPushButton(frame_Bottom);
        apply_02->setObjectName(QString::fromUtf8("apply_02"));

        horizontalLayout->addWidget(apply_02);

        saveSettings_02 = new QPushButton(frame_Bottom);
        saveSettings_02->setObjectName(QString::fromUtf8("saveSettings_02"));

        horizontalLayout->addWidget(saveSettings_02);

        loadSettings_02 = new QPushButton(frame_Bottom);
        loadSettings_02->setObjectName(QString::fromUtf8("loadSettings_02"));

        horizontalLayout->addWidget(loadSettings_02);

        restoreDefaults_02 = new QPushButton(frame_Bottom);
        restoreDefaults_02->setObjectName(QString::fromUtf8("restoreDefaults_02"));

        horizontalLayout->addWidget(restoreDefaults_02);


        gridLayout->addWidget(frame_Bottom, 1, 0, 1, 1);


        retranslateUi(dialog_settings01);

        QMetaObject::connectSlotsByName(dialog_settings01);
    } // setupUi

    void retranslateUi(QDialog *dialog_settings01)
    {
        dialog_settings01->setWindowTitle(QCoreApplication::translate("dialog_settings01", "Checksum1 Settings", nullptr));
        label_FileChecksumSettings01->setText(QCoreApplication::translate("dialog_settings01", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">File Checksum Settings</span></p></body></html>", nullptr));
        label_CreateCSFileSettings01->setText(QCoreApplication::translate("dialog_settings01", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Create Checksum File Settings</span></p></body></html>", nullptr));
        label_filterDescription02_1->setText(QCoreApplication::translate("dialog_settings01", "<html><head/><body><p><span style=\" font-size:9pt;\">Basic File Filters:</span></p></body></html>", nullptr));
        checkBox_showHidden02->setText(QCoreApplication::translate("dialog_settings01", "Show Hidden Files", nullptr));
        checkBox_showSystem02->setText(QCoreApplication::translate("dialog_settings01", "Show System Files", nullptr));
        checkBox_hideSymLinks02->setText(QCoreApplication::translate("dialog_settings01", "Hide Symbolic Links", nullptr));
        label_filterDescription02_2->setText(QCoreApplication::translate("dialog_settings01", "<html><head/><body><p><span style=\" font-size:9pt;\">Advanced Filters:</span></p></body></html>", nullptr));
        checkBox_dontFollowSymLinks02->setText(QCoreApplication::translate("dialog_settings01", "Don't Follow Symbolic Links\n"
"(Recommended On Windows)", nullptr));
        checkBox_dontUseIcons02->setText(QCoreApplication::translate("dialog_settings01", "Don't Use Custom Icons", nullptr));
        checkBox_dontWatchFS02->setText(QCoreApplication::translate("dialog_settings01", "Don't Watch File System", nullptr));
        label_GlobalSettings01->setText(QCoreApplication::translate("dialog_settings01", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Global Settings</span></p></body></html>", nullptr));
        label_VerifyCSFileSettings01->setText(QCoreApplication::translate("dialog_settings01", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Verify Checksum File Settings</span></p></body></html>", nullptr));
        ok_02->setText(QCoreApplication::translate("dialog_settings01", "OK", nullptr));
        cancel_02->setText(QCoreApplication::translate("dialog_settings01", "Cancel", nullptr));
        apply_02->setText(QCoreApplication::translate("dialog_settings01", "Apply", nullptr));
        saveSettings_02->setText(QCoreApplication::translate("dialog_settings01", "Save Settings", nullptr));
        loadSettings_02->setText(QCoreApplication::translate("dialog_settings01", "Load Settings", nullptr));
        restoreDefaults_02->setText(QCoreApplication::translate("dialog_settings01", "Restore Defaults", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialog_settings01: public Ui_dialog_settings01 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SETTINGS01_H
