#ifndef DIALOG_SETTINGSMAIN_H
#define DIALOG_SETTINGSMAIN_H

#include <QDialog>
#include <QDir>
#include <QMap>
#include <QString>
#include <QSettings>
#include <QCoreApplication>
#include <QFileSystemModel>
#include <QMapIterator>
#include <QCheckBox>
#include <QButtonGroup>
#include <QTimer>



class MainWindow;

namespace Ui {
class settingsMain;
}

class settingsMain : public QDialog
{
    Q_OBJECT


public:
    explicit settingsMain(QWidget *parent = nullptr);
    ~settingsMain();
    void on_StartSettings01();


signals:
    void show_FSChanges(QDir::Filters, QDir::Filters, QFileSystemModel::Options, QDirIterator::IteratorFlags, bool);
    void showHidden(int fsOptions);
    void showSystem(int fsOptions);
    void hideSymLinks(int fsOptions);
    void dontFollowSymLinks(int fsOptions);
    void listAllFiles(bool listAllFiles);
    void defaultNumberOfThreads();
    void numberOfThreads(int);
    void verifyFilePaths(int);
    //void copyAllFolders(bool copyAllFolders);
    void verifyOptions(int);
    void compareOptions(int);
    void multiThreadedFileCopy(bool);
    //void verifyByFullPath(int);
    //void verifyByRelativePath(int);
    //void verifyByFileName(int);
    //void compareByFullPath(int);
    //void compareByRelativePath(int);
    //void compareByFileName(int);


private:
    void set_Default_Settings01();

    Ui::settingsMain *ui;
    QButtonGroup m_mainButtons01;
    QTimer m_settingsTimer01;
    QDir::Filters m_qdirFilters01;
    QDir::Filters m_qdirFilters02;
    QDirIterator::IteratorFlags m_qdirIteratorFlags01 = QDirIterator::Subdirectories;
    QFileSystemModel::Options m_qfsOptions01;
    QFileSystemModel::Options m_beforeFSOptions01;
    bool m_resetView02 = false;
    QList<QCheckBox *> m_listAllCheckboxes01;
    QMap<int, QVariant> m_tempSettings01;
    QString m_saveFile01 = "";
    QString m_restoreFile01 = "";
    QString m_orgName01 = "TheCRV";
    QString m_appName01 = "Checksum1";
    QButtonGroup m_verifyBy01;
    QButtonGroup m_compareBy05;
    short m_compareOption05 = 0;



private slots:
    void set_temp_Settings01();
    void restore_temp_Settings01();
    void on_ok01_clicked();
    void on_cancel01_clicked();
    void on_apply01_clicked();
    void on_saveSettings01_clicked();
    void on_loadSettings01_clicked();
    void on_restoreDefaults01_clicked();
    void on_checkBox_allowAutoThreads01_clicked();
    //void on_pushButton_fileChecksumSettings01_clicked();
    void on_pushButton_checksumFileSettings01_clicked();
    void on_settingsMain_rejected();
    void on_pushButton_copyCompareSettings01_clicked();
};

#endif // DIALOG_SETTINGSMAIN_H
