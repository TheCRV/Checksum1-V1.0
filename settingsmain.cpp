#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "settingsmain.h"
#include "ui_settingsmain.h"



settingsMain::settingsMain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingsMain)
{
    ui->setupUi(this);
    //ui->checkBox_dontFollowSymLinks01->setChecked(true);
    //ui->checkBox_allowAutoThreads01->setChecked(true);
    //ui->checkBox_copyAllFolders01->setChecked(true);
    //ui->checkBox_compareByRelativeName05->setChecked(true);
    //ui->spinBox_numberOfThreads01->setValue(4);
    QSettings::setDefaultFormat(QSettings::IniFormat);

    //m_mainButtons01.addButton(ui->pushButton_fileChecksumSettings01, 1);
    m_mainButtons01.addButton(ui->pushButton_checksumFileSettings01, 2);
    m_mainButtons01.addButton(ui->pushButton_copyCompareSettings01, 3);

    m_verifyBy01.addButton(ui->checkBox_verifyByFullName01, 1);
    m_verifyBy01.addButton(ui->checkBox_verifyByRelativeName01, 2);
    m_verifyBy01.addButton(ui->checkBox_verifyByFileName01, 3);

    m_compareBy05.addButton(ui->checkBox_compareByFullName05, 1);
    m_compareBy05.addButton(ui->checkBox_compareByRelativeName05, 2);
    m_compareBy05.addButton(ui->checkBox_compareByFileName05, 3);

    ui->checkBox_showHidden01->setObjectName("10");
    ui->checkBox_showSystem01->setObjectName("11");
    ui->checkBox_hideSymLinks01->setObjectName("12");
    ui->checkBox_dontFollowSymLinks01->setObjectName("13");
    ui->checkBox_dontUseIcons01->setObjectName("14");
    ui->checkBox_dontWatchFS01->setObjectName("15");
    ui->checkBox_listAllFiles01->setObjectName("16");
    ui->checkBox_allowAutoThreads01->setObjectName("17");
    ui->spinBox_numberOfThreads01->setObjectName("18");
    //ui->checkBox_copyAllFolders01->setObjectName("19");
    ui->checkBox_verifyByFullName01->setObjectName("20");
    ui->checkBox_verifyByRelativeName01->setObjectName("21");
    ui->checkBox_verifyByFileName01->setObjectName("22");
    ui->checkBox_compareByFullName05->setObjectName("23");
    ui->checkBox_compareByRelativeName05->setObjectName("24");
    ui->checkBox_compareByFileName05->setObjectName("25");
    //ui->checkBox_multiThreadedFileCopy05->setObjectName("26");

    //on_checkBox_allowAutoThreads01_clicked();
    ui->pushButton_checksumFileSettings01->setChecked(true);
    ui->stackedWidget01->setCurrentIndex(1);

    m_settingsTimer01.start(350);

    connect(&m_settingsTimer01, &QTimer::timeout, this, &settingsMain::on_ok01_clicked);

    set_Default_Settings01();
}


settingsMain::~settingsMain()
{
    delete ui;
}


void settingsMain::on_StartSettings01()
{
    set_temp_Settings01();
    restore_temp_Settings01();
    on_checkBox_allowAutoThreads01_clicked();
    on_apply01_clicked();
}


void settingsMain::set_Default_Settings01()
{
    ui->checkBox_showHidden01->setChecked(false);
    ui->checkBox_showSystem01->setChecked(false);
    ui->checkBox_hideSymLinks01->setChecked(false);
    ui->checkBox_dontFollowSymLinks01->setChecked(true);
    ui->checkBox_dontUseIcons01->setChecked(false);
    ui->checkBox_dontWatchFS01->setChecked(false);
    ui->checkBox_listAllFiles01->setChecked(false);
    ui->checkBox_allowAutoThreads01->setChecked(true);
    ui->spinBox_numberOfThreads01->setValue(4);
    //ui->checkBox_copyAllFolders01->setChecked(true);
    ui->checkBox_verifyByFullName01->setChecked(true);
    ui->checkBox_verifyByRelativeName01->setChecked(false);
    ui->checkBox_verifyByFileName01->setChecked(false);
    ui->checkBox_compareByFullName05->setChecked(false);
    ui->checkBox_compareByRelativeName05->setChecked(true);
    ui->checkBox_compareByFileName05->setChecked(false);
    //ui->checkBox_multiThreadedFileCopy05->setChecked(false);

    on_checkBox_allowAutoThreads01_clicked();
}


