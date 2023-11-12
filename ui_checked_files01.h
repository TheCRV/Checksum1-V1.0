/********************************************************************************
** Form generated from reading UI file 'checked_files01.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKED_FILES01_H
#define UI_CHECKED_FILES01_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_checked_files01
{
public:
    QGridLayout *gridLayout;
    QFrame *frame02;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_ok01;
    QFrame *frame01;
    QGridLayout *gridLayout_2;
    QTextBrowser *textBrowser_selectedFiles01;

    void setupUi(QDialog *checked_files01)
    {
        if (checked_files01->objectName().isEmpty())
            checked_files01->setObjectName(QString::fromUtf8("checked_files01"));
        checked_files01->resize(400, 300);
        gridLayout = new QGridLayout(checked_files01);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        frame02 = new QFrame(checked_files01);
        frame02->setObjectName(QString::fromUtf8("frame02"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame02->sizePolicy().hasHeightForWidth());
        frame02->setSizePolicy(sizePolicy);
        frame02->setFrameShape(QFrame::StyledPanel);
        frame02->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame02);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_ok01 = new QPushButton(frame02);
        pushButton_ok01->setObjectName(QString::fromUtf8("pushButton_ok01"));

        horizontalLayout->addWidget(pushButton_ok01);


        gridLayout->addWidget(frame02, 2, 0, 1, 1);

        frame01 = new QFrame(checked_files01);
        frame01->setObjectName(QString::fromUtf8("frame01"));
        frame01->setFrameShape(QFrame::StyledPanel);
        frame01->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame01);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textBrowser_selectedFiles01 = new QTextBrowser(frame01);
        textBrowser_selectedFiles01->setObjectName(QString::fromUtf8("textBrowser_selectedFiles01"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowser_selectedFiles01->sizePolicy().hasHeightForWidth());
        textBrowser_selectedFiles01->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(12);
        textBrowser_selectedFiles01->setFont(font);
        textBrowser_selectedFiles01->setFrameShadow(QFrame::Plain);

        gridLayout_2->addWidget(textBrowser_selectedFiles01, 0, 0, 2, 1);


        gridLayout->addWidget(frame01, 1, 0, 1, 1);


        retranslateUi(checked_files01);

        QMetaObject::connectSlotsByName(checked_files01);
    } // setupUi

    void retranslateUi(QDialog *checked_files01)
    {
        checked_files01->setWindowTitle(QCoreApplication::translate("checked_files01", "Dialog", nullptr));
        pushButton_ok01->setText(QCoreApplication::translate("checked_files01", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class checked_files01: public Ui_checked_files01 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKED_FILES01_H
