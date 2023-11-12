#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include "openssl/evp.h"
#include "checkableproxymodel.h"
#include "opensslchecksum.h"
#include "settingsmain.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <functional>
#include <list>
#include <Qt>
#include <QLabel>
#include <QString>
#include <QMessageBox>
#include <QSizePolicy>
#include <QFileDialog>
#include <QComboBox>
#include <QDebug>
#include <QFileSystemModel>
#include <QDirIterator>
#include <QTreeView>
#include <QFile>
#include <QDir>
#include <QModelIndex>
#include <QSplitter>
#include <QTimer>
#include <QtGlobal>
#include <QtConcurrent>
#include <QThread>
#include <QFuture>
#include <QFutureWatcher>
#include <QEventLoop>
#include <QSettings>
#include <QRegExp>
#include <QListWidget>
#include <QClipboard>
#include <QTableWidget>
#include <QMenu>
#include <QTextCursor>
#include <QInputDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool cancelChecksumBool01 = false;


public slots:
    void show_FSChanges01(QDir::Filters, QDir::Filters, QFileSystemModel::Options, QDirIterator::IteratorFlags, bool);
    void defaultNumberOfThreads01();
    void numberOfThreads01(int);
    void resetChecksum01();


signals:
    void fileToOpenSSL(QString);
    void cancelVerifySignal01();
    void resetProgressBar04();
    void progressBarUpdate04(int);
    void firstFileCopy05(const QString&);
    void subsequentFileCopy05(const QString&, const QString&);
    void progressBarUpdate05(int);
    void cancelChecksum01(bool);
    void resetProgressBar05();
    void cancelCompare05();
    void fileToCopyIsPresentSignal05(QString);


private slots:
    void on_tabWidget_currentChanged();
    void expandColumn01();
    void repaint_treeView01();
    void on_progressBar01_valueChanged(int value);
    void on_pushButton_browse01_clicked();
    void on_pushButton_beginChecksum01_clicked();
    void displayChecksum01();
    void on_pushButton_Compare01_clicked();
    void on_pushButton_resetView01_clicked();
    void showAllChecksumFiles(bool);
    void on_pushButton_browseDirs01_clicked();
    void on_pushButton_browseFiles01_clicked();
    void on_pushButton_add01_clicked();
    void on_pushButton_settings01_clicked();
    void on_radioButton_useTree01_clicked();
    void on_radioButton_useBrowse01_clicked();
    void on_pushButton_prepareChecksum00_clicked();
    void on_pushButton_prepareChecksum01_clicked();
    void setChecksumDisplay01();
    void on_pushButton_createChecksum01_clicked();
    void writeChecksumFile01();
    void on_pushButton_cancelChecksum01_clicked();
    void on_pushButton_return01_clicked();
    void on_pushButton_browse03_clicked();
    void on_pushButton_delete01_clicked();
    void on_checkBox_OnlyChecksums01_stateChanged(int arg1);
    void on_actionSettings_triggered();
    void on_pushButton_browseDirs02_clicked();
    void on_pushButton_deleteDirs02_clicked();
    void verifyOptionsSlot01(int arg);
    void on_pushButton_prepareVerify01_clicked();
    void on_lineEdit_fileText01_returnPressed();
    void on_pushButton_Verify01_clicked();
    void on_pushButton_cancelVerify01_clicked();
    void cancelVerifySlot01();
    void resetProgressBar();
    void updateProgressBar(int value);
    void on_pushButton_viewResults01_clicked();
    void on_pushButton_returnToVerify01_clicked();
    void on_toolButton_saveTable01_triggered(QAction *arg1);
    void on_comboBox_verifyTableViews01_currentIndexChanged(int index);
    void on_pushButton_clearAll01_clicked();
    void on_plainTextEdit_userText01_textChanged();
    void on_comboBox_hashType04_currentIndexChanged(int index);
    void on_checkBox_toUpper04_stateChanged(int arg1);
    void on_pushButton_compare04_released();
    void on_pushButton_resetView05_released();
    void expandColumn02();
    void repaint_treeView02();
    void on_pushButton_browseDirs05_clicked();
    void on_pushButton_settings05_clicked();
    void on_radioButton_useTree05_clicked();
    void on_radioButton_useBrowse05_clicked();
    void on_pushButton_browseFiles05_clicked();
    void on_pushButton_add05_clicked();
    void on_lineEdit_fileText05_returnPressed();
    void on_pushButton_delete05_clicked();
    void on_pushButton_copy_compare05_01_clicked();
    void on_pushButton_copy_compare05_02_clicked();
    void on_pushButton_return05_clicked();
    void on_pushButton_startCopy05_clicked();
    void fileToCopyIsPresentSlot05(QString);
    void updateProgressBar05(int);
    void updateProgressBarForThreadedFileCopy05(int);
    void on_pushButton_cancelChecksum00_released();
    void resetProgressBarSlot05();
    void on_pushButton_viewResults05_released();
    void on_comboBox_verifyTableViews05_1_currentIndexChanged(int index);
    void on_pushButton_return05_1_released();
    void on_toolButton_saveTable05_1_triggered(QAction *arg1);
    void compareOptionsSlot05(int arg);
    void on_pushButton_cancelCopy05_released();