void settingsMain::set_temp_Settings01()
{
    m_tempSettings01.insert(10, ui->checkBox_showHidden01->isChecked());
    m_tempSettings01.insert(11, ui->checkBox_showSystem01->isChecked());
    m_tempSettings01.insert(12, ui->checkBox_hideSymLinks01->isChecked());
    m_tempSettings01.insert(13, ui->checkBox_dontFollowSymLinks01->isChecked());
    m_tempSettings01.insert(14, ui->checkBox_dontUseIcons01->isChecked());
    m_tempSettings01.insert(15, ui->checkBox_dontWatchFS01->isChecked());
    m_tempSettings01.insert(16, ui->checkBox_listAllFiles01->isChecked());
    m_tempSettings01.insert(17, ui->checkBox_allowAutoThreads01->isChecked());
    m_tempSettings01.insert(18, ui->spinBox_numberOfThreads01->value());
    //m_tempSettings01.insert(19, ui->checkBox_copyAllFolders01->isChecked());
    m_tempSettings01.insert(20, ui->checkBox_verifyByFullName01->isChecked());
    m_tempSettings01.insert(21, ui->checkBox_verifyByRelativeName01->isChecked());
    m_tempSettings01.insert(22, ui->checkBox_verifyByFileName01->isChecked());
    m_tempSettings01.insert(23, ui->checkBox_compareByFullName05->isChecked());
    m_tempSettings01.insert(24, ui->checkBox_compareByRelativeName05->isChecked());
    m_tempSettings01.insert(25, ui->checkBox_compareByFileName05->isChecked());
    //m_tempSettings01.insert(26, ui->checkBox_multiThreadedFileCopy05->isChecked());
}


void settingsMain::restore_temp_Settings01()
{
    ui->checkBox_showHidden01->setChecked(m_tempSettings01.value(10).toBool());
    ui->checkBox_showSystem01->setChecked(m_tempSettings01.value(11).toBool());
    ui->checkBox_hideSymLinks01->setChecked(m_tempSettings01.value(12).toBool());
    ui->checkBox_dontFollowSymLinks01->setChecked(m_tempSettings01.value(13).toBool());
    ui->checkBox_dontUseIcons01->setChecked(m_tempSettings01.value(14).toBool());
    ui->checkBox_dontWatchFS01->setChecked(m_tempSettings01.value(15).toBool());
    ui->checkBox_listAllFiles01->setChecked(m_tempSettings01.value(16).toBool());
    ui->checkBox_allowAutoThreads01->setChecked(m_tempSettings01.value(17).toBool());
    ui->spinBox_numberOfThreads01->setValue(m_tempSettings01.value(18).toInt());
    //ui->checkBox_copyAllFolders01->setChecked(m_tempSettings01.value(19).toBool());
    ui->checkBox_verifyByFullName01->setChecked(m_tempSettings01.value(20).toBool());
    ui->checkBox_verifyByRelativeName01->setChecked(m_tempSettings01.value(21).toBool());
    ui->checkBox_verifyByFileName01->setChecked(m_tempSettings01.value(22).toBool());
    ui->checkBox_compareByFullName05->setChecked(m_tempSettings01.value(23).toBool());
    ui->checkBox_compareByRelativeName05->setChecked(m_tempSettings01.value(24).toBool());
    ui->checkBox_compareByFileName05->setChecked(m_tempSettings01.value(25).toBool());
    //ui->checkBox_multiThreadedFileCopy05->setChecked(m_tempSettings01.value(26).toBool());

/*
 * This was working correctly at one time, however, I could not find a way to "number" the checkboxes
 * so that they would be checked / unchecked properly in the while loop. When I added additional
 * checkboxes, the code below stopped working correctly.

    m_listAllCheckboxes01 = ui->frame_04->findChildren<QCheckBox *>();
    QMap<int, bool>::const_iterator im = m_tempSettings01.constBegin();
    int i = 0;
    while (im != m_tempSettings01.constEnd())
    {
        qDebug() << i;
        qDebug() << m_listAllCheckboxes01.at(i);
        if (im.value())
            m_listAllCheckboxes01.at(i)->setChecked(true);
        else
            m_listAllCheckboxes01.at(i)->setChecked(false);
        im++;
        i++;
    }
*/
}


void settingsMain::on_ok01_clicked()
{
    set_temp_Settings01();
    on_apply01_clicked();
    hide();
    m_settingsTimer01.stop();
}


