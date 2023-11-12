/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSettings;
    QAction *actionSave_All_Tables;
    QAction *actionSave_Matched_Tables;
    QAction *actionSave_Partially_Matched_Tables;
    QAction *actionSave_Unmatched_Tables;
    QAction *actionSave_New_Files;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QProgressBar *progressBar01;
    QTabWidget *tabWidget;
    QWidget *tab01;
    QGridLayout *gridLayout_2;
    QFrame *frame01_01;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_beginChecksum01;
    QLabel *label_hashType01;
    QLabel *label_selectFile01;
    QComboBox *comboBox_hashType01;
    QPushButton *pushButton_cancelChecksum00;
    QLineEdit *lineEdit_File01;
    QPushButton *pushButton_browse01;
    QFrame *frame01_02;
    QGridLayout *gridLayout_4;
    QLabel *label_compValue01;
    QLineEdit *lineEdit_compValue01;
    QLineEdit *lineEdit_calcValue01;
    QLabel *label_calcValue01;
    QPushButton *pushButton_Compare01;
    QWidget *tab02;
    QGridLayout *gridLayout_5;
    QFrame *frame02_03;
    QGridLayout *gridLayout_6;
    QStackedWidget *stackedWidget02;
    QWidget *page02_01;
    QGridLayout *gridLayout_10;
    QTreeView *treeViewFiles01;
    QFrame *frame02_04;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer01;
    QPushButton *pushButton_prepareChecksum00;
    QWidget *page02_02;
    QGridLayout *gridLayout_11;
    QListWidget *listWidget_selectedFiles01;
    QListWidget *listWidget_selectedDirs01;
    QLabel *label_selectedDirs01;
    QFrame *frame02_05;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer02;
    QPushButton *pushButton_prepareChecksum01;
    QLabel *label_selectedFiles01;
    QWidget *page02_03;
    QGridLayout *gridLayout_12;
    QFrame *frame02_06;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_OnlyChecksums01;
    QSpacerItem *horizontalSpacer03;
    QPushButton *pushButton_createChecksum01;
    QPushButton *pushButton_cancelChecksum01;
    QPushButton *pushButton_return01;
    QTextBrowser *textBrowser_showChecksum01;
    QFrame *frame02_01;
    QGridLayout *gridLayout_7;
    QPushButton *pushButton_settings01;
    QComboBox *comboBox_hashType02;
    QRadioButton *radioButton_useBrowse01;
    QRadioButton *radioButton_useTree01;
    QPushButton *pushButton_resetView01;
    QFrame *frame02_02;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_fileText01;
    QPushButton *pushButton_browseDirs01;
    QPushButton *pushButton_browseFiles01;
    QPushButton *pushButton_add01;
    QPushButton *pushButton_delete01;
    QWidget *tab03;
    QGridLayout *gridLayout_9;
    QStackedWidget *stackedWidget03;
    QWidget *page03_01;
    QGridLayout *gridLayout_13;
    QFrame *frame03_03;
    QGridLayout *gridLayout_8;
    QLineEdit *lineEdit_selectVerifyFile01;
    QPushButton *pushButton_browse03;
    QLabel *label_browseVerify01;
    QFrame *frame03_01;
    QGridLayout *gridLayout_22;
    QLabel *label_dirsToVerify01;
    QFrame *frame03_02;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_browseDirs02;
    QPushButton *pushButton_deleteDirs02;
    QListWidget *listWidget_verifyAgainst01;
    QFrame *frame03_04;
    QGridLayout *gridLayout_26;
    QTextBrowser *textBrowser_prepareVerify01;
    QLabel *label_verifyData01;
    QFrame *frame03_05;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_viewResults01;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_clearAll01;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_cancelVerify01;
    QPushButton *pushButton_Verify01;
    QPushButton *pushButton_prepareVerify01;
    QWidget *page03_02;
    QGridLayout *gridLayout_15;
    QFrame *frame03_06;
    QGridLayout *gridLayout_14;
    QTableWidget *tableWidget_matchedFiles01;
    QFrame *frame03_07;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *comboBox_verifyTableViews01;
    QPushButton *pushButton_returnToVerify01;
    QToolButton *toolButton_saveTable01;
    QWidget *page03_03;
    QGridLayout *gridLayout_17;
    QFrame *frame03_08;
    QGridLayout *gridLayout_16;
    QTableWidget *tableWidget_matchedDiff01;
    QFrame *frame03_09;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *comboBox_verifyTableViews02;
    QPushButton *pushButton_returnToVerify02;
    QToolButton *toolButton_saveTable02;
    QWidget *page03_04;
    QGridLayout *gridLayout_18;
    QFrame *frame03_10;
    QGridLayout *gridLayout_19;
    QTableWidget *tableWidget_unmatchedFiles01;
    QFrame *frame03_11;
    QHBoxLayout *horizontalLayout_8;
    QComboBox *comboBox_verifyTableViews03;
    QPushButton *pushButton_returnToVerify03;
    QToolButton *toolButton_saveTable03;
    QWidget *page03_05;
    QGridLayout *gridLayout_25;
    QFrame *frame03_12;
    QGridLayout *gridLayout_24;
    QTableWidget *tableWidget_newFiles01;
    QFrame *frame03_13;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *comboBox_verifyTableViews04;
    QPushButton *pushButton_returnToVerify04;
    QToolButton *toolButton_saveTable04;
    QWidget *tab05;
    QGridLayout *gridLayout_82;
    QFrame *frame05_05;
    QGridLayout *gridLayout_77;
    QPushButton *pushButton_settings05;
    QComboBox *comboBox_hashType05;
    QRadioButton *radioButton_useBrowse05;
    QRadioButton *radioButton_useTree05;
    QPushButton *pushButton_resetView05;
    QFrame *frame05_06;
    QHBoxLayout *horizontalLayout_28;
    QLineEdit *lineEdit_fileText05;
    QPushButton *pushButton_browseDirs05;
    QPushButton *pushButton_browseFiles05;
    QPushButton *pushButton_add05;
    QPushButton *pushButton_delete05;
    QFrame *frame05_01;
    QGridLayout *gridLayout_78;
    QStackedWidget *stackedWidget05;
    QWidget *page05_01;
    QGridLayout *gridLayout_79;
    QTreeView *treeViewFiles05;
    QFrame *frame05_02;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_copyType05_01;
    QLabel *label_copyType05_02;
    QSpacerItem *horizontalSpacer05_01;
    QPushButton *pushButton_copy_compare05_01;
    QWidget *page05_02;
    QGridLayout *gridLayout_80;
    QListWidget *listWidget_selectedFiles05;
    QListWidget *listWidget_selectedDirs05;
    QLabel *label_selectedDirs05;
    QFrame *frame05_03;
    QHBoxLayout *horizontalLayout_30;
    QSpacerItem *horizontalSpacer05_02;
    QPushButton *pushButton_copy_compare05_02;
    QLabel *label_selectedFiles05;
    QWidget *page05_03;
    QGridLayout *gridLayout_81;
    QFrame *frame05_04;
    QHBoxLayout *horizontalLayout_31;
    QPushButton *pushButton_viewResults05;
    QSpacerItem *horizontalSpacer05_03;
    QPushButton *pushButton_startCopy05;
    QPushButton *pushButton_cancelCopy05;
    QPushButton *pushButton_return05;
    QTextBrowser *textBrowser_showCopy05;
    QWidget *page05_04;
    QGridLayout *gridLayout_28;
    QFrame *frame05_7;
    QGridLayout *gridLayout_27;
    QTableWidget *tableWidget_matchedFiles05;
    QFrame *frame05_8;
    QHBoxLayout *horizontalLayout_10;
    QComboBox *comboBox_verifyTableViews05_1;
    QPushButton *pushButton_return05_1;
    QToolButton *toolButton_saveTable05_1;
    QWidget *page05_05;
    QGridLayout *gridLayout_30;
    QFrame *frame05_9;
    QGridLayout *gridLayout_29;
    QTableWidget *tableWidget_matchedDiff05;
    QFrame *frame05_10;
    QHBoxLayout *horizontalLayout_11;
    QComboBox *comboBox_verifyTableViews05_2;
    QPushButton *pushButton_return05_2;
    QToolButton *toolButton_saveTable05_2;
    QWidget *page05_06;
    QGridLayout *gridLayout_32;
    QFrame *frame05_11;
    QGridLayout *gridLayout_31;
    QTableWidget *tableWidget_unmatchedFiles05;
    QFrame *frame05_12;
    QHBoxLayout *horizontalLayout_12;
    QComboBox *comboBox_verifyTableViews05_3;
    QPushButton *pushButton_return05_3;
    QToolButton *toolButton_saveTable05_3;
    QWidget *page05_07;
    QGridLayout *gridLayout_34;
    QFrame *frame05_13;
    QGridLayout *gridLayout_33;
    QTableWidget *tableWidget_newFiles05;
    QFrame *frame05_14;
    QHBoxLayout *horizontalLayout_13;
    QComboBox *comboBox_verifyTableViews05_4;
    QPushButton *pushButton_return05_4;
    QToolButton *toolButton_saveTable05_4;
    QWidget *tab04;
    QGridLayout *gridLayout_20;
    QFrame *frame04_01;
    QGridLayout *gridLayout_21;
    QPlainTextEdit *plainTextEdit_userText01;
    QLabel *label_userText01;
    QFrame *frame04_02;
    QGridLayout *gridLayout_23;
    QLineEdit *lineEdit_textChecksum01;
    QLineEdit *lineEdit_compare04;
    QLabel *label_checksum04;
    QPushButton *pushButton_compare04;
    QFrame *frame04_03;
    QVBoxLayout *verticalLayout_3;
    QComboBox *comboBox_hashType04;
    QSpacerItem *verticalSpacer;
    QCheckBox *checkBox_toUpper04;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QButtonGroup *buttonGroup_treeOrBrowser;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 900);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        actionSave_All_Tables = new QAction(MainWindow);
        actionSave_All_Tables->setObjectName(QString::fromUtf8("actionSave_All_Tables"));
        actionSave_Matched_Tables = new QAction(MainWindow);
        actionSave_Matched_Tables->setObjectName(QString::fromUtf8("actionSave_Matched_Tables"));
        actionSave_Partially_Matched_Tables = new QAction(MainWindow);
        actionSave_Partially_Matched_Tables->setObjectName(QString::fromUtf8("actionSave_Partially_Matched_Tables"));
        actionSave_Unmatched_Tables = new QAction(MainWindow);
        actionSave_Unmatched_Tables->setObjectName(QString::fromUtf8("actionSave_Unmatched_Tables"));
        actionSave_New_Files = new QAction(MainWindow);
        actionSave_New_Files->setObjectName(QString::fromUtf8("actionSave_New_Files"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        progressBar01 = new QProgressBar(centralwidget);
        progressBar01->setObjectName(QString::fromUtf8("progressBar01"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(progressBar01->sizePolicy().hasHeightForWidth());
        progressBar01->setSizePolicy(sizePolicy);
        QFont font;
        font.setKerning(true);
        progressBar01->setFont(font);
        progressBar01->setAutoFillBackground(true);
        progressBar01->setValue(0);
        progressBar01->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(progressBar01, 1, 0, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(12);
        tabWidget->setFont(font1);
        tabWidget->setMovable(true);
        tab01 = new QWidget();
        tab01->setObjectName(QString::fromUtf8("tab01"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tab01->sizePolicy().hasHeightForWidth());
        tab01->setSizePolicy(sizePolicy2);
        gridLayout_2 = new QGridLayout(tab01);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame01_01 = new QFrame(tab01);
        frame01_01->setObjectName(QString::fromUtf8("frame01_01"));
        sizePolicy2.setHeightForWidth(frame01_01->sizePolicy().hasHeightForWidth());
        frame01_01->setSizePolicy(sizePolicy2);
        frame01_01->setFrameShape(QFrame::StyledPanel);
        frame01_01->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame01_01);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_beginChecksum01 = new QPushButton(frame01_01);
        pushButton_beginChecksum01->setObjectName(QString::fromUtf8("pushButton_beginChecksum01"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_beginChecksum01->sizePolicy().hasHeightForWidth());
        pushButton_beginChecksum01->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(pushButton_beginChecksum01, 1, 2, 1, 1);

        label_hashType01 = new QLabel(frame01_01);
        label_hashType01->setObjectName(QString::fromUtf8("label_hashType01"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_hashType01->sizePolicy().hasHeightForWidth());
        label_hashType01->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(label_hashType01, 3, 0, 1, 1);

        label_selectFile01 = new QLabel(frame01_01);
        label_selectFile01->setObjectName(QString::fromUtf8("label_selectFile01"));
        sizePolicy4.setHeightForWidth(label_selectFile01->sizePolicy().hasHeightForWidth());
        label_selectFile01->setSizePolicy(sizePolicy4);
        label_selectFile01->setMinimumSize(QSize(100, 10));
        label_selectFile01->setBaseSize(QSize(100, 10));
        label_selectFile01->setFont(font1);
        label_selectFile01->setTextFormat(Qt::AutoText);
        label_selectFile01->setScaledContents(false);
        label_selectFile01->setWordWrap(false);

        gridLayout_3->addWidget(label_selectFile01, 0, 0, 1, 1);

        comboBox_hashType01 = new QComboBox(frame01_01);
        comboBox_hashType01->addItem(QString());
        comboBox_hashType01->addItem(QString());
        comboBox_hashType01->addItem(QString());
        comboBox_hashType01->addItem(QString());
        comboBox_hashType01->setObjectName(QString::fromUtf8("comboBox_hashType01"));

        gridLayout_3->addWidget(comboBox_hashType01, 3, 1, 1, 1);

        pushButton_cancelChecksum00 = new QPushButton(frame01_01);
        pushButton_cancelChecksum00->setObjectName(QString::fromUtf8("pushButton_cancelChecksum00"));
        sizePolicy3.setHeightForWidth(pushButton_cancelChecksum00->sizePolicy().hasHeightForWidth());
        pushButton_cancelChecksum00->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(pushButton_cancelChecksum00, 1, 3, 1, 1);

        lineEdit_File01 = new QLineEdit(frame01_01);
        lineEdit_File01->setObjectName(QString::fromUtf8("lineEdit_File01"));
        sizePolicy3.setHeightForWidth(lineEdit_File01->sizePolicy().hasHeightForWidth());
        lineEdit_File01->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(lineEdit_File01, 0, 1, 1, 3);

        pushButton_browse01 = new QPushButton(frame01_01);
        pushButton_browse01->setObjectName(QString::fromUtf8("pushButton_browse01"));
        sizePolicy3.setHeightForWidth(pushButton_browse01->sizePolicy().hasHeightForWidth());
        pushButton_browse01->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(pushButton_browse01, 1, 0, 1, 2);


        gridLayout_2->addWidget(frame01_01, 0, 0, 1, 1);

        frame01_02 = new QFrame(tab01);
        frame01_02->setObjectName(QString::fromUtf8("frame01_02"));
        frame01_02->setFrameShape(QFrame::StyledPanel);
        frame01_02->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame01_02);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_compValue01 = new QLabel(frame01_02);
        label_compValue01->setObjectName(QString::fromUtf8("label_compValue01"));
        sizePolicy4.setHeightForWidth(label_compValue01->sizePolicy().hasHeightForWidth());
        label_compValue01->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(label_compValue01, 1, 0, 1, 1);

        lineEdit_compValue01 = new QLineEdit(frame01_02);
        lineEdit_compValue01->setObjectName(QString::fromUtf8("lineEdit_compValue01"));

        gridLayout_4->addWidget(lineEdit_compValue01, 1, 1, 1, 1);

        lineEdit_calcValue01 = new QLineEdit(frame01_02);
        lineEdit_calcValue01->setObjectName(QString::fromUtf8("lineEdit_calcValue01"));

        gridLayout_4->addWidget(lineEdit_calcValue01, 0, 1, 1, 1);

        label_calcValue01 = new QLabel(frame01_02);
        label_calcValue01->setObjectName(QString::fromUtf8("label_calcValue01"));
        sizePolicy4.setHeightForWidth(label_calcValue01->sizePolicy().hasHeightForWidth());
        label_calcValue01->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(label_calcValue01, 0, 0, 1, 1);

        pushButton_Compare01 = new QPushButton(frame01_02);
        pushButton_Compare01->setObjectName(QString::fromUtf8("pushButton_Compare01"));

        gridLayout_4->addWidget(pushButton_Compare01, 2, 1, 1, 1);


        gridLayout_2->addWidget(frame01_02, 1, 0, 1, 1);

        tabWidget->addTab(tab01, QString());
        tab02 = new QWidget();
        tab02->setObjectName(QString::fromUtf8("tab02"));
        gridLayout_5 = new QGridLayout(tab02);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        frame02_03 = new QFrame(tab02);
        frame02_03->setObjectName(QString::fromUtf8("frame02_03"));
        frame02_03->setFrameShape(QFrame::StyledPanel);
        frame02_03->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame02_03);
        gridLayout_6->setSpacing(2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(2, 2, 2, 2);
        stackedWidget02 = new QStackedWidget(frame02_03);
        stackedWidget02->setObjectName(QString::fromUtf8("stackedWidget02"));
        stackedWidget02->setLineWidth(1);
        page02_01 = new QWidget();
        page02_01->setObjectName(QString::fromUtf8("page02_01"));
        gridLayout_10 = new QGridLayout(page02_01);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        treeViewFiles01 = new QTreeView(page02_01);
        treeViewFiles01->setObjectName(QString::fromUtf8("treeViewFiles01"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(treeViewFiles01->sizePolicy().hasHeightForWidth());
        treeViewFiles01->setSizePolicy(sizePolicy5);

        gridLayout_10->addWidget(treeViewFiles01, 0, 0, 1, 1);

        frame02_04 = new QFrame(page02_01);
        frame02_04->setObjectName(QString::fromUtf8("frame02_04"));
        frame02_04->setFrameShape(QFrame::StyledPanel);
        frame02_04->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame02_04);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 2, -1, 2);
        horizontalSpacer01 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer01);

        pushButton_prepareChecksum00 = new QPushButton(frame02_04);
        pushButton_prepareChecksum00->setObjectName(QString::fromUtf8("pushButton_prepareChecksum00"));

        horizontalLayout_4->addWidget(pushButton_prepareChecksum00);


        gridLayout_10->addWidget(frame02_04, 1, 0, 1, 1);

        stackedWidget02->addWidget(page02_01);
        page02_02 = new QWidget();
        page02_02->setObjectName(QString::fromUtf8("page02_02"));
        gridLayout_11 = new QGridLayout(page02_02);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        listWidget_selectedFiles01 = new QListWidget(page02_02);
        listWidget_selectedFiles01->setObjectName(QString::fromUtf8("listWidget_selectedFiles01"));
        listWidget_selectedFiles01->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        listWidget_selectedFiles01->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout_11->addWidget(listWidget_selectedFiles01, 3, 0, 1, 1);

        listWidget_selectedDirs01 = new QListWidget(page02_02);
        listWidget_selectedDirs01->setObjectName(QString::fromUtf8("listWidget_selectedDirs01"));
        sizePolicy5.setHeightForWidth(listWidget_selectedDirs01->sizePolicy().hasHeightForWidth());
        listWidget_selectedDirs01->setSizePolicy(sizePolicy5);
        listWidget_selectedDirs01->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        listWidget_selectedDirs01->setSelectionMode(QAbstractItemView::MultiSelection);
        listWidget_selectedDirs01->setSelectionBehavior(QAbstractItemView::SelectItems);

        gridLayout_11->addWidget(listWidget_selectedDirs01, 1, 0, 1, 1);

        label_selectedDirs01 = new QLabel(page02_02);
        label_selectedDirs01->setObjectName(QString::fromUtf8("label_selectedDirs01"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(10);
        label_selectedDirs01->setFont(font2);

        gridLayout_11->addWidget(label_selectedDirs01, 0, 0, 1, 1);

        frame02_05 = new QFrame(page02_02);
        frame02_05->setObjectName(QString::fromUtf8("frame02_05"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(frame02_05->sizePolicy().hasHeightForWidth());
        frame02_05->setSizePolicy(sizePolicy6);
        frame02_05->setFrameShape(QFrame::StyledPanel);
        frame02_05->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame02_05);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 2, -1, 2);
        horizontalSpacer02 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer02);

        pushButton_prepareChecksum01 = new QPushButton(frame02_05);
        pushButton_prepareChecksum01->setObjectName(QString::fromUtf8("pushButton_prepareChecksum01"));

        horizontalLayout_3->addWidget(pushButton_prepareChecksum01);


        gridLayout_11->addWidget(frame02_05, 4, 0, 1, 1);

        label_selectedFiles01 = new QLabel(page02_02);
        label_selectedFiles01->setObjectName(QString::fromUtf8("label_selectedFiles01"));
        label_selectedFiles01->setFont(font2);

        gridLayout_11->addWidget(label_selectedFiles01, 2, 0, 1, 1);

        stackedWidget02->addWidget(page02_02);
        page02_03 = new QWidget();
        page02_03->setObjectName(QString::fromUtf8("page02_03"));
        gridLayout_12 = new QGridLayout(page02_03);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        frame02_06 = new QFrame(page02_03);
        frame02_06->setObjectName(QString::fromUtf8("frame02_06"));
        sizePolicy6.setHeightForWidth(frame02_06->sizePolicy().hasHeightForWidth());
        frame02_06->setSizePolicy(sizePolicy6);
        frame02_06->setMinimumSize(QSize(0, 0));
        frame02_06->setFrameShape(QFrame::StyledPanel);
        frame02_06->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame02_06);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 2, -1, 2);
        checkBox_OnlyChecksums01 = new QCheckBox(frame02_06);
        checkBox_OnlyChecksums01->setObjectName(QString::fromUtf8("checkBox_OnlyChecksums01"));

        horizontalLayout_2->addWidget(checkBox_OnlyChecksums01);

        horizontalSpacer03 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer03);

        pushButton_createChecksum01 = new QPushButton(frame02_06);
        pushButton_createChecksum01->setObjectName(QString::fromUtf8("pushButton_createChecksum01"));

        horizontalLayout_2->addWidget(pushButton_createChecksum01);

        pushButton_cancelChecksum01 = new QPushButton(frame02_06);
        pushButton_cancelChecksum01->setObjectName(QString::fromUtf8("pushButton_cancelChecksum01"));

        horizontalLayout_2->addWidget(pushButton_cancelChecksum01);

        pushButton_return01 = new QPushButton(frame02_06);
        pushButton_return01->setObjectName(QString::fromUtf8("pushButton_return01"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(pushButton_return01->sizePolicy().hasHeightForWidth());
        pushButton_return01->setSizePolicy(sizePolicy7);

        horizontalLayout_2->addWidget(pushButton_return01);


        gridLayout_12->addWidget(frame02_06, 5, 0, 2, 1);

        textBrowser_showChecksum01 = new QTextBrowser(page02_03);
        textBrowser_showChecksum01->setObjectName(QString::fromUtf8("textBrowser_showChecksum01"));
        sizePolicy5.setHeightForWidth(textBrowser_showChecksum01->sizePolicy().hasHeightForWidth());
        textBrowser_showChecksum01->setSizePolicy(sizePolicy5);

        gridLayout_12->addWidget(textBrowser_showChecksum01, 0, 0, 1, 1);

        stackedWidget02->addWidget(page02_03);

        gridLayout_6->addWidget(stackedWidget02, 0, 0, 1, 1);


        gridLayout_5->addWidget(frame02_03, 2, 0, 1, 1);

        frame02_01 = new QFrame(tab02);
        frame02_01->setObjectName(QString::fromUtf8("frame02_01"));
        frame02_01->setFrameShape(QFrame::StyledPanel);
        frame02_01->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frame02_01);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        pushButton_settings01 = new QPushButton(frame02_01);
        pushButton_settings01->setObjectName(QString::fromUtf8("pushButton_settings01"));

        gridLayout_7->addWidget(pushButton_settings01, 2, 3, 1, 1);

        comboBox_hashType02 = new QComboBox(frame02_01);
        comboBox_hashType02->addItem(QString());
        comboBox_hashType02->addItem(QString());
        comboBox_hashType02->addItem(QString());
        comboBox_hashType02->addItem(QString());
        comboBox_hashType02->setObjectName(QString::fromUtf8("comboBox_hashType02"));

        gridLayout_7->addWidget(comboBox_hashType02, 2, 2, 1, 1);

        radioButton_useBrowse01 = new QRadioButton(frame02_01);
        buttonGroup_treeOrBrowser = new QButtonGroup(MainWindow);
        buttonGroup_treeOrBrowser->setObjectName(QString::fromUtf8("buttonGroup_treeOrBrowser"));
        buttonGroup_treeOrBrowser->addButton(radioButton_useBrowse01);
        radioButton_useBrowse01->setObjectName(QString::fromUtf8("radioButton_useBrowse01"));

        gridLayout_7->addWidget(radioButton_useBrowse01, 2, 1, 1, 1);

        radioButton_useTree01 = new QRadioButton(frame02_01);
        buttonGroup_treeOrBrowser->addButton(radioButton_useTree01);
        radioButton_useTree01->setObjectName(QString::fromUtf8("radioButton_useTree01"));

        gridLayout_7->addWidget(radioButton_useTree01, 2, 0, 1, 1);

        pushButton_resetView01 = new QPushButton(frame02_01);
        pushButton_resetView01->setObjectName(QString::fromUtf8("pushButton_resetView01"));

        gridLayout_7->addWidget(pushButton_resetView01, 2, 4, 1, 1);


        gridLayout_5->addWidget(frame02_01, 0, 0, 1, 1);

        frame02_02 = new QFrame(tab02);
        frame02_02->setObjectName(QString::fromUtf8("frame02_02"));
        frame02_02->setFrameShape(QFrame::StyledPanel);
        frame02_02->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame02_02);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_fileText01 = new QLineEdit(frame02_02);
        lineEdit_fileText01->setObjectName(QString::fromUtf8("lineEdit_fileText01"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(lineEdit_fileText01->sizePolicy().hasHeightForWidth());
        lineEdit_fileText01->setSizePolicy(sizePolicy8);

        horizontalLayout->addWidget(lineEdit_fileText01);

        pushButton_browseDirs01 = new QPushButton(frame02_02);
        pushButton_browseDirs01->setObjectName(QString::fromUtf8("pushButton_browseDirs01"));

        horizontalLayout->addWidget(pushButton_browseDirs01);

        pushButton_browseFiles01 = new QPushButton(frame02_02);
        pushButton_browseFiles01->setObjectName(QString::fromUtf8("pushButton_browseFiles01"));

        horizontalLayout->addWidget(pushButton_browseFiles01);

        pushButton_add01 = new QPushButton(frame02_02);
        pushButton_add01->setObjectName(QString::fromUtf8("pushButton_add01"));

        horizontalLayout->addWidget(pushButton_add01);

        pushButton_delete01 = new QPushButton(frame02_02);
        pushButton_delete01->setObjectName(QString::fromUtf8("pushButton_delete01"));

        horizontalLayout->addWidget(pushButton_delete01);


        gridLayout_5->addWidget(frame02_02, 1, 0, 1, 1);

        tabWidget->addTab(tab02, QString());
        tab03 = new QWidget();
        tab03->setObjectName(QString::fromUtf8("tab03"));
        gridLayout_9 = new QGridLayout(tab03);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        stackedWidget03 = new QStackedWidget(tab03);
        stackedWidget03->setObjectName(QString::fromUtf8("stackedWidget03"));
        page03_01 = new QWidget();
        page03_01->setObjectName(QString::fromUtf8("page03_01"));
        gridLayout_13 = new QGridLayout(page03_01);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        frame03_03 = new QFrame(page03_01);
        frame03_03->setObjectName(QString::fromUtf8("frame03_03"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(frame03_03->sizePolicy().hasHeightForWidth());
        frame03_03->setSizePolicy(sizePolicy9);
        frame03_03->setFrameShape(QFrame::StyledPanel);
        frame03_03->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(frame03_03);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        lineEdit_selectVerifyFile01 = new QLineEdit(frame03_03);
        lineEdit_selectVerifyFile01->setObjectName(QString::fromUtf8("lineEdit_selectVerifyFile01"));

        gridLayout_8->addWidget(lineEdit_selectVerifyFile01, 2, 0, 1, 1);

        pushButton_browse03 = new QPushButton(frame03_03);
        pushButton_browse03->setObjectName(QString::fromUtf8("pushButton_browse03"));

        gridLayout_8->addWidget(pushButton_browse03, 2, 1, 1, 1);

        label_browseVerify01 = new QLabel(frame03_03);
        label_browseVerify01->setObjectName(QString::fromUtf8("label_browseVerify01"));

        gridLayout_8->addWidget(label_browseVerify01, 1, 0, 1, 1);


        gridLayout_13->addWidget(frame03_03, 0, 0, 1, 1);

        frame03_01 = new QFrame(page03_01);
        frame03_01->setObjectName(QString::fromUtf8("frame03_01"));
        frame03_01->setFrameShape(QFrame::StyledPanel);
        frame03_01->setFrameShadow(QFrame::Raised);
        gridLayout_22 = new QGridLayout(frame03_01);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        label_dirsToVerify01 = new QLabel(frame03_01);
        label_dirsToVerify01->setObjectName(QString::fromUtf8("label_dirsToVerify01"));

        gridLayout_22->addWidget(label_dirsToVerify01, 0, 0, 1, 1);

        frame03_02 = new QFrame(frame03_01);
        frame03_02->setObjectName(QString::fromUtf8("frame03_02"));
        frame03_02->setFrameShape(QFrame::StyledPanel);
        frame03_02->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame03_02);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 120);
        pushButton_browseDirs02 = new QPushButton(frame03_02);
        pushButton_browseDirs02->setObjectName(QString::fromUtf8("pushButton_browseDirs02"));

        verticalLayout_2->addWidget(pushButton_browseDirs02);

        pushButton_deleteDirs02 = new QPushButton(frame03_02);
        pushButton_deleteDirs02->setObjectName(QString::fromUtf8("pushButton_deleteDirs02"));

        verticalLayout_2->addWidget(pushButton_deleteDirs02);


        gridLayout_22->addWidget(frame03_02, 3, 1, 1, 1);

        listWidget_verifyAgainst01 = new QListWidget(frame03_01);
        listWidget_verifyAgainst01->setObjectName(QString::fromUtf8("listWidget_verifyAgainst01"));

        gridLayout_22->addWidget(listWidget_verifyAgainst01, 3, 0, 1, 1);


        gridLayout_13->addWidget(frame03_01, 1, 0, 1, 1);

        frame03_04 = new QFrame(page03_01);
        frame03_04->setObjectName(QString::fromUtf8("frame03_04"));
        frame03_04->setFrameShape(QFrame::StyledPanel);
        frame03_04->setFrameShadow(QFrame::Raised);
        gridLayout_26 = new QGridLayout(frame03_04);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        textBrowser_prepareVerify01 = new QTextBrowser(frame03_04);
        textBrowser_prepareVerify01->setObjectName(QString::fromUtf8("textBrowser_prepareVerify01"));

        gridLayout_26->addWidget(textBrowser_prepareVerify01, 1, 0, 1, 1);

        label_verifyData01 = new QLabel(frame03_04);
        label_verifyData01->setObjectName(QString::fromUtf8("label_verifyData01"));

        gridLayout_26->addWidget(label_verifyData01, 0, 0, 1, 1);


        gridLayout_13->addWidget(frame03_04, 2, 0, 1, 1);

        frame03_05 = new QFrame(page03_01);
        frame03_05->setObjectName(QString::fromUtf8("frame03_05"));
        frame03_05->setFrameShape(QFrame::StyledPanel);
        frame03_05->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame03_05);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_viewResults01 = new QPushButton(frame03_05);
        pushButton_viewResults01->setObjectName(QString::fromUtf8("pushButton_viewResults01"));

        horizontalLayout_5->addWidget(pushButton_viewResults01);

        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton_clearAll01 = new QPushButton(frame03_05);
        pushButton_clearAll01->setObjectName(QString::fromUtf8("pushButton_clearAll01"));

        horizontalLayout_5->addWidget(pushButton_clearAll01);

        horizontalSpacer_2 = new QSpacerItem(70, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        pushButton_cancelVerify01 = new QPushButton(frame03_05);
        pushButton_cancelVerify01->setObjectName(QString::fromUtf8("pushButton_cancelVerify01"));

        horizontalLayout_5->addWidget(pushButton_cancelVerify01);

        pushButton_Verify01 = new QPushButton(frame03_05);
        pushButton_Verify01->setObjectName(QString::fromUtf8("pushButton_Verify01"));

        horizontalLayout_5->addWidget(pushButton_Verify01);

        pushButton_prepareVerify01 = new QPushButton(frame03_05);
        pushButton_prepareVerify01->setObjectName(QString::fromUtf8("pushButton_prepareVerify01"));

        horizontalLayout_5->addWidget(pushButton_prepareVerify01);


        gridLayout_13->addWidget(frame03_05, 3, 0, 1, 1);

        stackedWidget03->addWidget(page03_01);
        page03_02 = new QWidget();
        page03_02->setObjectName(QString::fromUtf8("page03_02"));
        gridLayout_15 = new QGridLayout(page03_02);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        frame03_06 = new QFrame(page03_02);
        frame03_06->setObjectName(QString::fromUtf8("frame03_06"));
        frame03_06->setFrameShape(QFrame::StyledPanel);
        frame03_06->setFrameShadow(QFrame::Raised);
        gridLayout_14 = new QGridLayout(frame03_06);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        tableWidget_matchedFiles01 = new QTableWidget(frame03_06);
        if (tableWidget_matchedFiles01->columnCount() < 4)
            tableWidget_matchedFiles01->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_matchedFiles01->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_matchedFiles01->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_matchedFiles01->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_matchedFiles01->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_matchedFiles01->setObjectName(QString::fromUtf8("tableWidget_matchedFiles01"));
        tableWidget_matchedFiles01->setStyleSheet(QString::fromUtf8("background-color: rgb(137, 255, 170);"));
        tableWidget_matchedFiles01->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        tableWidget_matchedFiles01->setDragDropMode(QAbstractItemView::NoDragDrop);
        tableWidget_matchedFiles01->setDefaultDropAction(Qt::CopyAction);
        tableWidget_matchedFiles01->setSelectionMode(QAbstractItemView::MultiSelection);
        tableWidget_matchedFiles01->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_matchedFiles01->setSortingEnabled(true);
        tableWidget_matchedFiles01->horizontalHeader()->setDefaultSectionSize(500);
        tableWidget_matchedFiles01->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget_matchedFiles01->horizontalHeader()->setStretchLastSection(true);

        gridLayout_14->addWidget(tableWidget_matchedFiles01, 0, 0, 1, 1);

        frame03_07 = new QFrame(frame03_06);
        frame03_07->setObjectName(QString::fromUtf8("frame03_07"));
        frame03_07->setFrameShape(QFrame::StyledPanel);
        frame03_07->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame03_07);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        comboBox_verifyTableViews01 = new QComboBox(frame03_07);
        comboBox_verifyTableViews01->addItem(QString());
        comboBox_verifyTableViews01->addItem(QString());
        comboBox_verifyTableViews01->addItem(QString());
        comboBox_verifyTableViews01->addItem(QString());
        comboBox_verifyTableViews01->setObjectName(QString::fromUtf8("comboBox_verifyTableViews01"));

        horizontalLayout_6->addWidget(comboBox_verifyTableViews01);

        pushButton_returnToVerify01 = new QPushButton(frame03_07);
        pushButton_returnToVerify01->setObjectName(QString::fromUtf8("pushButton_returnToVerify01"));

        horizontalLayout_6->addWidget(pushButton_returnToVerify01);

        toolButton_saveTable01 = new QToolButton(frame03_07);
        toolButton_saveTable01->setObjectName(QString::fromUtf8("toolButton_saveTable01"));
        sizePolicy6.setHeightForWidth(toolButton_saveTable01->sizePolicy().hasHeightForWidth());
        toolButton_saveTable01->setSizePolicy(sizePolicy6);
        toolButton_saveTable01->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout_6->addWidget(toolButton_saveTable01);


        gridLayout_14->addWidget(frame03_07, 2, 0, 1, 1);


        gridLayout_15->addWidget(frame03_06, 0, 0, 1, 1);

        stackedWidget03->addWidget(page03_02);
        page03_03 = new QWidget();
        page03_03->setObjectName(QString::fromUtf8("page03_03"));
        gridLayout_17 = new QGridLayout(page03_03);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        frame03_08 = new QFrame(page03_03);
        frame03_08->setObjectName(QString::fromUtf8("frame03_08"));
        frame03_08->setFrameShape(QFrame::StyledPanel);
        frame03_08->setFrameShadow(QFrame::Raised);
        gridLayout_16 = new QGridLayout(frame03_08);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        tableWidget_matchedDiff01 = new QTableWidget(frame03_08);
        if (tableWidget_matchedDiff01->columnCount() < 4)
            tableWidget_matchedDiff01->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_matchedDiff01->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_matchedDiff01->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_matchedDiff01->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_matchedDiff01->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        tableWidget_matchedDiff01->setObjectName(QString::fromUtf8("tableWidget_matchedDiff01"));
        tableWidget_matchedDiff01->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 252, 174);"));
        tableWidget_matchedDiff01->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_matchedDiff01->horizontalHeader()->setDefaultSectionSize(500);
        tableWidget_matchedDiff01->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget_matchedDiff01->horizontalHeader()->setStretchLastSection(true);

        gridLayout_16->addWidget(tableWidget_matchedDiff01, 0, 0, 1, 1);

        frame03_09 = new QFrame(frame03_08);
        frame03_09->setObjectName(QString::fromUtf8("frame03_09"));
        frame03_09->setFrameShape(QFrame::StyledPanel);
        frame03_09->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame03_09);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        comboBox_verifyTableViews02 = new QComboBox(frame03_09);
        comboBox_verifyTableViews02->addItem(QString());
        comboBox_verifyTableViews02->addItem(QString());
        comboBox_verifyTableViews02->addItem(QString());
        comboBox_verifyTableViews02->addItem(QString());
        comboBox_verifyTableViews02->setObjectName(QString::fromUtf8("comboBox_verifyTableViews02"));

        horizontalLayout_7->addWidget(comboBox_verifyTableViews02);

        pushButton_returnToVerify02 = new QPushButton(frame03_09);
        pushButton_returnToVerify02->setObjectName(QString::fromUtf8("pushButton_returnToVerify02"));

        horizontalLayout_7->addWidget(pushButton_returnToVerify02);

        toolButton_saveTable02 = new QToolButton(frame03_09);
        toolButton_saveTable02->setObjectName(QString::fromUtf8("toolButton_saveTable02"));
        sizePolicy6.setHeightForWidth(toolButton_saveTable02->sizePolicy().hasHeightForWidth());
        toolButton_saveTable02->setSizePolicy(sizePolicy6);
        toolButton_saveTable02->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout_7->addWidget(toolButton_saveTable02);


        gridLayout_16->addWidget(frame03_09, 1, 0, 1, 1);


        gridLayout_17->addWidget(frame03_08, 0, 0, 1, 1);

        stackedWidget03->addWidget(page03_03);
        page03_04 = new QWidget();
        page03_04->setObjectName(QString::fromUtf8("page03_04"));
        gridLayout_18 = new QGridLayout(page03_04);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        frame03_10 = new QFrame(page03_04);
        frame03_10->setObjectName(QString::fromUtf8("frame03_10"));
        frame03_10->setFrameShape(QFrame::StyledPanel);
        frame03_10->setFrameShadow(QFrame::Raised);
        gridLayout_19 = new QGridLayout(frame03_10);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        tableWidget_unmatchedFiles01 = new QTableWidget(frame03_10);
        if (tableWidget_unmatchedFiles01->columnCount() < 2)
            tableWidget_unmatchedFiles01->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_unmatchedFiles01->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_unmatchedFiles01->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        tableWidget_unmatchedFiles01->setObjectName(QString::fromUtf8("tableWidget_unmatchedFiles01"));
        tableWidget_unmatchedFiles01->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 131, 131);"));
        tableWidget_unmatchedFiles01->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_unmatchedFiles01->horizontalHeader()->setDefaultSectionSize(500);
        tableWidget_unmatchedFiles01->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget_unmatchedFiles01->horizontalHeader()->setStretchLastSection(true);

        gridLayout_19->addWidget(tableWidget_unmatchedFiles01, 0, 0, 1, 1);

        frame03_11 = new QFrame(frame03_10);
        frame03_11->setObjectName(QString::fromUtf8("frame03_11"));
        frame03_11->setFrameShape(QFrame::StyledPanel);
        frame03_11->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame03_11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        comboBox_verifyTableViews03 = new QComboBox(frame03_11);
        comboBox_verifyTableViews03->addItem(QString());
        comboBox_verifyTableViews03->addItem(QString());
        comboBox_verifyTableViews03->addItem(QString());
        comboBox_verifyTableViews03->addItem(QString());
        comboBox_verifyTableViews03->setObjectName(QString::fromUtf8("comboBox_verifyTableViews03"));

        horizontalLayout_8->addWidget(comboBox_verifyTableViews03);

        pushButton_returnToVerify03 = new QPushButton(frame03_11);
        pushButton_returnToVerify03->setObjectName(QString::fromUtf8("pushButton_returnToVerify03"));

        horizontalLayout_8->addWidget(pushButton_returnToVerify03);

        toolButton_saveTable03 = new QToolButton(frame03_11);
        toolButton_saveTable03->setObjectName(QString::fromUtf8("toolButton_saveTable03"));
        sizePolicy6.setHeightForWidth(toolButton_saveTable03->sizePolicy().hasHeightForWidth());
        toolButton_saveTable03->setSizePolicy(sizePolicy6);
        toolButton_saveTable03->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout_8->addWidget(toolButton_saveTable03);


        gridLayout_19->addWidget(frame03_11, 1, 0, 1, 1);


        gridLayout_18->addWidget(frame03_10, 0, 0, 1, 1);

        stackedWidget03->addWidget(page03_04);
        page03_05 = new QWidget();
        page03_05->setObjectName(QString::fromUtf8("page03_05"));
        gridLayout_25 = new QGridLayout(page03_05);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        frame03_12 = new QFrame(page03_05);
        frame03_12->setObjectName(QString::fromUtf8("frame03_12"));
        frame03_12->setFrameShape(QFrame::StyledPanel);
        frame03_12->setFrameShadow(QFrame::Raised);
        gridLayout_24 = new QGridLayout(frame03_12);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        tableWidget_newFiles01 = new QTableWidget(frame03_12);
        if (tableWidget_newFiles01->columnCount() < 2)
            tableWidget_newFiles01->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_newFiles01->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_newFiles01->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        tableWidget_newFiles01->setObjectName(QString::fromUtf8("tableWidget_newFiles01"));
        tableWidget_newFiles01->setStyleSheet(QString::fromUtf8("background-color: rgb(165, 216, 255);"));
        tableWidget_newFiles01->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_newFiles01->horizontalHeader()->setDefaultSectionSize(500);
        tableWidget_newFiles01->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget_newFiles01->horizontalHeader()->setStretchLastSection(true);

        gridLayout_24->addWidget(tableWidget_newFiles01, 0, 0, 1, 1);

        frame03_13 = new QFrame(frame03_12);
        frame03_13->setObjectName(QString::fromUtf8("frame03_13"));
        frame03_13->setFrameShape(QFrame::StyledPanel);
        frame03_13->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame03_13);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        comboBox_verifyTableViews04 = new QComboBox(frame03_13);
        comboBox_verifyTableViews04->addItem(QString());
        comboBox_verifyTableViews04->addItem(QString());
        comboBox_verifyTableViews04->addItem(QString());
        comboBox_verifyTableViews04->addItem(QString());
        comboBox_verifyTableViews04->setObjectName(QString::fromUtf8("comboBox_verifyTableViews04"));

        horizontalLayout_9->addWidget(comboBox_verifyTableViews04);

        pushButton_returnToVerify04 = new QPushButton(frame03_13);
        pushButton_returnToVerify04->setObjectName(QString::fromUtf8("pushButton_returnToVerify04"));

        horizontalLayout_9->addWidget(pushButton_returnToVerify04);

        toolButton_saveTable04 = new QToolButton(frame03_13);
        toolButton_saveTable04->setObjectName(QString::fromUtf8("toolButton_saveTable04"));
        sizePolicy6.setHeightForWidth(toolButton_saveTable04->sizePolicy().hasHeightForWidth());
        toolButton_saveTable04->setSizePolicy(sizePolicy6);
        toolButton_saveTable04->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout_9->addWidget(toolButton_saveTable04);


        gridLayout_24->addWidget(frame03_13, 1, 0, 1, 1);


        gridLayout_25->addWidget(frame03_12, 0, 0, 1, 1);

        stackedWidget03->addWidget(page03_05);

        gridLayout_9->addWidget(stackedWidget03, 1, 0, 1, 1);

        tabWidget->addTab(tab03, QString());
        tab05 = new QWidget();
        tab05->setObjectName(QString::fromUtf8("tab05"));
        gridLayout_82 = new QGridLayout(tab05);
        gridLayout_82->setObjectName(QString::fromUtf8("gridLayout_82"));
        frame05_05 = new QFrame(tab05);
        frame05_05->setObjectName(QString::fromUtf8("frame05_05"));
        frame05_05->setFrameShape(QFrame::StyledPanel);
        frame05_05->setFrameShadow(QFrame::Raised);
        gridLayout_77 = new QGridLayout(frame05_05);
        gridLayout_77->setObjectName(QString::fromUtf8("gridLayout_77"));
        pushButton_settings05 = new QPushButton(frame05_05);
        pushButton_settings05->setObjectName(QString::fromUtf8("pushButton_settings05"));

        gridLayout_77->addWidget(pushButton_settings05, 2, 3, 1, 1);

        comboBox_hashType05 = new QComboBox(frame05_05);
        comboBox_hashType05->addItem(QString());
        comboBox_hashType05->addItem(QString());
        comboBox_hashType05->addItem(QString());
        comboBox_hashType05->addItem(QString());
        comboBox_hashType05->setObjectName(QString::fromUtf8("comboBox_hashType05"));

        gridLayout_77->addWidget(comboBox_hashType05, 2, 2, 1, 1);

        radioButton_useBrowse05 = new QRadioButton(frame05_05);
        radioButton_useBrowse05->setObjectName(QString::fromUtf8("radioButton_useBrowse05"));

        gridLayout_77->addWidget(radioButton_useBrowse05, 2, 1, 1, 1);

        radioButton_useTree05 = new QRadioButton(frame05_05);
        radioButton_useTree05->setObjectName(QString::fromUtf8("radioButton_useTree05"));

        gridLayout_77->addWidget(radioButton_useTree05, 2, 0, 1, 1);

        pushButton_resetView05 = new QPushButton(frame05_05);
        pushButton_resetView05->setObjectName(QString::fromUtf8("pushButton_resetView05"));

        gridLayout_77->addWidget(pushButton_resetView05, 2, 4, 1, 1);


        gridLayout_82->addWidget(frame05_05, 0, 0, 1, 1);

        frame05_06 = new QFrame(tab05);
        frame05_06->setObjectName(QString::fromUtf8("frame05_06"));
        frame05_06->setFrameShape(QFrame::StyledPanel);
        frame05_06->setFrameShadow(QFrame::Raised);
        horizontalLayout_28 = new QHBoxLayout(frame05_06);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        lineEdit_fileText05 = new QLineEdit(frame05_06);
        lineEdit_fileText05->setObjectName(QString::fromUtf8("lineEdit_fileText05"));
        sizePolicy8.setHeightForWidth(lineEdit_fileText05->sizePolicy().hasHeightForWidth());
        lineEdit_fileText05->setSizePolicy(sizePolicy8);

        horizontalLayout_28->addWidget(lineEdit_fileText05);

        pushButton_browseDirs05 = new QPushButton(frame05_06);
        pushButton_browseDirs05->setObjectName(QString::fromUtf8("pushButton_browseDirs05"));

        horizontalLayout_28->addWidget(pushButton_browseDirs05);

        pushButton_browseFiles05 = new QPushButton(frame05_06);
        pushButton_browseFiles05->setObjectName(QString::fromUtf8("pushButton_browseFiles05"));

        horizontalLayout_28->addWidget(pushButton_browseFiles05);

        pushButton_add05 = new QPushButton(frame05_06);
        pushButton_add05->setObjectName(QString::fromUtf8("pushButton_add05"));

        horizontalLayout_28->addWidget(pushButton_add05);

        pushButton_delete05 = new QPushButton(frame05_06);
        pushButton_delete05->setObjectName(QString::fromUtf8("pushButton_delete05"));

        horizontalLayout_28->addWidget(pushButton_delete05);


        gridLayout_82->addWidget(frame05_06, 1, 0, 1, 1);

        frame05_01 = new QFrame(tab05);
        frame05_01->setObjectName(QString::fromUtf8("frame05_01"));
        frame05_01->setFrameShape(QFrame::StyledPanel);
        frame05_01->setFrameShadow(QFrame::Raised);
        gridLayout_78 = new QGridLayout(frame05_01);
        gridLayout_78->setSpacing(2);
        gridLayout_78->setObjectName(QString::fromUtf8("gridLayout_78"));
        gridLayout_78->setContentsMargins(2, 2, 2, 2);
        stackedWidget05 = new QStackedWidget(frame05_01);
        stackedWidget05->setObjectName(QString::fromUtf8("stackedWidget05"));
        stackedWidget05->setLineWidth(1);
        page05_01 = new QWidget();
        page05_01->setObjectName(QString::fromUtf8("page05_01"));
        gridLayout_79 = new QGridLayout(page05_01);
        gridLayout_79->setObjectName(QString::fromUtf8("gridLayout_79"));
        treeViewFiles05 = new QTreeView(page05_01);
        treeViewFiles05->setObjectName(QString::fromUtf8("treeViewFiles05"));
        sizePolicy5.setHeightForWidth(treeViewFiles05->sizePolicy().hasHeightForWidth());
        treeViewFiles05->setSizePolicy(sizePolicy5);

        gridLayout_79->addWidget(treeViewFiles05, 0, 0, 1, 1);

        frame05_02 = new QFrame(page05_01);
        frame05_02->setObjectName(QString::fromUtf8("frame05_02"));
        frame05_02->setFrameShape(QFrame::StyledPanel);
        frame05_02->setFrameShadow(QFrame::Raised);
        horizontalLayout_29 = new QHBoxLayout(frame05_02);
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        horizontalLayout_29->setContentsMargins(-1, 2, -1, 2);
        label_copyType05_01 = new QLabel(frame05_02);
        label_copyType05_01->setObjectName(QString::fromUtf8("label_copyType05_01"));

        horizontalLayout_29->addWidget(label_copyType05_01);

        label_copyType05_02 = new QLabel(frame05_02);
        label_copyType05_02->setObjectName(QString::fromUtf8("label_copyType05_02"));

        horizontalLayout_29->addWidget(label_copyType05_02);

        horizontalSpacer05_01 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_29->addItem(horizontalSpacer05_01);

        pushButton_copy_compare05_01 = new QPushButton(frame05_02);
        pushButton_copy_compare05_01->setObjectName(QString::fromUtf8("pushButton_copy_compare05_01"));

        horizontalLayout_29->addWidget(pushButton_copy_compare05_01);


        gridLayout_79->addWidget(frame05_02, 1, 0, 1, 1);

        stackedWidget05->addWidget(page05_01);
        page05_02 = new QWidget();
        page05_02->setObjectName(QString::fromUtf8("page05_02"));
        gridLayout_80 = new QGridLayout(page05_02);
        gridLayout_80->setObjectName(QString::fromUtf8("gridLayout_80"));
        listWidget_selectedFiles05 = new QListWidget(page05_02);
        listWidget_selectedFiles05->setObjectName(QString::fromUtf8("listWidget_selectedFiles05"));
        listWidget_selectedFiles05->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        listWidget_selectedFiles05->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout_80->addWidget(listWidget_selectedFiles05, 3, 0, 1, 1);

        listWidget_selectedDirs05 = new QListWidget(page05_02);
        listWidget_selectedDirs05->setObjectName(QString::fromUtf8("listWidget_selectedDirs05"));
        sizePolicy5.setHeightForWidth(listWidget_selectedDirs05->sizePolicy().hasHeightForWidth());
        listWidget_selectedDirs05->setSizePolicy(sizePolicy5);
        listWidget_selectedDirs05->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        listWidget_selectedDirs05->setSelectionMode(QAbstractItemView::MultiSelection);
        listWidget_selectedDirs05->setSelectionBehavior(QAbstractItemView::SelectItems);

        gridLayout_80->addWidget(listWidget_selectedDirs05, 1, 0, 1, 1);

        label_selectedDirs05 = new QLabel(page05_02);
        label_selectedDirs05->setObjectName(QString::fromUtf8("label_selectedDirs05"));
        label_selectedDirs05->setFont(font2);

        gridLayout_80->addWidget(label_selectedDirs05, 0, 0, 1, 1);

        frame05_03 = new QFrame(page05_02);
        frame05_03->setObjectName(QString::fromUtf8("frame05_03"));
        sizePolicy6.setHeightForWidth(frame05_03->sizePolicy().hasHeightForWidth());
        frame05_03->setSizePolicy(sizePolicy6);
        frame05_03->setFrameShape(QFrame::StyledPanel);
        frame05_03->setFrameShadow(QFrame::Raised);
        horizontalLayout_30 = new QHBoxLayout(frame05_03);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        horizontalLayout_30->setContentsMargins(-1, 2, -1, 2);
        horizontalSpacer05_02 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_30->addItem(horizontalSpacer05_02);

        pushButton_copy_compare05_02 = new QPushButton(frame05_03);
        pushButton_copy_compare05_02->setObjectName(QString::fromUtf8("pushButton_copy_compare05_02"));

        horizontalLayout_30->addWidget(pushButton_copy_compare05_02);


        gridLayout_80->addWidget(frame05_03, 4, 0, 1, 1);

        label_selectedFiles05 = new QLabel(page05_02);
        label_selectedFiles05->setObjectName(QString::fromUtf8("label_selectedFiles05"));
        label_selectedFiles05->setFont(font2);

        gridLayout_80->addWidget(label_selectedFiles05, 2, 0, 1, 1);

        stackedWidget05->addWidget(page05_02);
        page05_03 = new QWidget();
        page05_03->setObjectName(QString::fromUtf8("page05_03"));
        gridLayout_81 = new QGridLayout(page05_03);
        gridLayout_81->setObjectName(QString::fromUtf8("gridLayout_81"));
        frame05_04 = new QFrame(page05_03);
        frame05_04->setObjectName(QString::fromUtf8("frame05_04"));
        sizePolicy6.setHeightForWidth(frame05_04->sizePolicy().hasHeightForWidth());
        frame05_04->setSizePolicy(sizePolicy6);
        frame05_04->setMinimumSize(QSize(0, 0));
        frame05_04->setFrameShape(QFrame::StyledPanel);
        frame05_04->setFrameShadow(QFrame::Raised);
        horizontalLayout_31 = new QHBoxLayout(frame05_04);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        horizontalLayout_31->setContentsMargins(-1, 2, -1, 2);
        pushButton_viewResults05 = new QPushButton(frame05_04);
        pushButton_viewResults05->setObjectName(QString::fromUtf8("pushButton_viewResults05"));

        horizontalLayout_31->addWidget(pushButton_viewResults05);

        horizontalSpacer05_03 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_31->addItem(horizontalSpacer05_03);

        pushButton_startCopy05 = new QPushButton(frame05_04);
        pushButton_startCopy05->setObjectName(QString::fromUtf8("pushButton_startCopy05"));

        horizontalLayout_31->addWidget(pushButton_startCopy05);

        pushButton_cancelCopy05 = new QPushButton(frame05_04);
        pushButton_cancelCopy05->setObjectName(QString::fromUtf8("pushButton_cancelCopy05"));

        horizontalLayout_31->addWidget(pushButton_cancelCopy05);

        pushButton_return05 = new QPushButton(frame05_04);
        pushButton_return05->setObjectName(QString::fromUtf8("pushButton_return05"));
        sizePolicy7.setHeightForWidth(pushButton_return05->sizePolicy().hasHeightForWidth());
        pushButton_return05->setSizePolicy(sizePolicy7);

        horizontalLayout_31->addWidget(pushButton_return05);


        gridLayout_81->addWidget(frame05_04, 5, 0, 2, 1);

        textBrowser_showCopy05 = new QTextBrowser(page05_03);
        textBrowser_showCopy05->setObjectName(QString::fromUtf8("textBrowser_showCopy05"));
        sizePolicy5.setHeightForWidth(textBrowser_showCopy05->sizePolicy().hasHeightForWidth());
        textBrowser_showCopy05->setSizePolicy(sizePolicy5);

        gridLayout_81->addWidget(textBrowser_showCopy05, 0, 0, 1, 1);

        stackedWidget05->addWidget(page05_03);
        page05_04 = new QWidget();
        page05_04->setObjectName(QString::fromUtf8("page05_04"));
        gridLayout_28 = new QGridLayout(page05_04);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        frame05_7 = new QFrame(page05_04);
        frame05_7->setObjectName(QString::fromUtf8("frame05_7"));
        frame05_7->setFrameShape(QFrame::StyledPanel);
        frame05_7->setFrameShadow(QFrame::Raised);
        gridLayout_27 = new QGridLayout(frame05_7);
        gridLayout_27->setObjectName(QString::fromUtf8("gridLayout_27"));
        tableWidget_matchedFiles05 = new QTableWidget(frame05_7);
        if (tableWidget_matchedFiles05->columnCount() < 4)
            tableWidget_matchedFiles05->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_matchedFiles05->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_matchedFiles05->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_matchedFiles05->setHorizontalHeaderItem(2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_matchedFiles05->setHorizontalHeaderItem(3, __qtablewidgetitem15);
        tableWidget_matchedFiles05->setObjectName(QString::fromUtf8("tableWidget_matchedFiles05"));
        tableWidget_matchedFiles05->setStyleSheet(QString::fromUtf8("background-color: rgb(137, 255, 170);"));
        tableWidget_matchedFiles05->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        tableWidget_matchedFiles05->setDragDropMode(QAbstractItemView::NoDragDrop);
        tableWidget_matchedFiles05->setDefaultDropAction(Qt::CopyAction);
        tableWidget_matchedFiles05->setSelectionMode(QAbstractItemView::MultiSelection);
        tableWidget_matchedFiles05->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_matchedFiles05->setSortingEnabled(true);
        tableWidget_matchedFiles05->horizontalHeader()->setDefaultSectionSize(500);
        tableWidget_matchedFiles05->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget_matchedFiles05->horizontalHeader()->setStretchLastSection(true);

        gridLayout_27->addWidget(tableWidget_matchedFiles05, 0, 0, 1, 1);

        frame05_8 = new QFrame(frame05_7);
        frame05_8->setObjectName(QString::fromUtf8("frame05_8"));
        frame05_8->setFrameShape(QFrame::StyledPanel);
        frame05_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(frame05_8);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        comboBox_verifyTableViews05_1 = new QComboBox(frame05_8);
        comboBox_verifyTableViews05_1->addItem(QString());
        comboBox_verifyTableViews05_1->addItem(QString());
        comboBox_verifyTableViews05_1->addItem(QString());
        comboBox_verifyTableViews05_1->setObjectName(QString::fromUtf8("comboBox_verifyTableViews05_1"));

        horizontalLayout_10->addWidget(comboBox_verifyTableViews05_1);

        pushButton_return05_1 = new QPushButton(frame05_8);
        pushButton_return05_1->setObjectName(QString::fromUtf8("pushButton_return05_1"));

        horizontalLayout_10->addWidget(pushButton_return05_1);

        toolButton_saveTable05_1 = new QToolButton(frame05_8);
        toolButton_saveTable05_1->setObjectName(QString::fromUtf8("toolButton_saveTable05_1"));
        sizePolicy6.setHeightForWidth(toolButton_saveTable05_1->sizePolicy().hasHeightForWidth());
        toolButton_saveTable05_1->setSizePolicy(sizePolicy6);
        toolButton_saveTable05_1->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout_10->addWidget(toolButton_saveTable05_1);


        gridLayout_27->addWidget(frame05_8, 2, 0, 1, 1);


        gridLayout_28->addWidget(frame05_7, 0, 0, 1, 1);

        stackedWidget05->addWidget(page05_04);
        page05_05 = new QWidget();
        page05_05->setObjectName(QString::fromUtf8("page05_05"));
        gridLayout_30 = new QGridLayout(page05_05);
        gridLayout_30->setObjectName(QString::fromUtf8("gridLayout_30"));
        frame05_9 = new QFrame(page05_05);
        frame05_9->setObjectName(QString::fromUtf8("frame05_9"));
        frame05_9->setFrameShape(QFrame::StyledPanel);
        frame05_9->setFrameShadow(QFrame::Raised);
        gridLayout_29 = new QGridLayout(frame05_9);
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        tableWidget_matchedDiff05 = new QTableWidget(frame05_9);
        if (tableWidget_matchedDiff05->columnCount() < 4)
            tableWidget_matchedDiff05->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_matchedDiff05->setHorizontalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_matchedDiff05->setHorizontalHeaderItem(1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_matchedDiff05->setHorizontalHeaderItem(2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_matchedDiff05->setHorizontalHeaderItem(3, __qtablewidgetitem19);
        tableWidget_matchedDiff05->setObjectName(QString::fromUtf8("tableWidget_matchedDiff05"));
        tableWidget_matchedDiff05->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 252, 174);"));
        tableWidget_matchedDiff05->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_matchedDiff05->horizontalHeader()->setDefaultSectionSize(500);
        tableWidget_matchedDiff05->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget_matchedDiff05->horizontalHeader()->setStretchLastSection(true);

        gridLayout_29->addWidget(tableWidget_matchedDiff05, 0, 0, 1, 1);

        frame05_10 = new QFrame(frame05_9);
        frame05_10->setObjectName(QString::fromUtf8("frame05_10"));
        frame05_10->setFrameShape(QFrame::StyledPanel);
        frame05_10->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(frame05_10);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        comboBox_verifyTableViews05_2 = new QComboBox(frame05_10);
        comboBox_verifyTableViews05_2->addItem(QString());
        comboBox_verifyTableViews05_2->addItem(QString());
        comboBox_verifyTableViews05_2->addItem(QString());
        comboBox_verifyTableViews05_2->setObjectName(QString::fromUtf8("comboBox_verifyTableViews05_2"));

        horizontalLayout_11->addWidget(comboBox_verifyTableViews05_2);

        pushButton_return05_2 = new QPushButton(frame05_10);
        pushButton_return05_2->setObjectName(QString::fromUtf8("pushButton_return05_2"));

        horizontalLayout_11->addWidget(pushButton_return05_2);

        toolButton_saveTable05_2 = new QToolButton(frame05_10);
        toolButton_saveTable05_2->setObjectName(QString::fromUtf8("toolButton_saveTable05_2"));
        sizePolicy6.setHeightForWidth(toolButton_saveTable05_2->sizePolicy().hasHeightForWidth());
        toolButton_saveTable05_2->setSizePolicy(sizePolicy6);
        toolButton_saveTable05_2->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout_11->addWidget(toolButton_saveTable05_2);


        gridLayout_29->addWidget(frame05_10, 1, 0, 1, 1);


        gridLayout_30->addWidget(frame05_9, 0, 0, 1, 1);

        stackedWidget05->addWidget(page05_05);
        page05_06 = new QWidget();
        page05_06->setObjectName(QString::fromUtf8("page05_06"));
        gridLayout_32 = new QGridLayout(page05_06);
        gridLayout_32->setObjectName(QString::fromUtf8("gridLayout_32"));
        frame05_11 = new QFrame(page05_06);
        frame05_11->setObjectName(QString::fromUtf8("frame05_11"));
        frame05_11->setFrameShape(QFrame::StyledPanel);
        frame05_11->setFrameShadow(QFrame::Raised);
        gridLayout_31 = new QGridLayout(frame05_11);
        gridLayout_31->setObjectName(QString::fromUtf8("gridLayout_31"));
        tableWidget_unmatchedFiles05 = new QTableWidget(frame05_11);
        if (tableWidget_unmatchedFiles05->columnCount() < 4)
            tableWidget_unmatchedFiles05->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_unmatchedFiles05->setHorizontalHeaderItem(0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_unmatchedFiles05->setHorizontalHeaderItem(1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_unmatchedFiles05->setHorizontalHeaderItem(2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_unmatchedFiles05->setHorizontalHeaderItem(3, __qtablewidgetitem23);
        tableWidget_unmatchedFiles05->setObjectName(QString::fromUtf8("tableWidget_unmatchedFiles05"));
        tableWidget_unmatchedFiles05->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 131, 131);"));
        tableWidget_unmatchedFiles05->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_unmatchedFiles05->horizontalHeader()->setDefaultSectionSize(500);
        tableWidget_unmatchedFiles05->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget_unmatchedFiles05->horizontalHeader()->setStretchLastSection(true);

        gridLayout_31->addWidget(tableWidget_unmatchedFiles05, 0, 0, 1, 1);

        frame05_12 = new QFrame(frame05_11);
        frame05_12->setObjectName(QString::fromUtf8("frame05_12"));
        frame05_12->setFrameShape(QFrame::StyledPanel);
        frame05_12->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(frame05_12);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        comboBox_verifyTableViews05_3 = new QComboBox(frame05_12);
        comboBox_verifyTableViews05_3->addItem(QString());
        comboBox_verifyTableViews05_3->addItem(QString());
        comboBox_verifyTableViews05_3->addItem(QString());
        comboBox_verifyTableViews05_3->setObjectName(QString::fromUtf8("comboBox_verifyTableViews05_3"));

        horizontalLayout_12->addWidget(comboBox_verifyTableViews05_3);

        pushButton_return05_3 = new QPushButton(frame05_12);
        pushButton_return05_3->setObjectName(QString::fromUtf8("pushButton_return05_3"));

        horizontalLayout_12->addWidget(pushButton_return05_3);

        toolButton_saveTable05_3 = new QToolButton(frame05_12);
        toolButton_saveTable05_3->setObjectName(QString::fromUtf8("toolButton_saveTable05_3"));
        sizePolicy6.setHeightForWidth(toolButton_saveTable05_3->sizePolicy().hasHeightForWidth());
        toolButton_saveTable05_3->setSizePolicy(sizePolicy6);
        toolButton_saveTable05_3->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout_12->addWidget(toolButton_saveTable05_3);


        gridLayout_31->addWidget(frame05_12, 1, 0, 1, 1);


        gridLayout_32->addWidget(frame05_11, 0, 0, 1, 1);

        stackedWidget05->addWidget(page05_06);
        page05_07 = new QWidget();
        page05_07->setObjectName(QString::fromUtf8("page05_07"));
        gridLayout_34 = new QGridLayout(page05_07);
        gridLayout_34->setObjectName(QString::fromUtf8("gridLayout_34"));
        frame05_13 = new QFrame(page05_07);
        frame05_13->setObjectName(QString::fromUtf8("frame05_13"));
        frame05_13->setFrameShape(QFrame::StyledPanel);
        frame05_13->setFrameShadow(QFrame::Raised);
        gridLayout_33 = new QGridLayout(frame05_13);
        gridLayout_33->setObjectName(QString::fromUtf8("gridLayout_33"));
        tableWidget_newFiles05 = new QTableWidget(frame05_13);
        if (tableWidget_newFiles05->columnCount() < 2)
            tableWidget_newFiles05->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_newFiles05->setHorizontalHeaderItem(0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_newFiles05->setHorizontalHeaderItem(1, __qtablewidgetitem25);
        tableWidget_newFiles05->setObjectName(QString::fromUtf8("tableWidget_newFiles05"));
        tableWidget_newFiles05->setStyleSheet(QString::fromUtf8("background-color: rgb(165, 216, 255);"));
        tableWidget_newFiles05->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_newFiles05->horizontalHeader()->setDefaultSectionSize(500);
        tableWidget_newFiles05->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget_newFiles05->horizontalHeader()->setStretchLastSection(true);

        gridLayout_33->addWidget(tableWidget_newFiles05, 0, 0, 1, 1);

        frame05_14 = new QFrame(frame05_13);
        frame05_14->setObjectName(QString::fromUtf8("frame05_14"));
        frame05_14->setFrameShape(QFrame::StyledPanel);
        frame05_14->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame05_14);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        comboBox_verifyTableViews05_4 = new QComboBox(frame05_14);
        comboBox_verifyTableViews05_4->addItem(QString());
        comboBox_verifyTableViews05_4->addItem(QString());
        comboBox_verifyTableViews05_4->addItem(QString());
        comboBox_verifyTableViews05_4->setObjectName(QString::fromUtf8("comboBox_verifyTableViews05_4"));

        horizontalLayout_13->addWidget(comboBox_verifyTableViews05_4);

        pushButton_return05_4 = new QPushButton(frame05_14);
        pushButton_return05_4->setObjectName(QString::fromUtf8("pushButton_return05_4"));

        horizontalLayout_13->addWidget(pushButton_return05_4);

        toolButton_saveTable05_4 = new QToolButton(frame05_14);
        toolButton_saveTable05_4->setObjectName(QString::fromUtf8("toolButton_saveTable05_4"));
        sizePolicy6.setHeightForWidth(toolButton_saveTable05_4->sizePolicy().hasHeightForWidth());
        toolButton_saveTable05_4->setSizePolicy(sizePolicy6);
        toolButton_saveTable05_4->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout_13->addWidget(toolButton_saveTable05_4);


        gridLayout_33->addWidget(frame05_14, 1, 0, 1, 1);


        gridLayout_34->addWidget(frame05_13, 0, 0, 1, 1);

        stackedWidget05->addWidget(page05_07);

        gridLayout_78->addWidget(stackedWidget05, 0, 0, 1, 1);


        gridLayout_82->addWidget(frame05_01, 2, 0, 1, 1);

        tabWidget->addTab(tab05, QString());
        tab04 = new QWidget();
        tab04->setObjectName(QString::fromUtf8("tab04"));
        gridLayout_20 = new QGridLayout(tab04);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        frame04_01 = new QFrame(tab04);
        frame04_01->setObjectName(QString::fromUtf8("frame04_01"));
        frame04_01->setFrameShape(QFrame::StyledPanel);
        frame04_01->setFrameShadow(QFrame::Raised);
        gridLayout_21 = new QGridLayout(frame04_01);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        plainTextEdit_userText01 = new QPlainTextEdit(frame04_01);
        plainTextEdit_userText01->setObjectName(QString::fromUtf8("plainTextEdit_userText01"));

        gridLayout_21->addWidget(plainTextEdit_userText01, 1, 0, 1, 1);

        label_userText01 = new QLabel(frame04_01);
        label_userText01->setObjectName(QString::fromUtf8("label_userText01"));

        gridLayout_21->addWidget(label_userText01, 0, 0, 1, 1);


        gridLayout_20->addWidget(frame04_01, 0, 0, 1, 1);

        frame04_02 = new QFrame(tab04);
        frame04_02->setObjectName(QString::fromUtf8("frame04_02"));
        frame04_02->setFrameShape(QFrame::StyledPanel);
        frame04_02->setFrameShadow(QFrame::Raised);
        gridLayout_23 = new QGridLayout(frame04_02);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        lineEdit_textChecksum01 = new QLineEdit(frame04_02);
        lineEdit_textChecksum01->setObjectName(QString::fromUtf8("lineEdit_textChecksum01"));

        gridLayout_23->addWidget(lineEdit_textChecksum01, 1, 0, 1, 1);

        lineEdit_compare04 = new QLineEdit(frame04_02);
        lineEdit_compare04->setObjectName(QString::fromUtf8("lineEdit_compare04"));

        gridLayout_23->addWidget(lineEdit_compare04, 2, 0, 1, 1);

        label_checksum04 = new QLabel(frame04_02);
        label_checksum04->setObjectName(QString::fromUtf8("label_checksum04"));

        gridLayout_23->addWidget(label_checksum04, 0, 0, 1, 1);

        pushButton_compare04 = new QPushButton(frame04_02);
        pushButton_compare04->setObjectName(QString::fromUtf8("pushButton_compare04"));

        gridLayout_23->addWidget(pushButton_compare04, 2, 1, 1, 1);


        gridLayout_20->addWidget(frame04_02, 1, 0, 1, 1);

        frame04_03 = new QFrame(tab04);
        frame04_03->setObjectName(QString::fromUtf8("frame04_03"));
        frame04_03->setFrameShape(QFrame::StyledPanel);
        frame04_03->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame04_03);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 5, 0, 5);
        comboBox_hashType04 = new QComboBox(frame04_03);
        comboBox_hashType04->addItem(QString());
        comboBox_hashType04->addItem(QString());
        comboBox_hashType04->addItem(QString());
        comboBox_hashType04->addItem(QString());
        comboBox_hashType04->setObjectName(QString::fromUtf8("comboBox_hashType04"));

        verticalLayout_3->addWidget(comboBox_hashType04);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout_20->addWidget(frame04_03, 0, 1, 1, 1);

        checkBox_toUpper04 = new QCheckBox(tab04);
        checkBox_toUpper04->setObjectName(QString::fromUtf8("checkBox_toUpper04"));

        gridLayout_20->addWidget(checkBox_toUpper04, 1, 1, 1, 1);

        tabWidget->addTab(tab04, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuEdit->addAction(actionSettings);

        retranslateUi(MainWindow);
        QObject::connect(lineEdit_File01, SIGNAL(returnPressed()), pushButton_beginChecksum01, SLOT(animateClick()));
        QObject::connect(lineEdit_compValue01, SIGNAL(returnPressed()), pushButton_Compare01, SLOT(animateClick()));

        tabWidget->setCurrentIndex(3);
        comboBox_verifyTableViews01->setCurrentIndex(0);
        comboBox_verifyTableViews02->setCurrentIndex(0);
        comboBox_verifyTableViews03->setCurrentIndex(0);
        comboBox_verifyTableViews04->setCurrentIndex(0);
        comboBox_verifyTableViews05_1->setCurrentIndex(0);
        comboBox_verifyTableViews05_2->setCurrentIndex(0);
        comboBox_verifyTableViews05_3->setCurrentIndex(0);
        comboBox_verifyTableViews05_4->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Checksum1", nullptr));
        actionSettings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        actionSave_All_Tables->setText(QCoreApplication::translate("MainWindow", "Save All Files", nullptr));
        actionSave_Matched_Tables->setText(QCoreApplication::translate("MainWindow", "Save Matched Files", nullptr));
        actionSave_Partially_Matched_Tables->setText(QCoreApplication::translate("MainWindow", "Save Partially Matched Files", nullptr));
        actionSave_Unmatched_Tables->setText(QCoreApplication::translate("MainWindow", "Save Unmatched Files", nullptr));
        actionSave_New_Files->setText(QCoreApplication::translate("MainWindow", "Save New Files", nullptr));
        pushButton_beginChecksum01->setText(QCoreApplication::translate("MainWindow", "Begin Checksum", nullptr));
        label_hashType01->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Checksum</p><p>Type:</p></body></html>", nullptr));
        label_selectFile01->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>File To </p><p>Checksum:  </p></body></html>", nullptr));
        comboBox_hashType01->setItemText(0, QCoreApplication::translate("MainWindow", "MD5", nullptr));
        comboBox_hashType01->setItemText(1, QCoreApplication::translate("MainWindow", "SHA-1", nullptr));
        comboBox_hashType01->setItemText(2, QCoreApplication::translate("MainWindow", "SHA-256", nullptr));
        comboBox_hashType01->setItemText(3, QCoreApplication::translate("MainWindow", "SHA-512", nullptr));

        pushButton_cancelChecksum00->setText(QCoreApplication::translate("MainWindow", "Cancel Checksum", nullptr));
        pushButton_browse01->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        label_compValue01->setText(QCoreApplication::translate("MainWindow", "Compare To:", nullptr));
        label_calcValue01->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Checksum:      </p></body></html>", nullptr));
        pushButton_Compare01->setText(QCoreApplication::translate("MainWindow", "Compare", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab01), QCoreApplication::translate("MainWindow", "File Checksum", nullptr));
        pushButton_prepareChecksum00->setText(QCoreApplication::translate("MainWindow", "Prepare For Checksum", nullptr));
        label_selectedDirs01->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Selected Directories / Folders:</p></body></html>", nullptr));
        pushButton_prepareChecksum01->setText(QCoreApplication::translate("MainWindow", "Prepare For Checksum", nullptr));
        label_selectedFiles01->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Selected Files:</p></body></html>", nullptr));
        checkBox_OnlyChecksums01->setText(QCoreApplication::translate("MainWindow", "Write Only Checksums To File", nullptr));
        pushButton_createChecksum01->setText(QCoreApplication::translate("MainWindow", "Start Checksum", nullptr));
        pushButton_cancelChecksum01->setText(QCoreApplication::translate("MainWindow", "Cancel Checksum", nullptr));
        pushButton_return01->setText(QCoreApplication::translate("MainWindow", "Return To File View", nullptr));
        pushButton_settings01->setText(QCoreApplication::translate("MainWindow", "Open Settings", nullptr));
        comboBox_hashType02->setItemText(0, QCoreApplication::translate("MainWindow", "MD5", nullptr));
        comboBox_hashType02->setItemText(1, QCoreApplication::translate("MainWindow", "SHA-1", nullptr));
        comboBox_hashType02->setItemText(2, QCoreApplication::translate("MainWindow", "SHA-256", nullptr));
        comboBox_hashType02->setItemText(3, QCoreApplication::translate("MainWindow", "SHA-512", nullptr));

        radioButton_useBrowse01->setText(QCoreApplication::translate("MainWindow", "Use Native File Browser", nullptr));
        radioButton_useTree01->setText(QCoreApplication::translate("MainWindow", "Use Tree View", nullptr));
        pushButton_resetView01->setText(QCoreApplication::translate("MainWindow", "Reset View", nullptr));
        pushButton_browseDirs01->setText(QCoreApplication::translate("MainWindow", "Browse Folders", nullptr));
        pushButton_browseFiles01->setText(QCoreApplication::translate("MainWindow", "Browse Files", nullptr));
        pushButton_add01->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pushButton_delete01->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab02), QCoreApplication::translate("MainWindow", "Create Checksum File", nullptr));
        lineEdit_selectVerifyFile01->setPlaceholderText(QString());
        pushButton_browse03->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        label_browseVerify01->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Checksum File</p></body></html>", nullptr));
        label_dirsToVerify01->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Directories To Verify Against (Optional)</p></body></html>", nullptr));
        pushButton_browseDirs02->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        pushButton_deleteDirs02->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        textBrowser_prepareVerify01->setPlaceholderText(QString());
        label_verifyData01->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Verification Data</p></body></html>", nullptr));
        pushButton_viewResults01->setText(QCoreApplication::translate("MainWindow", "View Results", nullptr));
        pushButton_clearAll01->setText(QCoreApplication::translate("MainWindow", "Clear All", nullptr));
        pushButton_cancelVerify01->setText(QCoreApplication::translate("MainWindow", "Cancel Verify", nullptr));
        pushButton_Verify01->setText(QCoreApplication::translate("MainWindow", "Begin Verify", nullptr));
        pushButton_prepareVerify01->setText(QCoreApplication::translate("MainWindow", "Prepare To Verify", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_matchedFiles01->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Files - Matched (Checksum File)", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_matchedFiles01->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Checksums - Matched (Checksum File)", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_matchedFiles01->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Files - Matched (From Disk)", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_matchedFiles01->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Checksums - Matched (From Disk)", nullptr));
        comboBox_verifyTableViews01->setItemText(0, QCoreApplication::translate("MainWindow", "Matched Files / Matched Checksums", nullptr));
        comboBox_verifyTableViews01->setItemText(1, QCoreApplication::translate("MainWindow", "Unmatched Files / Matched Checksums", nullptr));
        comboBox_verifyTableViews01->setItemText(2, QCoreApplication::translate("MainWindow", "Unmatched Files / Unmatched Checksums", nullptr));
        comboBox_verifyTableViews01->setItemText(3, QCoreApplication::translate("MainWindow", "New Unmatched Files / Unmatched Checksums", nullptr));

        pushButton_returnToVerify01->setText(QCoreApplication::translate("MainWindow", "Return To Previous Screen", nullptr));
        toolButton_saveTable01->setText(QCoreApplication::translate("MainWindow", "Save Table ", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_matchedDiff01->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Files - Unmatched (Checksum File)", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_matchedDiff01->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Checksums - Matched (Checksum File)", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_matchedDiff01->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Files - Unmatched (From Disk)", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_matchedDiff01->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Checksums - Matched (From Disk)", nullptr));
        comboBox_verifyTableViews02->setItemText(0, QCoreApplication::translate("MainWindow", "Matched Files / Matched Checksums", nullptr));
        comboBox_verifyTableViews02->setItemText(1, QCoreApplication::translate("MainWindow", "Unmatched Files / Matched Checksums", nullptr));
        comboBox_verifyTableViews02->setItemText(2, QCoreApplication::translate("MainWindow", "Unmatched Files / Unmatched Checksums", nullptr));
        comboBox_verifyTableViews02->setItemText(3, QCoreApplication::translate("MainWindow", "New Unmatched Files / Unmatched Checksums", nullptr));

        pushButton_returnToVerify02->setText(QCoreApplication::translate("MainWindow", "Return To Previous Screen", nullptr));
        toolButton_saveTable02->setText(QCoreApplication::translate("MainWindow", "Save Table ", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_unmatchedFiles01->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Files - Unmatched (Checksum File)", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_unmatchedFiles01->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "Checksums - Unmatched (Checksum File)", nullptr));
        comboBox_verifyTableViews03->setItemText(0, QCoreApplication::translate("MainWindow", "Matched Files / Matched Checksums", nullptr));
        comboBox_verifyTableViews03->setItemText(1, QCoreApplication::translate("MainWindow", "Unmatched Files / Matched Checksums", nullptr));
        comboBox_verifyTableViews03->setItemText(2, QCoreApplication::translate("MainWindow", "Unmatched Files / Unmatched Checksums", nullptr));
        comboBox_verifyTableViews03->setItemText(3, QCoreApplication::translate("MainWindow", "New Unmatched Files / Unmatched Checksums", nullptr));

        pushButton_returnToVerify03->setText(QCoreApplication::translate("MainWindow", "Return To Previous Screen", nullptr));
        toolButton_saveTable03->setText(QCoreApplication::translate("MainWindow", "Save Table ", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_newFiles01->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "New Files - Unmatched (From Disk)", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_newFiles01->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "New Checksums - Unmatched (From Disk)", nullptr));
        comboBox_verifyTableViews04->setItemText(0, QCoreApplication::translate("MainWindow", "Matched Files / Matched Checksums", nullptr));
        comboBox_verifyTableViews04->setItemText(1, QCoreApplication::translate("MainWindow", "Unmatched Files / Matched Checksums", nullptr));
        comboBox_verifyTableViews04->setItemText(2, QCoreApplication::translate("MainWindow", "Unmatched Files / Unmatched Checksums", nullptr));
        comboBox_verifyTableViews04->setItemText(3, QCoreApplication::translate("MainWindow", "New Unmatched Files / Unmatched Checksums", nullptr));

        pushButton_returnToVerify04->setText(QCoreApplication::translate("MainWindow", "Return To Previous Screen", nullptr));
        toolButton_saveTable04->setText(QCoreApplication::translate("MainWindow", "Save Table ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab03), QCoreApplication::translate("MainWindow", "Verify Checksum File", nullptr));
        pushButton_settings05->setText(QCoreApplication::translate("MainWindow", "Open Settings", nullptr));
        comboBox_hashType05->setItemText(0, QCoreApplication::translate("MainWindow", "MD5", nullptr));
        comboBox_hashType05->setItemText(1, QCoreApplication::translate("MainWindow", "SHA-1", nullptr));
        comboBox_hashType05->setItemText(2, QCoreApplication::translate("MainWindow", "SHA-256", nullptr));
        comboBox_hashType05->setItemText(3, QCoreApplication::translate("MainWindow", "SHA-512", nullptr));

        radioButton_useBrowse05->setText(QCoreApplication::translate("MainWindow", "Use Native File Browser", nullptr));
        radioButton_useTree05->setText(QCoreApplication::translate("MainWindow", "Use Tree View", nullptr));
        pushButton_resetView05->setText(QCoreApplication::translate("MainWindow", "Reset View", nullptr));
        pushButton_browseDirs05->setText(QCoreApplication::translate("MainWindow", "Browse Folders", nullptr));
        pushButton_browseFiles05->setText(QCoreApplication::translate("MainWindow", "Browse Files", nullptr));
        pushButton_add05->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pushButton_delete05->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        label_copyType05_01->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Copy Type: </p></body></html>", nullptr));
        label_copyType05_02->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        pushButton_copy_compare05_01->setText(QCoreApplication::translate("MainWindow", "Copy To...", nullptr));
        label_selectedDirs05->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Selected Directories / Folders:</p></body></html>", nullptr));
        pushButton_copy_compare05_02->setText(QCoreApplication::translate("MainWindow", "Copy To...", nullptr));
        label_selectedFiles05->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Selected Files:</p></body></html>", nullptr));
        pushButton_viewResults05->setText(QCoreApplication::translate("MainWindow", "View Results", nullptr));
        pushButton_startCopy05->setText(QCoreApplication::translate("MainWindow", "Begin Copy && Compare", nullptr));
        pushButton_cancelCopy05->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        pushButton_return05->setText(QCoreApplication::translate("MainWindow", "Return To File View", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_matchedFiles05->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "Files - Matched (Original File)", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_matchedFiles05->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "Checksums - Matched (Original File)", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_matchedFiles05->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "Files - Matched (Copied File)", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_matchedFiles05->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "Checksums - Matched (Copied File)", nullptr));
        comboBox_verifyTableViews05_1->setItemText(0, QCoreApplication::translate("MainWindow", "Matched Files / Matched Checksums", nullptr));
        comboBox_verifyTableViews05_1->setItemText(1, QCoreApplication::translate("MainWindow", "Unmatched Files / Matched Checksums", nullptr));
        comboBox_verifyTableViews05_1->setItemText(2, QCoreApplication::translate("MainWindow", "Unmatched Files / Unmatched Checksums", nullptr));

        pushButton_return05_1->setText(QCoreApplication::translate("MainWindow", "Return To Previous Screen", nullptr));
        toolButton_saveTable05_1->setText(QCoreApplication::translate("MainWindow", "Save Table ", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_matchedDiff05->horizontalHeaderItem(0);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "Files - Unmatched (Original File)", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_matchedDiff05->horizontalHeaderItem(1);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "Checksums - Matched (Original File)", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_matchedDiff05->horizontalHeaderItem(2);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "Files - Unmatched (Copied File)", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_matchedDiff05->horizontalHeaderItem(3);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "Checksums - Matched (Copied File)", nullptr));
        comboBox_verifyTableViews05_2->setItemText(0, QCoreApplication::translate("MainWindow", "Matched Files / Matched Checksums", nullptr));
        comboBox_verifyTableViews05_2->setItemText(1, QCoreApplication::translate("MainWindow", "Unmatched Files / Matched Checksums", nullptr));
        comboBox_verifyTableViews05_2->setItemText(2, QCoreApplication::translate("MainWindow", "Unmatched Files / Unmatched Checksums", nullptr));

        pushButton_return05_2->setText(QCoreApplication::translate("MainWindow", "Return To Previous Screen", nullptr));
        toolButton_saveTable05_2->setText(QCoreApplication::translate("MainWindow", "Save Table ", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_unmatchedFiles05->horizontalHeaderItem(0);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "Files - Unmatched (Original File)", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_unmatchedFiles05->horizontalHeaderItem(1);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "Checksums - Unmatched (Original File)", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_unmatchedFiles05->horizontalHeaderItem(2);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "Files - Unmatched (Copied File)", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_unmatchedFiles05->horizontalHeaderItem(3);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "Checksums - Unmatched (Copied File)", nullptr));
        comboBox_verifyTableViews05_3->setItemText(0, QCoreApplication::translate("MainWindow", "Matched Files / Matched Checksums", nullptr));
        comboBox_verifyTableViews05_3->setItemText(1, QCoreApplication::translate("MainWindow", "Unmatched Files / Matched Checksums", nullptr));
        comboBox_verifyTableViews05_3->setItemText(2, QCoreApplication::translate("MainWindow", "Unmatched Files / Unmatched Checksums", nullptr));

        pushButton_return05_3->setText(QCoreApplication::translate("MainWindow", "Return To Previous Screen", nullptr));
        toolButton_saveTable05_3->setText(QCoreApplication::translate("MainWindow", "Save Table ", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_newFiles05->horizontalHeaderItem(0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "New Files - Unmatched", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_newFiles05->horizontalHeaderItem(1);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "New Checksums - Unmatched", nullptr));
        comboBox_verifyTableViews05_4->setItemText(0, QCoreApplication::translate("MainWindow", "Matched Files / Matched Checksums", nullptr));
        comboBox_verifyTableViews05_4->setItemText(1, QCoreApplication::translate("MainWindow", "Unmatched Files / Matched Checksums", nullptr));
        comboBox_verifyTableViews05_4->setItemText(2, QCoreApplication::translate("MainWindow", "Unmatched Files / Unmatched Checksums", nullptr));

        pushButton_return05_4->setText(QCoreApplication::translate("MainWindow", "Return To Previous Screen", nullptr));
        toolButton_saveTable05_4->setText(QCoreApplication::translate("MainWindow", "Save Table ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab05), QCoreApplication::translate("MainWindow", "Copy / Compare", nullptr));
        label_userText01->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Type Below:</p></body></html>", nullptr));
        label_checksum04->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Checksum Value:</p></body></html>", nullptr));
        pushButton_compare04->setText(QCoreApplication::translate("MainWindow", "Compare", nullptr));
        comboBox_hashType04->setItemText(0, QCoreApplication::translate("MainWindow", "MD5", nullptr));
        comboBox_hashType04->setItemText(1, QCoreApplication::translate("MainWindow", "SHA1", nullptr));
        comboBox_hashType04->setItemText(2, QCoreApplication::translate("MainWindow", "SHA256", nullptr));
        comboBox_hashType04->setItemText(3, QCoreApplication::translate("MainWindow", "SHA512", nullptr));

        checkBox_toUpper04->setText(QCoreApplication::translate("MainWindow", "Change\n"
"Case", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab04), QCoreApplication::translate("MainWindow", "Checksum Text", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