private:
    QString m_hashType01;
    QVector<QString> m_fileToHash01;
    QTimer fsQtimer01;
    QFuture<QVector<QString>> m_futureFileHash01;
    QFutureWatcher<QVector<QString>> m_watcher01;
    QString m_checksum01_Tab1;
    QString m_checksum01Comp_Tab1;
    QString m_fileName01 = "";
    QDir::Filters m_qdirFilters01 = QDir::AllEntries | QDir::NoDotAndDotDot;
    QFileSystemModel::Options m_qfsOptions01;
    bool m_resetView01 = false;
    QString m_pathName01;
    QVector<QString> m_browsedDirs01;
    QVector<QString> m_browsedFiles01;
    QModelIndexList m_selectedFiles01;
    QModelIndexList m_selectedDirectories01;
    QVector<QString> m_selectedFilePaths01;
    QVector<QString> m_selectedFileNames01;
    int m_fileCounter01 = 0;
    int m_sizeOfFilesVector01 = 0;
    long long m_sizeOfFiles01 = 0;
    QDir::Filters m_qdirFilters02 = QDir::Files | QDir::NoDotAndDotDot;
    QDirIterator::IteratorFlags m_qdirIteratorFlags01 = QDirIterator::Subdirectories;
    QFuture<void> m_prepareForChecksum01;
    QFutureWatcher<void> m_watcher02;
    bool m_listAllFiles01 = false;
    bool m_cancelChecksumFile01 = false;
    QFuture<QVector<QString>> m_futureFileHash03;
    QFutureWatcher<QVector<QString>> m_watcher03;
    QString m_checksumFileName01 = "";
    QVector<QString> m_finalChecksum01;
    int m_numberOfThreads01;
    QString m_numFilesString01 = "";
    QString m_sizeOfFilesStr01 = "";
    QString m_numberOfThreadsStr01 = "";
    QFuture<void> m_setVerifyFuture01;
    QFutureWatcher<void> m_setVerifyWatcher01;
    int m_hashTypeVerify01 = 0;
    QString m_hashTypeVerifyStr01;
    QString m_numFilesVerifyString01 = "";
    QString m_numFilesVerifyString02 = "";
    QString m_verifyFileSizeString01 = "";
    QString m_numNewFilesVerify01;
    QStringList m_verifyList01;
    QStringList m_verifyFileNames01;
    QStringList m_verifyFilePaths01;
    QStringList m_verifyRelativeFilePaths01;
    QStringList m_verifyFullFileNames01;
    QStringList m_verifyChecksums01;
    QVector<QString> m_verifyFilePathVector;
    QVector<QString> m_dirsToVerify01;
    long long m_verifyFileSize01 = 0;
    int m_verifySettings01 = 0;
    int m_numberOfFilesToVerify = 0;
    int m_numberOfFilesToVerifyOnDisk = 0;
    bool m_verifySpecificDirs01 = false;
    QFuture<QVector<QString>> m_futureVerifyHash;
    QFutureWatcher<QVector<QString>> m_verifyHashWatcher;
    QVector<QString> m_diskVerifyHashes;
    QFuture<void> m_verifyFuture01;
    QFutureWatcher<void> m_watchVerifyFuture01;
    int m_row1 = 0;
    int m_row2 = 0;
    int m_row3 = 0;
    int m_row4 = 0;
    int m_maxProgressBar = 0;
    long int m_currentMatchProgress = 0;
    int m_saveTableCaller = 0;
    short m_verifyOptions01 = 0;
    QString m_file1 = "";
    QString m_file2 = "";

    QVector<QString> m_textChecksumVector01;
    QString m_userText;
    QString m_hashType04;
    QString m_textHash04;
    QString m_calcHash04;
    QString m_userHash04;

    QVector<QString> m_browsedDirs05;
    QVector<QString> m_browsedFiles05;
    QModelIndexList m_selectedFiles05;
    QModelIndexList m_selectedDirectories05;
    QVector<QString> m_selectedFilePaths05_01;
    QVector<QString> m_selectedFileNames05_01;
    QVector<QString> m_selectedFilePaths05_02;
    QVector<QString> m_selectedFileNames05_02;
    QVector<QString> m_dirs05;
    QVector<QString> m_selectedDirs05;
    QStringList m_dirsToCopy05;
    QStringList m_dirsToCopySorted05;
    QStringList m_newDirs05;
    QStringList m_newRelativeDirs05;
    QTimer fsQtimer05;
    QString m_pathName05;
    QString m_appendToDest05 = "";
    QVector<int> m_numberToAppendToDir05;
    int m_filesToCopySameAsDest05;
    int m_filesToCopyPresent05;
    QVector<QString> m_filesToCopySameAtDest05;
    QFuture<void> m_prepareForCopy05;
    QFutureWatcher<void> m_watcherPrepareCopy05;
    QStringList m_destination05;
    QStringList m_selectedDirPaths05;
    QFileInfoList m_fileInfoList05;
    QVector<QString> m_relativeSource05;
    QFileInfo m_copyFileInfo05;
    QString m_copyDirectory05;
    QDir m_copyDir05;
    QString m_copyRoot05;
    QString m_copyRelDir05;
    QDir m_copyToDir05_01;
    QDir m_copyToDir05_02;
    QFile m_destinationFile05;
    int m_numFilesCopied05 = 0;
    bool m_filesAreCopied01;
    int m_percentCopied05 = 0;
    long double m_bytesCopied05 = 0;
    QFileInfo m_tempFilename05;
    QTextCursor m_showCopyCursor05;
    QFuture<QVector<QString>> m_multiCopyFilesFuture05;
    QFutureWatcher<QVector<QString>> m_multiCopyFilesFutureWatcher05;
    QFuture<void> m_copyFilesFuture05;
    QFutureWatcher<void> m_copyFilesFutureWatcher05;
    bool m_multiThreadedCopy05;
    int m_copyFileNameSize05 = 0;
    int m_hashTypeVerifyInt05 = 0;
    QString m_hashTypeVerifyStr05;
    QVector<QString> m_originalFiles05;
    QVector<QString> m_copiedFiles05;
    QStringList m_compareFullFilePaths05;
    QStringList m_compareFilePaths05;
    QStringList m_compareFileNames05;
    QStringList m_compareChecksums05;
    QFuture<QVector<QString>> m_originalFilesChecksumFuture05;
    QFuture<QVector<QString>> m_copiedFilesChecksumFuture05;
    QFutureWatcher<QVector<QString>> m_originalFilesChecksumWatcher05;
    QFutureWatcher<QVector<QString>> m_copiedFilesChecksumWatcher05;
    QVector<QString> m_originalFilesFutureResults05;
    QVector<QString> m_copiedFilesFutureResults05;
    QStringList m_originalFilesList05;
    QStringList m_copiedFilesList05;
    QFuture<void> m_compareFuture05;
    QFutureWatcher<void> m_compareFutureWatcher05;
    short m_compareOptions05 = 0;

    Ui::MainWindow *ui;
    QFileSystemModel *m_fsModel01;
    CheckableProxyModel *m_checkProxy;
    settingsMain *m_settings01;
    opensslchecksum *m_opensslChecksum01;
    QAction *m_saveAllTables01;
    QAction *m_saveMatchedTable01;
    QAction *m_savePartialTable01;
    QAction *m_saveUnmatchedTable01;
    QAction *m_saveNewTable01;
    QList<QAction *> m_saveTables01;
    QFileSystemModel *m_fsModel02;
    CheckableProxyModel *m_checkProxy02;
    QAction *m_saveAllTables05;
    QAction *m_saveMatchedTable05;
    QAction *m_savePartialTable05;
    QAction *m_saveUnmatchedTable05;
    QList<QAction *> m_saveTables05;

    QVector<QString> ssl_fileHash01(const QString &);
    void newView01();
    void checkTreeOrBrowse01();
    void treeChecksum01();
    void browseChecksum01();
    void dirIterator01(QDirIterator, QDirIterator);
    void prepareChecksumDisplay01();
    bool verifyChecksumType01();
    void prepareVerifyDisplay01();
    void setVerifyDisplay01();
    void getFullFileNamesAndChecksums01();
    void getFilePaths01();
    void getRelativeFilePaths01();
    void getVerifyData01();
    void setVerifyTables();
    void verifyTablesAreFinished();

    void newView02();
    void checkTreeOrBrowse02();
    void prepareCopyDisplay02();
    void treeCopy02();
    void browseCopy02();
    void setCopyDisplay02();
    bool checkIfFoldersExist05();
    bool createAllFolders05(QString fromDir, QString toDir);
    void problemCreatingFolders05(QString);
    void prepareToCopyFiles05();
    void copyFiles05();
    void copyIsFinished05();
    void beginFirstChecksum05();
    void firstChecksumCompleted05();
    void beginSecondChecksum05();
    void secondChecksumCompleted05();
    void setupToCompare05();
    void compareAndSetTables05();
    void compareAndSetTablesFinished05();


    struct TextFileChecksums
    {
        TextFileChecksums()
        {}
        ~TextFileChecksums()
        {}
        QString m_fullFilePath01 = "";
        QString m_filePath01 = "";
        QString m_relativeFilePath01 = "";
        QString m_fileName01 = "";
        QString m_checksum01 = "";
        bool m_isMatched01 = false;
    };
    std::list<TextFileChecksums> m_textFileChecksumsList;

    struct DiskFileChecksums
    {
        DiskFileChecksums()
        {}
        ~DiskFileChecksums()
        {}
        QString m_fullFilePath02 = "";
        QString m_filePath02 = "";
        QString m_relativeFilePath02 = "";
        QString m_fileName02 = "";
        QString m_checksum02 = "";
        bool m_isMatched02 = false;
    };
    std::list<DiskFileChecksums> m_diskFileChecksumsList;


    struct OriginalFileChecksums
    {
        OriginalFileChecksums()
        {}
        ~OriginalFileChecksums()
        {}
        QString m_fullFilePath01 = "";
        QString m_filePath01 = "";
        QString m_relativeFilePath01 = "";
        QString m_fileName01 = "";
        QString m_checksum01 = "";
        bool m_isMatched01 = false;
    };
    std::list<OriginalFileChecksums> m_originalFileChecksumsList;

    struct CopiedFileChecksums
    {
        CopiedFileChecksums()
        {}
        ~CopiedFileChecksums()
        {}
        QString m_fullFilePath02 = "";
        QString m_filePath02 = "";
        QString m_relativeFilePath02 = "";
        QString m_fileName02 = "";
        QString m_checksum02 = "";
        bool m_isMatched02 = false;
    };
    std::list<CopiedFileChecksums> m_copiedFileChecksumsList;
};

#endif // MAINWINDOW_H