void settingsMain::on_cancel01_clicked()
{
    restore_temp_Settings01();
    hide();
}


void settingsMain::on_apply01_clicked()
{
    m_resetView02 = false;
    m_qdirFilters01 = QDir::AllEntries | QDir::NoDotAndDotDot;
    m_qdirFilters02 = QDir::Files | QDir::NoDotAndDotDot;
    m_beforeFSOptions01 = m_qfsOptions01;

    // Below are the "Create Checksum File" settings options.
    if(ui->checkBox_showHidden01->isChecked())
    {
        m_qdirFilters01.setFlag(QDir::Hidden);
        m_qdirFilters02.setFlag(QDir::Hidden);
    }

    if(ui->checkBox_showSystem01->isChecked())
    {
        m_qdirFilters01.setFlag(QDir::System);
        m_qdirFilters02.setFlag(QDir::System);
    }

    if(ui->checkBox_hideSymLinks01->isChecked())
    {
        m_qdirFilters01.setFlag(QDir::NoSymLinks);
        m_qdirFilters02.setFlag(QDir::NoSymLinks);
    }

    if(ui->checkBox_dontFollowSymLinks01->isChecked())
    {
        m_qfsOptions01.setFlag(QFileSystemModel::DontResolveSymlinks);
        m_qdirIteratorFlags01.setFlag(QDirIterator::FollowSymlinks, false);
    }
    else
    {
        m_qfsOptions01.setFlag(QFileSystemModel::DontResolveSymlinks, false);
        m_qdirIteratorFlags01.setFlag(QDirIterator::FollowSymlinks);
    }

    if(ui->checkBox_dontUseIcons01->isChecked())
    {
        m_qfsOptions01.setFlag(QFileSystemModel::DontUseCustomDirectoryIcons);
    }
    else
    {
        m_qfsOptions01.setFlag(QFileSystemModel::DontUseCustomDirectoryIcons, false);
    }

    if(ui->checkBox_dontWatchFS01->isChecked())
    {
        m_qfsOptions01.setFlag(QFileSystemModel::DontWatchForChanges);
    }
    else
    {
        m_qfsOptions01.setFlag(QFileSystemModel::DontWatchForChanges, false);
    }

    if(ui->checkBox_listAllFiles01->isChecked())
        emit listAllFiles(true);
    else
        emit listAllFiles(false);

    if(ui->checkBox_allowAutoThreads01->isChecked())
        emit defaultNumberOfThreads();
    else
        emit numberOfThreads(ui->spinBox_numberOfThreads01->value());

    //if(ui->checkBox_copyAllFolders01->isChecked())
        //emit copyAllFolders(true);
    //else
        //emit copyAllFolders(false);

    emit verifyOptions(m_verifyBy01.checkedId());
    emit compareOptions(m_compareBy05.checkedId());
    //emit multiThreadedFileCopy(ui->checkBox_multiThreadedFileCopy05->isChecked());

    if(m_beforeFSOptions01 != m_qfsOptions01)
        m_resetView02 = true;
    else
        m_resetView02 = false;

    set_temp_Settings01();
    emit show_FSChanges(m_qdirFilters01, m_qdirFilters02, m_qfsOptions01, m_qdirIteratorFlags01, m_resetView02);
}


