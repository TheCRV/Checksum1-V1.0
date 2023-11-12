/********************************************************************************
** Form generated from reading UI file 'verifychecksumfile.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFYCHECKSUMFILE_H
#define UI_VERIFYCHECKSUMFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_verifychecksumfile
{
public:
    QGridLayout *gridLayout;
    QFrame *frame01;
    QGridLayout *gridLayout_2;
    QTextBrowser *textBrowser_verifyFiles01;
    QFrame *frame02;
    QVBoxLayout *verticalLayout;
    QLabel *label_totalProgress01;
    QProgressBar *progressBar01;
    QFrame *frame03;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_beginVerify01;
    QPushButton *pushButton_cancelVerify01;
    QPushButton *pushButton_cancel01;

    void setupUi(QDialog *verifychecksumfile)
    {
        if (verifychecksumfile->objectName().isEmpty())
            verifychecksumfile->setObjectName(QString::fromUtf8("verifychecksumfile"));
        verifychecksumfile->resize(700, 700);
        gridLayout = new QGridLayout(verifychecksumfile);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame01 = new QFrame(verifychecksumfile);
        frame01->setObjectName(QString::fromUtf8("frame01"));
        frame01->setFrameShape(QFrame::StyledPanel);
        frame01->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame01);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textBrowser_verifyFiles01 = new QTextBrowser(frame01);
        textBrowser_verifyFiles01->setObjectName(QString::fromUtf8("textBrowser_verifyFiles01"));

        gridLayout_2->addWidget(textBrowser_verifyFiles01, 0, 0, 1, 1);


        gridLayout->addWidget(frame01, 0, 0, 1, 1);

        frame02 = new QFrame(verifychecksumfile);
        frame02->setObjectName(QString::fromUtf8("frame02"));
        frame02->setFrameShape(QFrame::StyledPanel);
        frame02->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame02);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_totalProgress01 = new QLabel(frame02);
        label_totalProgress01->setObjectName(QString::fromUtf8("label_totalProgress01"));

        verticalLayout->addWidget(label_totalProgress01);

        progressBar01 = new QProgressBar(frame02);
        progressBar01->setObjectName(QString::fromUtf8("progressBar01"));
        progressBar01->setValue(0);

        verticalLayout->addWidget(progressBar01);


        gridLayout->addWidget(frame02, 1, 0, 1, 1);

        frame03 = new QFrame(verifychecksumfile);
        frame03->setObjectName(QString::fromUtf8("frame03"));
        frame03->setFrameShape(QFrame::StyledPanel);
        frame03->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame03);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(401, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_beginVerify01 = new QPushButton(frame03);
        pushButton_beginVerify01->setObjectName(QString::fromUtf8("pushButton_beginVerify01"));

        horizontalLayout->addWidget(pushButton_beginVerify01);

        pushButton_cancelVerify01 = new QPushButton(frame03);
        pushButton_cancelVerify01->setObjectName(QString::fromUtf8("pushButton_cancelVerify01"));

        horizontalLayout->addWidget(pushButton_cancelVerify01);

        pushButton_cancel01 = new QPushButton(frame03);
        pushButton_cancel01->setObjectName(QString::fromUtf8("pushButton_cancel01"));

        horizontalLayout->addWidget(pushButton_cancel01);


        gridLayout->addWidget(frame03, 2, 0, 1, 1);


        retranslateUi(verifychecksumfile);

        QMetaObject::connectSlotsByName(verifychecksumfile);
    } // setupUi

    void retranslateUi(QDialog *verifychecksumfile)
    {
        verifychecksumfile->setWindowTitle(QCoreApplication::translate("verifychecksumfile", "Dialog", nullptr));
        label_totalProgress01->setText(QCoreApplication::translate("verifychecksumfile", "<html><head/><body><p>Overall Progress:</p></body></html>", nullptr));
        pushButton_beginVerify01->setText(QCoreApplication::translate("verifychecksumfile", "Start Verify", nullptr));
        pushButton_cancelVerify01->setText(QCoreApplication::translate("verifychecksumfile", "Cancel Verify", nullptr));
        pushButton_cancel01->setText(QCoreApplication::translate("verifychecksumfile", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class verifychecksumfile: public Ui_verifychecksumfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFYCHECKSUMFILE_H