void settingsMain::on_saveSettings01_clicked()
{
    m_saveFile01 = QFileDialog::getSaveFileName(this, "Save File", QDir::currentPath(), "*.ini");
    if(m_saveFile01 == "")
        return;

    QSettings saveSettings01(m_saveFile01, QSettings::IniFormat);
    QSettings::setDefaultFormat(QSettings::IniFormat);
    saveSettings01.setDefaultFormat(QSettings::IniFormat);
    saveSettings01.setValue("showHidden01", ui->checkBox_showHidden01->isChecked());
    saveSettings01.setValue("showSystem01", ui->checkBox_showSystem01->isChecked());
    saveSettings01.setValue("hideSymLinks01", ui->checkBox_hideSymLinks01->isChecked());
    saveSettings01.setValue("dontFollowSymLinks01", ui->checkBox_dontFollowSymLinks01->isChecked());
    saveSettings01.setValue("dontUseIcons01", ui->checkBox_dontUseIcons01->isChecked());
    saveSettings01.setValue("dontWatchFS01", ui->checkBox_dontWatchFS01->isChecked());
    saveSettings01.setValue("listAllFiles01", ui->checkBox_listAllFiles01->isChecked());
    saveSettings01.setValue("allowAutoThreads01", ui->checkBox_allowAutoThreads01->isChecked());
    saveSettings01.setValue("numberOfThreads01", ui->spinBox_numberOfThreads01->value());
    //saveSettings01.setValue("copyAllFolders01", ui->checkBox_copyAllFolders01->isChecked());
    saveSettings01.setValue("verifyByFullName01", ui->checkBox_verifyByFullName01->isChecked());
    saveSettings01.setValue("verifyByRelativeName01", ui->checkBox_verifyByRelativeName01->isChecked());
    saveSettings01.setValue("verifyByFileName01", ui->checkBox_verifyByFileName01->isChecked());
    saveSettings01.setValue("compareByFullName05", ui->checkBox_compareByFullName05->isChecked());
    saveSettings01.setValue("compareByRelativeName05", ui->checkBox_compareByRelativeName05->isChecked());
    saveSettings01.setValue("compareByFileName05", ui->checkBox_compareByFileName05->isChecked());
    //saveSettings01.setValue("multiThreadedFileCopy05", ui->checkBox_multiThreadedFileCopy05->isChecked());
}


void settingsMain::on_loadSettings01_clicked()
{
    m_restoreFile01 = QFileDialog::getOpenFileName(this, "Open File", QDir::currentPath(), "*.ini");
    if(m_restoreFile01 == "")
        return;

    QSettings loadSettings01(m_restoreFile01, QSettings::IniFormat);
    ui->checkBox_showHidden01->setChecked(loadSettings01.value("showHidden01").toBool());
    ui->checkBox_showSystem01->setChecked(loadSettings01.value("showSystem01").toBool());
    ui->checkBox_hideSymLinks01->setChecked(loadSettings01.value("hideSymLinks01").toBool());
    ui->checkBox_dontFollowSymLinks01->setChecked(loadSettings01.value("dontFollowSymLinks01").toBool());
    ui->checkBox_dontUseIcons01->setChecked(loadSettings01.value("dontUseIcons01").toBool());
    ui->checkBox_dontWatchFS01->setChecked(loadSettings01.value("dontWatchFS01").toBool());
    ui->checkBox_listAllFiles01->setChecked(loadSettings01.value("listAllFiles01").toBool());
    ui->checkBox_allowAutoThreads01->setChecked(loadSettings01.value("allowAutoThreads01").toBool());
    ui->spinBox_numberOfThreads01->setValue(loadSettings01.value("numberOfThreads01").toInt());
    //ui->checkBox_copyAllFolders01->setChecked(loadSettings01.value("copyAllFolders01").toBool());
    ui->checkBox_verifyByFullName01->setChecked(loadSettings01.value("verifyByFullName01").toBool());
    ui->checkBox_verifyByRelativeName01->setChecked(loadSettings01.value("verifyByRelativeName01").toBool());
    ui->checkBox_verifyByFileName01->setChecked(loadSettings01.value("verifyByFileName01").toBool());
    ui->checkBox_compareByFullName05->setChecked(loadSettings01.value("compareByFullName05").toBool());
    ui->checkBox_compareByRelativeName05->setChecked(loadSettings01.value("compareByRelativeName05").toBool());
    ui->checkBox_compareByFileName05->setChecked(loadSettings01.value("compareByFileName05").toBool());
    //ui->checkBox_multiThreadedFileCopy05->setChecked(loadSettings01.value("multiThreadedFileCopy05").toBool());

    on_checkBox_allowAutoThreads01_clicked();
}


void settingsMain::on_restoreDefaults01_clicked()
{
    set_Default_Settings01();
}


void settingsMain::on_settingsMain_rejected()
{
    restore_temp_Settings01();
}


void settingsMain::on_checkBox_allowAutoThreads01_clicked()
{
    if(ui->checkBox_allowAutoThreads01->isChecked())
    {
        ui->spinBox_numberOfThreads01->setDisabled(true);
        ui->label_numThreads01->setDisabled(true);
    }
    else
    {
        ui->spinBox_numberOfThreads01->setEnabled(true);
        ui->label_numThreads01->setEnabled(true);
    }
}


void settingsMain::on_pushButton_checksumFileSettings01_clicked()
{
    ui->stackedWidget01->setCurrentIndex(1);
}


void settingsMain::on_pushButton_copyCompareSettings01_clicked()
{
    ui->stackedWidget01->setCurrentIndex(2);
}
