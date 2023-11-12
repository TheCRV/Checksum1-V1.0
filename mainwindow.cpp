#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_fsModel01 = new QFileSystemModel(this);
    m_fsModel01->setReadOnly(true);

    m_checkProxy = new CheckableProxyModel(this);
    m_checkProxy->setDefaultCheckState(false);

    m_fsModel02 = new QFileSystemModel(this);
    m_fsModel02->setReadOnly(true);

    m_checkProxy02 = new CheckableProxyModel(this);
    m_checkProxy02->setDefaultCheckState(false);

    m_opensslChecksum01 = new opensslchecksum(this);

    ui->statusbar->addWidget(ui->progressBar01);

    m_settings01 = new settingsMain(this);
    m_settings01->setModal(true);

    m_saveAllTables01 = new QAction("Save All Files", this);
    m_saveMatchedTable01 = new QAction("Save Matched Files", this);
    m_savePartialTable01 = new QAction("Save Partially Matched Files", this);
    m_saveUnmatchedTable01 = new QAction("Save Unmatched Files", this);
    m_saveNewTable01 = new QAction("Save New Files", this);

    m_saveTables01 = {m_saveAllTables01, m_saveMatchedTable01, m_savePartialTable01, m_saveUnmatchedTable01, m_saveNewTable01};

    ui->toolButton_saveTable01->addActions(m_saveTables01);
    ui->toolButton_saveTable02->addActions(m_saveTables01);
    ui->toolButton_saveTable03->addActions(m_saveTables01);
    ui->toolButton_saveTable04->addActions(m_saveTables01);

    m_saveAllTables05 = new QAction("Save All Files", this);
    m_saveMatchedTable05 = new QAction("Save Matched Files", this);
    m_savePartialTable05 = new QAction("Save Partially Matched Files", this);
    m_saveUnmatchedTable05 = new QAction("Save Unmatched Files", this);

    m_saveTables05 = {m_saveAllTables05, m_saveMatchedTable05, m_savePartialTable05, m_saveUnmatchedTable05};

    ui->toolButton_saveTable05_1->addActions(m_saveTables05);
    ui->toolButton_saveTable05_2->addActions(m_saveTables05);
    ui->toolButton_saveTable05_3->addActions(m_saveTables05);

    connect(&fsQtimer01, &QTimer::timeout, this, &MainWindow::expandColumn01);
    connect(&m_watcher01, &QFutureWatcher<QVector<QString>>::finished, this, &MainWindow::displayChecksum01);
    connect(m_opensslChecksum01, &opensslchecksum::progressChangeSignal01, this, &MainWindow::on_progressBar01_valueChanged);
    connect(this, &MainWindow::cancelChecksum01, m_opensslChecksum01, &opensslchecksum::isCanceledSlot01);
    connect(m_opensslChecksum01, &opensslchecksum::resetChecksum01, this, &MainWindow::resetChecksum01);
    connect(m_checkProxy, &CheckableProxyModel::checkedNodesChanged, this, &MainWindow::repaint_treeView01);
    connect(m_settings01, &settingsMain::show_FSChanges, this, &MainWindow::show_FSChanges01);
    connect(m_settings01, &settingsMain::listAllFiles, this, &MainWindow::showAllChecksumFiles);
    connect(&m_watcher02, &QFutureWatcher<void>::finished, this, &MainWindow::setChecksumDisplay01);
    connect(&m_watcher03, &QFutureWatcher<QVector<QString>>::finished, this, &MainWindow::writeChecksumFile01);
    connect(&m_watcher03, &QFutureWatcher<QVector<QString>>::progressValueChanged, this, &MainWindow::on_progressBar01_valueChanged);
    connect(m_settings01, &settingsMain::defaultNumberOfThreads, this, &MainWindow::defaultNumberOfThreads01);
    connect(m_settings01, &settingsMain::numberOfThreads, this, &MainWindow::numberOfThreads01);
    connect(m_settings01, &settingsMain::verifyOptions, this, &MainWindow::verifyOptionsSlot01);
    connect(&m_setVerifyWatcher01, &QFutureWatcher<void>::finished, this, &MainWindow::setVerifyDisplay01);
    connect(&m_verifyHashWatcher, &QFutureWatcher<QVector<QString>>::finished, this, &MainWindow::getVerifyData01);
    connect(&m_verifyHashWatcher, &QFutureWatcher<QVector<QString>>::progressValueChanged, this, &MainWindow::on_progressBar01_valueChanged);
    connect(this, &MainWindow::cancelVerifySignal01, this, &MainWindow::cancelVerifySlot01);
    connect(ui->comboBox_verifyTableViews02, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::on_comboBox_verifyTableViews01_currentIndexChanged);
    connect(ui->comboBox_verifyTableViews03, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::on_comboBox_verifyTableViews01_currentIndexChanged);
    connect(ui->comboBox_verifyTableViews04, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::on_comboBox_verifyTableViews01_currentIndexChanged);
    connect(ui->pushButton_returnToVerify02, &QAbstractButton::released, this, &MainWindow::on_pushButton_returnToVerify01_clicked);
    connect(ui->pushButton_returnToVerify03, &QAbstractButton::released, this, &MainWindow::on_pushButton_returnToVerify01_clicked);
    connect(ui->pushButton_returnToVerify04, &QAbstractButton::released, this, &MainWindow::on_pushButton_returnToVerify01_clicked);
    connect(&m_watchVerifyFuture01, &QFutureWatcher<void>::finished, this, &MainWindow::verifyTablesAreFinished);
    connect(this, &MainWindow::resetProgressBar04, this, &MainWindow::resetProgressBar);
    connect(this, &MainWindow::progressBarUpdate04, this, &MainWindow::updateProgressBar);
    connect(&fsQtimer05, &QTimer::timeout, this, &MainWindow::expandColumn02);
    connect(m_checkProxy02, &CheckableProxyModel::checkedNodesChanged, this, &MainWindow::repaint_treeView02);
    connect(&m_watcherPrepareCopy05, &QFutureWatcher<void>::finished, this, &MainWindow::setCopyDisplay02);
    connect(&m_copyFilesFutureWatcher05, &QFutureWatcher<void>::finished, this, &MainWindow::copyIsFinished05);
    connect(this, &MainWindow::fileToCopyIsPresentSignal05, this, &MainWindow::fileToCopyIsPresentSlot05);
    connect(&m_multiCopyFilesFutureWatcher05, &QFutureWatcher<QVector<QString>>::finished, this, &MainWindow::copyIsFinished05);
    connect(&m_originalFilesChecksumWatcher05, &QFutureWatcher<QVector<QString>>::finished, this, &MainWindow::firstChecksumCompleted05);
    connect(&m_originalFilesChecksumWatcher05, &QFutureWatcher<QVector<QString>>::progressValueChanged, this, &MainWindow::updateProgressBar05);
    connect(&m_copiedFilesChecksumWatcher05, &QFutureWatcher<QVector<QString>>::finished, this, &MainWindow::secondChecksumCompleted05);
    connect(&m_copiedFilesChecksumWatcher05, &QFutureWatcher<QVector<QString>>::progressValueChanged, this, &MainWindow::updateProgressBar05);
    //connect(&m_compareFutureWatcher05, &QFutureWatcher<void>::started, this, &MainWindow::resetProgressBarSlot05);
    connect(this, &MainWindow::resetProgressBar05, this, &MainWindow::resetProgressBarSlot05);
    connect(this, &MainWindow::progressBarUpdate05, this, &MainWindow::updateProgressBar05);
    connect(&m_compareFutureWatcher05, &QFutureWatcher<void>::finished, this, &MainWindow::compareAndSetTablesFinished05);
    connect(ui->comboBox_verifyTableViews05_2, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::on_comboBox_verifyTableViews05_1_currentIndexChanged);
    connect(ui->comboBox_verifyTableViews05_3, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::on_comboBox_verifyTableViews05_1_currentIndexChanged);
    connect(ui->pushButton_return05_2, &QAbstractButton::released, this, &MainWindow::on_pushButton_return05_1_released);
    connect(ui->pushButton_return05_3, &QAbstractButton::released, this, &MainWindow::on_pushButton_return05_1_released);
    connect(m_settings01, &settingsMain::compareOptions, this, &MainWindow::compareOptionsSlot05);

    ui->tabWidget->setCurrentWidget(ui->tab01);
    ui->pushButton_cancelChecksum00->setDisabled(true);
    ui->radioButton_useTree01->setChecked(true);
    newView01();
    checkTreeOrBrowse01();
    m_settings01->on_StartSettings01();
    ui->pushButton_viewResults01->setDisabled(true);
    ui->pushButton_Verify01->setDisabled(true);
    ui->pushButton_cancelVerify01->setDisabled(true);

    ui->radioButton_useTree05->setChecked(true);
    newView02();
    checkTreeOrBrowse02();
}


MainWindow::~MainWindow()
{
    delete m_fsModel01;
    delete m_fsModel02;
    delete m_checkProxy;
    delete m_checkProxy02;
    delete m_opensslChecksum01;
    delete m_settings01;
    //delete m_threadedFileCopy;
    delete ui;
}


void MainWindow::on_tabWidget_currentChanged()
{
    ui->progressBar01->reset();
}


void MainWindow::on_actionSettings_triggered()
{
    on_pushButton_settings01_clicked();
}


//-----Checksum-Single-File-Below----------------------------------------------------------------------------


void MainWindow::on_pushButton_browse01_clicked()
{
    QFileDialog fileDialog(this);
    fileDialog.setFileMode(QFileDialog::AnyFile);
    fileDialog.setDirectory(QDir::rootPath());

    if(fileDialog.exec())
        ui->lineEdit_File01->setText(fileDialog.selectedFiles().at(0));

}


void MainWindow::on_pushButton_beginChecksum01_clicked()
{
    m_fileToHash01.clear();
    m_fileToHash01.append(ui->lineEdit_File01->text());
    QFile file01(m_fileToHash01.at(0));
    ui->lineEdit_calcValue01->clear();
    ui->progressBar01->reset();
    ui->progressBar01->setRange(0, 100);

    if(ui->lineEdit_File01->text() == "" || ! file01.exists())
    {
        QMessageBox::information(this, "No File Selected",
                                 "There is no file selected or file doesn't exist. Please select a file.");
        return;
    }
    else
    {
        ui->pushButton_beginChecksum01->setDisabled(true);
        ui->pushButton_cancelChecksum00->setEnabled(true);
        m_opensslChecksum01->setCallingFunction01(1);
        m_opensslChecksum01->setHashType01(ui->comboBox_hashType01->currentIndex());
        //QThreadPool::globalInstance()->setMaxThreadCount(2);
        auto hashFunc00 = std::bind(&opensslchecksum::ssl_fileHash01, m_opensslChecksum01, std::placeholders::_1);
        m_futureFileHash01 = QtConcurrent::mapped(m_fileToHash01, hashFunc00);
        m_watcher01.setFuture(m_futureFileHash01);
    }
}


void MainWindow::on_pushButton_cancelChecksum00_released()
{
    m_watcher01.cancel();
    emit cancelChecksum01(true);
}


/* This is a slot connected to a signal in opensslchecksum. This appears to be necessary, because if
 * I put ui->progressBar01->reset() in on_pushButton_cancelChecksum00_released(), the progress bar
 * does not reset. */
void MainWindow::resetChecksum01()
{
    ui->progressBar01->reset();
    ui->pushButton_cancelChecksum00->setDisabled(true);
    ui->pushButton_beginChecksum01->setEnabled(true);
}


void MainWindow::displayChecksum01()
{
    if(! m_watcher01.isCanceled())
    {
        ui->lineEdit_calcValue01->setText(m_futureFileHash01.result().at(0));
        ui->pushButton_beginChecksum01->setEnabled(true);
    }
}


void MainWindow::on_pushButton_Compare01_clicked()
{
    m_checksum01_Tab1 = ui->lineEdit_calcValue01->text();
    m_checksum01Comp_Tab1 = ui->lineEdit_compValue01->text();

    m_checksum01_Tab1 = m_checksum01_Tab1.simplified();
    m_checksum01_Tab1.replace( " ", "" );
    m_checksum01Comp_Tab1 = m_checksum01Comp_Tab1.simplified();
    m_checksum01Comp_Tab1.replace( " ", "" );

    int compareVal01 = QString::compare(m_checksum01_Tab1, m_checksum01Comp_Tab1, Qt::CaseInsensitive);

    if(compareVal01 == 0)
    {
        QMessageBox::information(this, "Checksums match.", "Checksums match!");
    }
    else
    {
        QMessageBox::critical(this, "Checksums do not match.", "Checksums do not match.");
    }
}


void MainWindow::on_progressBar01_valueChanged(int value)
{
    ui->progressBar01->setValue(value);
}


//-----Create-Checksum-File-Below----------------------------------------------------------------------------


/* This function resets the file view. */
void MainWindow::on_pushButton_resetView01_clicked()
{
    if(ui->radioButton_useTree01->isChecked())
    {
        m_resetView01 = false;
        m_checkProxy->resetToDefault();
        delete m_fsModel01;
        m_fsModel01 = new QFileSystemModel(this);
        //m_fsModel01 = new CheckableFileModel(this);
        ui->progressBar01->reset();
        newView01();
    }

    if(ui->radioButton_useBrowse01->isChecked())
    {
        ui->lineEdit_fileText01->clear();
        ui->listWidget_selectedDirs01->clear();
        ui->listWidget_selectedFiles01->clear();
        m_browsedDirs01.clear();
        m_browsedFiles01.clear();
    }
}


/* The purpose of this function is to setup the view of the file system in the tree view.
 * The purpose of the timer is to give the file system some time to populate the model before the
 * first column is resized to fit the contents. The purpose of m_resetView01 is to check if any settings
 * have been changed which will require the model to be reset. */
void MainWindow::newView01()
{
    m_fsModel01->setOptions(m_qfsOptions01);
    m_fsModel01->setFilter(m_qdirFilters01);
    m_fsModel01->setRootPath(QDir::rootPath());

    //m_checkableModel->setSourceModel(m_fsModel01);
    //ui->treeViewFiles01->setModel(m_checkableModel);
    //QModelIndex rootP = m_checkableModel->index(0, 0);
    //m_fsModel01->setRootPath(QDir::homePath());
    //ui->treeViewFiles01->setModel(m_fsModel01);

    m_checkProxy->setSourceModel(m_fsModel01);
    ui->treeViewFiles01->setModel(m_checkProxy);
    ui->treeViewFiles01->setExpandsOnDoubleClick(true);

    QModelIndex rootP = m_checkProxy->index(0, 0);
    ui->treeViewFiles01->expand(rootP);
    fsQtimer01.start(250);

    if (m_resetView01)
    {
        on_pushButton_resetView01_clicked();
    }
}


/* This function is started from settings01::on_apply01_clicked(), through a connection in this class's
 * constructor. This function is necessary to show the changes made from settings to the view of the
 * file system. This function also changes m_qdirFilters02 and m_qdirIteratorFlags01, which are used
 * to filter the files in treeChecksum01() and browseChecksum01. */
void MainWindow::show_FSChanges01(QDir::Filters dirFilter01, QDir::Filters dirFilter02,
     QFileSystemModel::Options fsOption01, QDirIterator::IteratorFlags itFlag01, bool reset01)
{
    m_qdirFilters01 = dirFilter01;
    m_qdirFilters02 = dirFilter02;
    m_qfsOptions01 = fsOption01;
    m_qdirIteratorFlags01 = itFlag01;
    m_resetView01 = reset01;
    newView01();
    newView02();
}


/* This functions is connected to the settings file and it shows all files to be checksumed if
 * "listAllFiles" is true. */
void MainWindow::showAllChecksumFiles(bool listAllFiles)
{
    if(listAllFiles)
        m_listAllFiles01 = true;
    else
        m_listAllFiles01 = false;
}


/* This function sets the "browse" line as enabled or disabled, dependeing on what radio button
 * is checked. It also sets the stacked widget to the proper screen. */
void MainWindow::checkTreeOrBrowse01()
{
    if(ui->radioButton_useTree01->isChecked())
    {
        ui->frame02_01->setEnabled(true);
        ui->frame02_02->setDisabled(true);
        ui->stackedWidget02->setCurrentIndex(0);
        ui->lineEdit_fileText01->clear();
    }
    else if(ui->radioButton_useBrowse01->isChecked())
    {
        ui->frame02_01->setEnabled(true);
        ui->frame02_02->setEnabled(true);
        ui->stackedWidget02->setCurrentIndex(1);
    }
}


/* This function is started by the timer in newView01(). It is connected to the timer in the constructor
 * of this class. It's purpose is to resize the first column after the tree view model has been
 * populated, and to stop the timer. */
void MainWindow::expandColumn01()
{
    ui->treeViewFiles01->resizeColumnToContents(0);
    fsQtimer01.stop();
}


/* This function is connected to the checkedNodesChanged() signal in checkableproxymodel. It's
 * purpose is to repaint the tree view whenever an item is checked. Without this function,
 * some files under a checked folder will not appear checked until the user hovers over them. */
void MainWindow::repaint_treeView01()
{
    ui->treeViewFiles01->dataChanged(QModelIndex(), QModelIndex());
}


void MainWindow::on_pushButton_browseDirs01_clicked()
{
    QFileDialog fileDialog(this);
    fileDialog.setFileMode(QFileDialog::Directory);
    fileDialog.setDirectory(QDir::rootPath());

    if(fileDialog.exec())
    {
        if(m_browsedDirs01.contains(fileDialog.selectedFiles().at(0)))
        {
            QMessageBox::warning(this, "Directory Has Already Been Added.", "That directory has already been added.");
            return on_pushButton_browseDirs01_clicked();
        }
        else
        {
            m_browsedDirs01.append(fileDialog.selectedFiles().toVector());
            ui->listWidget_selectedDirs01->addItem(fileDialog.selectedFiles().at(0));
        }
    }
}


void MainWindow::on_pushButton_browseFiles01_clicked()
{
    QFileDialog fileDialog(this);
    fileDialog.setFileMode(QFileDialog::ExistingFiles);
    fileDialog.setDirectory(QDir::rootPath());

    if(fileDialog.exec())
    {
        for(int i = 0; i < fileDialog.selectedFiles().count(); i++)
        {
            if(m_browsedFiles01.contains(fileDialog.selectedFiles().at(i)))
            {
                QMessageBox::warning(this, "File(s) Have Already Been Added.", "One of these files has already been added.");
                return on_pushButton_browseFiles01_clicked();
            }
            else
            {
                ui->listWidget_selectedFiles01->addItem(fileDialog.selectedFiles().at(i));
            }
        }
        m_browsedFiles01.append(fileDialog.selectedFiles().toVector());
    }
}



void MainWindow::on_pushButton_add01_clicked()
{
    m_pathName01 = ui->lineEdit_fileText01->text();
    QFileInfo fileInfo(m_pathName01);

    if(m_pathName01.isEmpty())
    {
        QMessageBox::information(this, "No Directory Selected",
        "There is no directory or file selected. Please select a directory or file.");
    }
    else if(!fileInfo.isDir() && !fileInfo.isFile())
    {
        QMessageBox::information(this, "Invalid Path",
        "The path you have entered is not valid. Please enter a valid path to a directory or file.");
    }
    else if(m_browsedDirs01.contains(m_pathName01) || m_browsedFiles01.contains(m_pathName01))
    {
        QMessageBox::warning(this, "Item Has Already Been Added.", "This item has already been added.");
        return;
    }
    else
    {
        if(fileInfo.isDir())
        {
            ui->listWidget_selectedDirs01->addItem(m_pathName01);
            m_browsedDirs01.append(m_pathName01);
        }

        if(fileInfo.isFile())
        {
            ui->listWidget_selectedFiles01->addItem(m_pathName01);
            m_browsedFiles01.append(m_pathName01);
        }

        m_pathName01 = "";
        ui->lineEdit_fileText01->setText(m_pathName01);
    }
}


void MainWindow::on_lineEdit_fileText01_returnPressed()
{
    on_pushButton_add01_clicked();
}



/* I use a foreach loop to remove the items from the m_browsedDirs01 vector and the QListWidget. */
void MainWindow::on_pushButton_delete01_clicked()
{
    QStringList itemsToDelete01;
    int count = 0;

    foreach (QListWidgetItem *item, ui->listWidget_selectedDirs01->selectedItems())
    {
        itemsToDelete01 << item->text();
        m_browsedDirs01.removeAll(itemsToDelete01.at(count));
        count++;
        delete ui->listWidget_selectedDirs01->takeItem(ui->listWidget_selectedDirs01->row(item));
    }

    QStringList itemsToDelete02;
    count = 0;

    foreach (QListWidgetItem *item, ui->listWidget_selectedFiles01->selectedItems())
    {
        itemsToDelete02 << item->text();
        m_browsedFiles01.removeAll(itemsToDelete02.at(count));
        count++;
        delete ui->listWidget_selectedFiles01->takeItem(ui->listWidget_selectedFiles01->row(item));
    }
}


void MainWindow::on_pushButton_settings01_clicked()
{
    m_settings01->open();
    m_settings01->on_StartSettings01();
}


void MainWindow::on_radioButton_useTree01_clicked()
{
    checkTreeOrBrowse01();
}


void MainWindow::on_radioButton_useBrowse01_clicked()
{
    checkTreeOrBrowse01();
}


void MainWindow::on_pushButton_prepareChecksum00_clicked()
{
    on_pushButton_prepareChecksum01_clicked();
}


void MainWindow::on_pushButton_prepareChecksum01_clicked()
{
    if(ui->radioButton_useTree01->isChecked())
    {
        m_selectedFiles01.clear();
        m_selectedDirectories01.clear();
        m_checkProxy->checkedState()->checkedLeafSourceModelIndexes(m_selectedFiles01);
        m_checkProxy->checkedState()->checkedBranchSourceModelIndexes(m_selectedDirectories01);

        if (m_selectedFiles01.isEmpty() && m_selectedDirectories01.isEmpty())
        {
            QMessageBox::information(this, "Nothing Is Selected",
                                     "No files or directories are selected. Please select a file or directory.");
            return;
        }

        prepareChecksumDisplay01();
        QGuiApplication::setOverrideCursor(Qt::WaitCursor);
        m_prepareForChecksum01 = QtConcurrent::run(this, &MainWindow::treeChecksum01);
        m_watcher02.setFuture(m_prepareForChecksum01);
    }

    if(ui->radioButton_useBrowse01->isChecked())
    {
        if (m_browsedDirs01.isEmpty() && m_browsedFiles01.isEmpty())
        {
            QMessageBox::information(this, "Nothing Is Selected",
                                     "No directories or files have been added. Please add a directory or file.");
            return;
        }

        prepareChecksumDisplay01();
        QGuiApplication::setOverrideCursor(Qt::WaitCursor);
        m_prepareForChecksum01 = QtConcurrent::run(this, &MainWindow::browseChecksum01);
        m_watcher02.setFuture(m_prepareForChecksum01);
    }
}


/* This function is called from on_pushButton_prepareChecksum01_clicked(). It first gathers all of the directories
 * checked in the tree view, using QModelIndexes provided by checkableproxymodel. Then, two QDirIterators are
 * made with options for filtering files. The iterators then run through all of the directories and subdirectories
 * and the files are placed into a vector (m_selectedFilePaths01). The second for loop gathers all of the individual
 * files selected in the tree view, using QModelIndexes provided by checkableproxymodel. These files are then added
 * to m_selectedFilePaths. Finally, the maximum number of threads Qt can use for the checksum calculations are
 * stored in m_numberOfThreads01. The "if" and "else if" statements ensure that the settings selected are
 * properly applied and that files are not entered twice. */
void MainWindow::treeChecksum01()
{
    m_selectedFilePaths01.clear();
    m_selectedFileNames01.clear();
    m_sizeOfFiles01 = 0;
    m_fileCounter01 = 0;

    for (int i = 0; i < m_selectedDirectories01.count(); i++)
    {
        QDirIterator it1(m_fsModel01->filePath(m_selectedDirectories01.at(i)), m_qdirFilters01, m_qdirIteratorFlags01);

        while (it1.hasNext())
        {
            QFileInfo f1(it1.next());
            QFileInfo f2;
            QFile file1(it1.filePath());
            QString fileNameString1 = file1.fileName();
            // Old: if(f2.isSymLink() && f2.size() == QFileInfo(f2.symLinkTarget()).size() && ! m_qdirIteratorFlags01.testFlag(QDirIterator::FollowSymlinks))
            if(f1.isShortcut() && ! m_qdirIteratorFlags01.testFlag(QDirIterator::FollowSymlinks))
            {
                QFile shortCutFile01(it1.filePath());
                if(shortCutFile01.open(QIODevice::ReadOnly))
                {
                    m_selectedFilePaths01.append(f1.absoluteFilePath());
                    m_selectedFileNames01.append(f1.fileName());
                    m_sizeOfFiles01 += shortCutFile01.size();
                    m_fileCounter01++;
                    shortCutFile01.close();
                    //qDebug() << "File shortcut added from tree view: " << f1.absoluteFilePath();
                }
            }
            else if(f1.isShortcut() && m_qdirIteratorFlags01.testFlag(QDirIterator::FollowSymlinks))
            {
                QFileInfo shortCutTarget01(f1.symLinkTarget());
                if(shortCutTarget01.exists())
                {
                    m_selectedFilePaths01.append(shortCutTarget01.absoluteFilePath());
                    m_selectedFileNames01.append(shortCutTarget01.fileName());
                    m_sizeOfFiles01 += shortCutTarget01.size();
                    m_fileCounter01++;
                    //qDebug() << "File target from shortcut added from tree view: " << shortCutTarget01.absoluteFilePath();
                }
            }
            else if(f1.isSymbolicLink() && ! m_qdirIteratorFlags01.testFlag(QDirIterator::FollowSymlinks))
            {
                QFile symLinkFile01(it1.filePath());
                if(symLinkFile01.open(QIODevice::ReadOnly))
                {
                    m_selectedFilePaths01.append(f1.absoluteFilePath());
                    m_selectedFileNames01.append(f1.fileName());
                    m_sizeOfFiles01 += symLinkFile01.size();
                    m_fileCounter01++;
                    symLinkFile01.close();
                    //qDebug() << "Symbolic link to file added from tree view: " << f1.absoluteFilePath();
                }
            }
            else if(f1.isSymbolicLink() && m_qdirIteratorFlags01.testFlag(QDirIterator::FollowSymlinks))
            {
                QFileInfo symLinkTarget01(f1.symLinkTarget());
                if(symLinkTarget01.exists())
                {
                    m_selectedFilePaths01.append(symLinkTarget01.absoluteFilePath());
                    m_selectedFileNames01.append(symLinkTarget01.fileName());
                    m_sizeOfFiles01 += symLinkTarget01.size();
                    m_fileCounter01++;
                    //qDebug() << "Target from symbolic link added from tree view: " << symLinkTarget01.absoluteFilePath();
                }
            }
            else if(f1.isFile() && ! f1.isShortcut())
            {
                m_selectedFilePaths01.append(f1.absoluteFilePath());
                m_selectedFileNames01.append(f1.fileName());
                m_sizeOfFiles01 += f1.size();
                m_fileCounter01++;
            }
            else if(fileNameString1.contains(".lnk", Qt::CaseInsensitive) && ! fileNameString1.endsWith(".lnk", Qt::CaseInsensitive))
            {
                while(! fileNameString1.endsWith(".lnk", Qt::CaseInsensitive))
                {
                    QDir dir1(it1.filePath());
                    dir1.cdUp();
                    fileNameString1 = dir1.absolutePath();
                }

                file1.setFileName(fileNameString1);
                f2.setFile(file1);

                if(file1.open(QIODevice::ReadOnly))
                {
                    m_selectedFilePaths01.append(f2.absoluteFilePath());
                    m_selectedFileNames01.append(f2.fileName());
                    m_sizeOfFiles01 += file1.size();
                    m_fileCounter01++;
                    file1.close();
                    //qDebug() << "File shortcut added from tree view: " << f1.absoluteFilePath();
                }
            }
        }
    }

    for (int i = 0; i < m_selectedFiles01.count(); i++)
    {
        QFileInfo f4 = m_fsModel01->fileInfo(m_selectedFiles01.at(i));
        m_selectedFilePaths01.append(f4.absoluteFilePath());
        m_selectedFileNames01.append(f4.fileName());
        m_sizeOfFiles01 += f4.size();
        m_fileCounter01++;
    }

    m_sizeOfFilesVector01 = m_selectedFilePaths01.count();
    m_numberOfThreads01 = QThreadPool::globalInstance()->maxThreadCount();
}


/* This function essentialy does the same thing as the function treeChecksum01() above does, except it
 * recursively iterates through all of the directories in the m_browsedDirs01 vector and adds the files to
 * m_selectedFilePaths01 and m_selectedFileNames01 vectors. Finally, it adds all of the individual files
 * that have been "browsed" to m_selectedFilePaths01 and m_selectedFileNames01 vectors. The "if" and
 * "else if" statements ensure that the settings selected are properly applied and that files are not
 * entered twice. */
void MainWindow::browseChecksum01()
{
    m_selectedFilePaths01.clear();
    m_selectedFileNames01.clear();
    m_sizeOfFiles01 = 0;
    m_fileCounter01 = 0;
    QVector<QString> tempDirVec01;

    if(m_verifySpecificDirs01)
    {
        tempDirVec01 = m_browsedDirs01;
        m_browsedDirs01.clear();
        m_browsedDirs01 = m_dirsToVerify01;
    }

    for(int i = 0; i < m_browsedDirs01.count(); i++)
    {
        QDirIterator it1(m_browsedDirs01.at(i), m_qdirFilters01, m_qdirIteratorFlags01);

        while (it1.hasNext())
        {
            QFileInfo f1(it1.next());
            QFileInfo f2;
            QFile file1(it1.filePath());
            QString fileNameString1 = file1.fileName();

            if(f1.isShortcut() && ! m_qdirIteratorFlags01.testFlag(QDirIterator::FollowSymlinks))
            {
                QFile shortCutFile01(it1.filePath());
                if(shortCutFile01.open(QIODevice::ReadOnly))
                {
                    m_selectedFilePaths01.append(f1.absoluteFilePath());
                    m_selectedFileNames01.append(f1.fileName());
                    m_sizeOfFiles01 += shortCutFile01.size();
                    m_fileCounter01++;
                    shortCutFile01.close();
                    //qDebug() << "File shortcut added from browse view: " << f1.absoluteFilePath();
                }
            }
            else if(f1.isShortcut() && m_qdirIteratorFlags01.testFlag(QDirIterator::FollowSymlinks))
            {
                QFileInfo shortCutTarget01(f1.symLinkTarget());
                if(shortCutTarget01.exists())
                {
                    m_selectedFilePaths01.append(shortCutTarget01.absoluteFilePath());
                    m_selectedFileNames01.append(shortCutTarget01.fileName());
                    m_sizeOfFiles01 += shortCutTarget01.size();
                    m_fileCounter01++;
                    //qDebug() << "File target from shortcut added from browse view: " << shortCutTarget01.absoluteFilePath();
                }
            }
            else if(f1.isSymbolicLink() && ! m_qdirIteratorFlags01.testFlag(QDirIterator::FollowSymlinks))
            {
                QFile symLinkFile01(it1.filePath());
                if(symLinkFile01.open(QIODevice::ReadOnly))
                {
                    m_selectedFilePaths01.append(f1.absoluteFilePath());
                    m_selectedFileNames01.append(f1.fileName());
                    m_sizeOfFiles01 += symLinkFile01.size();
                    m_fileCounter01++;
                    symLinkFile01.close();
                    //qDebug() << "Symbolic link to file added from browse view: " << f1.absoluteFilePath();
                }
            }
            else if(f1.isSymbolicLink() && m_qdirIteratorFlags01.testFlag(QDirIterator::FollowSymlinks))
            {
                QFileInfo symLinkTarget01(f1.symLinkTarget());
                if(symLinkTarget01.exists())
                {
                    m_selectedFilePaths01.append(symLinkTarget01.absoluteFilePath());
                    m_selectedFileNames01.append(symLinkTarget01.fileName());
                    m_sizeOfFiles01 += symLinkTarget01.size();
                    m_fileCounter01++;
                    //qDebug() << "Target from symbolic link added from browse view: " << symLinkTarget01.absoluteFilePath();
                }
            }
            else if(f1.isFile() && ! f1.isShortcut())
            {
                m_selectedFilePaths01.append(f1.absoluteFilePath());
                m_selectedFileNames01.append(f1.fileName());
                m_sizeOfFiles01 += f1.size();
                m_fileCounter01++;
            }
            else if(fileNameString1.contains(".lnk", Qt::CaseInsensitive) && ! fileNameString1.endsWith(".lnk", Qt::CaseInsensitive))
            {
                while(! fileNameString1.endsWith(".lnk", Qt::CaseInsensitive))
                {
                    QDir dir1(it1.filePath());
                    dir1.cdUp();
                    fileNameString1 = dir1.absolutePath();
                }

                file1.setFileName(fileNameString1);
                f2.setFile(file1);

                if(file1.open(QIODevice::ReadOnly))
                {
                    m_selectedFilePaths01.append(f2.absoluteFilePath());
                    m_selectedFileNames01.append(f2.fileName());
                    m_sizeOfFiles01 += file1.size();
                    m_fileCounter01++;
                    file1.close();
                    //qDebug() << "File shortcut added from tree view: " << f1.absoluteFilePath();
                }
            }
        }
    }

    for(int i = 0; i < m_browsedFiles01.count(); i++)
    {
        QFileInfo f1(m_browsedFiles01.at(i));
        m_selectedFilePaths01.append(f1.absoluteFilePath());
        m_selectedFileNames01.append(f1.fileName());
        m_sizeOfFiles01 += f1.size();
        m_fileCounter01++;
    }

    if(m_verifySpecificDirs01)
    {
        m_browsedDirs01 = tempDirVec01;
        m_verifyFilePathVector = m_selectedFilePaths01;
    }

    m_sizeOfFilesVector01 = m_selectedFilePaths01.count();
    m_numberOfThreads01 = QThreadPool::globalInstance()->maxThreadCount();
}


void MainWindow::prepareChecksumDisplay01()
{
    ui->textBrowser_showChecksum01->clear();
    ui->stackedWidget02->setCurrentIndex(2);
    ui->textBrowser_showChecksum01->append("Please Wait...");
    ui->textBrowser_showChecksum01->append("Preparing File Information...");
    ui->progressBar01->reset();
    ui->frame02_01->setDisabled(true);
    ui->frame02_02->setDisabled(true);
    ui->pushButton_createChecksum01->setDisabled(true);
    ui->pushButton_cancelChecksum01->setDisabled(true);
}


void MainWindow::setChecksumDisplay01()
{
    m_numFilesString01 = QLocale(QLocale::English).toString(m_sizeOfFilesVector01);
    m_sizeOfFilesStr01 = QLocale(QLocale::English).toString(m_sizeOfFiles01);
    m_numberOfThreadsStr01 = QLocale(QLocale::English).toString(m_numberOfThreads01);

    ui->textBrowser_showChecksum01->clear();
    ui->progressBar01->reset();
    ui->progressBar01->setRange(0, m_sizeOfFilesVector01);

    if(m_listAllFiles01)
    {
        for(int i = 0; i < m_sizeOfFilesVector01; i++)
            ui->textBrowser_showChecksum01->append(m_selectedFilePaths01.at(i));
        ui->textBrowser_showChecksum01->append("");
    }

    ui->textBrowser_showChecksum01->append("There are " + m_numFilesString01 + " files selected.");
    ui->textBrowser_showChecksum01->append("Total size of files selected is " + m_sizeOfFilesStr01 + " bytes.");
    ui->textBrowser_showChecksum01->append("Checksum1 will use " + m_numberOfThreadsStr01 + " thread(s).");
    ui->pushButton_createChecksum01->setEnabled(true);
    ui->pushButton_return01->setEnabled(true);
    QGuiApplication::restoreOverrideCursor();
}


void MainWindow::on_checkBox_OnlyChecksums01_stateChanged(int arg1)
{
    m_opensslChecksum01->setWriteChecksumsOnly01(arg1);
}


void MainWindow::on_pushButton_createChecksum01_clicked()
{
    ui->pushButton_createChecksum01->setDisabled(true);
    ui->pushButton_cancelChecksum01->setEnabled(true);
    ui->pushButton_return01->setDisabled(true);
    m_cancelChecksumFile01 = false;

    m_opensslChecksum01->setCallingFunction01(2);
    m_opensslChecksum01->setHashType01(ui->comboBox_hashType02->currentIndex());

    m_watcher03.progressRangeChanged(0, m_sizeOfFilesVector01);
    auto hashFunc01 = std::bind(&opensslchecksum::ssl_fileHash01, m_opensslChecksum01, std::placeholders::_1);
    m_futureFileHash03 = QtConcurrent::mapped(m_selectedFilePaths01, hashFunc01);
    m_watcher03.setFuture(m_futureFileHash03);
}


void MainWindow::writeChecksumFile01()
{
    if(! m_watcher03.isCanceled())
    {
        m_checksumFileName01.clear();
        m_finalChecksum01.clear();

        m_checksumFileName01 = QFileDialog::getSaveFileName(this, "Save Checksum File", QDir::rootPath(), "*.txt *.csv");
        if(m_checksumFileName01.isEmpty())
        {
            int message01 = QMessageBox::warning(this, tr("Checksum1"), tr("The checksum file has not been saved. "
                            "Do you want to save it?"), QMessageBox::Save | QMessageBox::Cancel);

            switch (message01)
            {
            case QMessageBox::Save:
                m_checksumFileName01 = QFileDialog::getSaveFileName(this, "Save Checksum File", QDir::rootPath(), "*.txt *.csv");
                break;
            case QMessageBox::Cancel:
                ui->pushButton_createChecksum01->setEnabled(true);
                ui->pushButton_cancelChecksum01->setDisabled(true);
                ui->pushButton_return01->setEnabled(true);
                return;
            default:
                break;
            }
        }

        if(m_checksumFileName01.isEmpty())
        {
            ui->pushButton_createChecksum01->setEnabled(true);
            ui->pushButton_cancelChecksum01->setDisabled(true);
            ui->pushButton_return01->setEnabled(true);
            return;
        }

        for(int i = 0; i < m_futureFileHash03.resultCount(); i++)
            m_finalChecksum01.append(m_futureFileHash03.resultAt(i));

        QFile file01(m_checksumFileName01);
        QTextStream stream(&file01);
        QVector<QString>::Iterator itr = m_finalChecksum01.begin();
        if(! file01.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QMessageBox::critical(this, "Error Creating Checksum File.", "Error Creating Checksum File.");
            ui->pushButton_createChecksum01->setEnabled(true);
            ui->pushButton_cancelChecksum01->setDisabled(true);
            ui->pushButton_return01->setEnabled(true);
            return;
        }
        else
        {
            for( ; itr != m_finalChecksum01.end(); itr++)
                stream << *itr << '\n';
        }
        file01.close();

        ui->textBrowser_showChecksum01->append("");
        ui->textBrowser_showChecksum01->append("The checksum file has been successfully saved.");
        ui->textBrowser_showChecksum01->append("You may press the \"Return\" button or exit the application.");
    }
    else
    {
        QMessageBox::information(this, "Checksum Has Been Canceled.", "Checksum File Creation Has Been Canceled.");
        ui->progressBar01->reset();
    }

    ui->pushButton_createChecksum01->setEnabled(true);
    ui->pushButton_cancelChecksum01->setDisabled(true);
    ui->pushButton_return01->setEnabled(true);
}


void MainWindow::on_pushButton_cancelChecksum01_clicked()
{
    m_watcher03.cancel();
}


void MainWindow::on_pushButton_return01_clicked()
{
    ui->progressBar01->reset();
    checkTreeOrBrowse01();
}


void MainWindow::defaultNumberOfThreads01()
{
    QThreadPool::globalInstance()->setMaxThreadCount(QThread::idealThreadCount());
}


void MainWindow::numberOfThreads01(int numThreads)
{
    QThreadPool::globalInstance()->setMaxThreadCount(numThreads);
}


//-----Verify-Checksum-File-Below----------------------------------------------------------------------------


/* This function provides the file dialog to open the checksum file. */
void MainWindow::on_pushButton_browse03_clicked()
{
    QStringList fileNameList;
    QFileDialog selectVerifyFile(this);
    selectVerifyFile.setFileMode(QFileDialog::ExistingFile);
    selectVerifyFile.setNameFilter("*.txt *.csv");
    selectVerifyFile.setDirectory(QDir::rootPath());

    if(selectVerifyFile.exec())
    {
        fileNameList = selectVerifyFile.selectedFiles();
        ui->textBrowser_prepareVerify01->clear();
        ui->lineEdit_selectVerifyFile01->setText(fileNameList.at(0));
        ui->pushButton_viewResults01->setDisabled(true);
        ui->pushButton_Verify01->setDisabled(true);
        ui->progressBar01->reset();
    }
}


void MainWindow::on_pushButton_browseDirs02_clicked()
{
    QFileDialog fileDialog(this);
    fileDialog.setFileMode(QFileDialog::Directory);
    fileDialog.setDirectory(QDir::rootPath());

    if(fileDialog.exec())
    {
        for(int i = 0; i < fileDialog.selectedFiles().count(); i++)
        {
            if(m_dirsToVerify01.contains(fileDialog.selectedFiles().at(i)))
            {
                QMessageBox::warning(this, "Directory Has Already Been Added.", "That directory has already been added.");
                return on_pushButton_browseDirs02_clicked();
            }
            else
            {
                m_dirsToVerify01.append(fileDialog.selectedFiles().toVector());
                ui->listWidget_verifyAgainst01->addItem(fileDialog.selectedFiles().at(i));
            }
        }
    }
}


void MainWindow::on_pushButton_deleteDirs02_clicked()
{
    QStringList itemsToDelete01;
    int count = 0;

    foreach (QListWidgetItem *item, ui->listWidget_verifyAgainst01->selectedItems())
    {
        itemsToDelete01 << item->text();
        m_dirsToVerify01.removeAll(itemsToDelete01.at(count));
        count++;
        delete ui->listWidget_verifyAgainst01->takeItem(ui->listWidget_verifyAgainst01->row(item));
    }
}


void MainWindow::verifyOptionsSlot01(int arg)
{
    m_verifyOptions01 = arg;
}


/* This function executes when the "Verify" button is clicked. It performs various error checking.
 * It then seperates the file path from the checksum and puts them into a QStringList. After this,
 * it calls verifyChecksumType01(), which determines what type of checksum is used. */
void MainWindow::on_pushButton_prepareVerify01_clicked()
{
    ui->progressBar01->reset();
    m_verifyFilePathVector.clear();
    m_numberOfFilesToVerify = 0;
    m_verifyFileSize01 = 0;
    m_verifyList01.clear();
    QRegExp matchFile01("*.csv");
    QRegExp matchFile02("*.txt");
    matchFile01.setPatternSyntax(QRegExp::Wildcard);
    matchFile02.setPatternSyntax(QRegExp::Wildcard);

    if(ui->lineEdit_selectVerifyFile01->text() == "")
    {
        QMessageBox::information(this, "No File Selected",
                                 "There is no file selected. Please select a file.");
        return;
    }

    if(! matchFile01.exactMatch(ui->lineEdit_selectVerifyFile01->text()) && ! matchFile02.exactMatch(ui->lineEdit_selectVerifyFile01->text()))
    {
        QMessageBox::information(this, "Invalid File Selected",
                                 "Invalid file type selected. Please select a .txt or .csv file.");
        return;
    }

    QFile m_verifyFile01(ui->lineEdit_selectVerifyFile01->text());
    if(! m_verifyFile01.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::critical(this, "Error Opening File.", "Error Opening Checksum File.");
        return;
    }

    while(! m_verifyFile01.atEnd())
    {
        QString line = m_verifyFile01.readLine();
        if(line.contains(','))
            m_verifyList01 += line.split(',', Qt::SkipEmptyParts);
        else if(line.contains(';'))
            m_verifyList01 += line.split(';', Qt::SkipEmptyParts);
        else if(line.contains(':'))
            m_verifyList01 += line.split(':', Qt::SkipEmptyParts);

        m_numberOfFilesToVerify++;
    }

    if(! verifyChecksumType01())
    {
        //qDebug() << "Invalid Hash Type.";
        return;
    }

    ui->pushButton_viewResults01->setDisabled(true);
    prepareVerifyDisplay01();
    QGuiApplication::setOverrideCursor(Qt::WaitCursor);
    m_setVerifyFuture01 = QtConcurrent::run(this, &MainWindow::getFullFileNamesAndChecksums01);
    m_setVerifyWatcher01.setFuture(m_setVerifyFuture01);
}


/* This function is called towards the end of on_pushButton_prepareVerify01_clicked().
 * It determines the type of checksum used in the checksum file. */
bool MainWindow::verifyChecksumType01()
{
    int hashInt03 = 0;
    m_hashTypeVerify01 = -1;

    for(int i = 1; i < m_verifyList01.count(); i+=2)
    {
        hashInt03 = m_verifyList01.at(i).trimmed().size();
        //qDebug() << "Checksum at list #" << i << ":" << verifyList01.at(i);

        if(hashInt03 == 32 || hashInt03 == 40 || hashInt03 == 64 || hashInt03 == 128)
            break;
        if(m_verifyList01.at(i) == "Zero Byte File" || m_verifyList01.at(i) == "")
            continue;
    }

    switch(hashInt03)
    {
    case 32:
        m_hashTypeVerify01 = 0;
        m_hashTypeVerifyStr01 = "MD5";
        break;

    case 40:
        m_hashTypeVerify01 = 1;
        m_hashTypeVerifyStr01 = "SHA1";
        break;

    case 64:
        m_hashTypeVerify01 = 2;
        m_hashTypeVerifyStr01 = "SHA256";
        break;

    case 128:
        m_hashTypeVerify01 = 3;
        m_hashTypeVerifyStr01 = "SHA512";
        break;

    default:
        m_hashTypeVerify01 = -1;
        m_hashTypeVerifyStr01 = "Unknown";
        QMessageBox::information(this, "Invalid Checksum Type.",
        "Checksum1 could not find a valid checksum type. "
        "Please ensure that the checksum is preceeded by the file path and a comma. "
        "Also ensure that only the checksum remains on the line following the comma.");
    }

    m_opensslChecksum01->setCallingFunction01(2);
    m_opensslChecksum01->setHashType01(m_hashTypeVerify01);

    //qDebug() << m_hashTypeVerify01;

    if(m_hashTypeVerify01 == -1)
        return false;
    else
        return true;
}


/* This function is called at towards the end of on_pushButton_prepareVerify01_clicked(). */
void MainWindow::prepareVerifyDisplay01()
{
    ui->textBrowser_prepareVerify01->clear();
    ui->textBrowser_prepareVerify01->append("Please Wait...");
    ui->textBrowser_prepareVerify01->append("Reading .txt / .csv File...");
}


/* This function is connected to on_pushButton_prepareVerify01_clicked().
 * This function runs after getFileNamesAndChecksums01() is finished. */
void MainWindow::setVerifyDisplay01()
{
    m_numFilesVerifyString01 = QLocale(QLocale::English).toString(m_numberOfFilesToVerify);
    ui->textBrowser_prepareVerify01->clear();
    ui->textBrowser_prepareVerify01->append("Checksum type is " + m_hashTypeVerifyStr01 + ".");
    ui->textBrowser_prepareVerify01->append("There are " + m_numFilesVerifyString01 + " files to verify.");
    if(ui->listWidget_verifyAgainst01->count() == 0)
    {
        ui->textBrowser_prepareVerify01->append("Checksum1 will attempt to verify the files against the same paths in the .txt or .csv file.");
        m_verifySpecificDirs01 = false;
    }
    else
    {
        m_verifySpecificDirs01 = true;
        browseChecksum01();
        m_numFilesVerifyString02 = QLocale(QLocale::English).toString(m_verifyFilePathVector.count());
        ui->textBrowser_prepareVerify01->append("Checksum1 will attempt to verify the files against the directories listed above.");
        ui->textBrowser_prepareVerify01->append("There are " + m_numFilesVerifyString02 + " files to checksum.");
    }
    QGuiApplication::restoreOverrideCursor();
    ui->pushButton_Verify01->setEnabled(true);
}


/* This function seperates the filenames from the checksums in the .txt file and adds them to QStringLists.
 * It is connected to the end of on_pushButton_prepareVerify01_clicked. */
void MainWindow::getFullFileNamesAndChecksums01()
{
    m_verifyFullFileNames01.clear();
    m_verifyChecksums01.clear();
    m_verifyFileNames01.clear();

    for(int i = 0; i < m_verifyList01.count(); i++)
    {
        if(i % 2 == 0)
        {
            m_verifyFullFileNames01.append(m_verifyList01.at(i));
        }
        else if(i % 2 != 0)
        {
            m_verifyChecksums01.append(m_verifyList01.at(i).trimmed());
        }
    }

    QString filePath;
    QString fileName;

    for(int i = 0; i < m_verifyFullFileNames01.count(); i++)
    {
        filePath = m_verifyFullFileNames01.at(i);

        if(filePath == "File Not Found")
            m_verifyFileNames01.append("File Not Found");
        else if(filePath == "Error")
            m_verifyFileNames01.append("Error");
        else if(filePath == "")
            m_verifyFileNames01.append("File Not Found");
        else
        {
            QFileInfo f1(filePath);
            fileName = f1.fileName();
            m_verifyFileNames01.append(fileName);
        }
    }
}


/* This function is called at the begining of on_pushButton_Verify01_clicked().
 * It gets the file path without the file name. */
void MainWindow::getFilePaths01()
{
    QString fileName01;
    QString filePath01;
    m_verifyFilePaths01.clear();

    for(int i = 0; i < m_verifyList01.count(); i+=2)
    {
        fileName01 = m_verifyList01.at(i);

        if(fileName01 == "File Not Found")
            m_verifyFilePaths01.append("File Not Found");
        else if(fileName01 == "Error")
            m_verifyFilePaths01.append("Error");
        else if(fileName01 == "")
            m_verifyFilePaths01.append("File Not Found");
        else
        {
            QFileInfo fp(fileName01);
            filePath01 = fp.absolutePath();
            m_verifyFilePaths01.append(filePath01);
            //qDebug() << filePath01;
        }
    }
}


void MainWindow::getRelativeFilePaths01()
{
    m_verifyRelativeFilePaths01.clear();
    QString filePath01;
    QString relativeFilePath01;

    for(int i = 0; i < m_verifyFullFileNames01.count(); i++)
    {
        filePath01 = m_verifyFullFileNames01.at(i);
        QDir dir1(m_verifyFullFileNames01.at(i));
        //QDir dir2(m_verifyFullFileNames01.at(i));

        if(filePath01 == "File Not Found")
            m_verifyRelativeFilePaths01.append("File Not Found");
        else if(filePath01 == "Error")
            m_verifyRelativeFilePaths01.append("Error");
        else if(filePath01 == "")
            m_verifyRelativeFilePaths01.append("File Not Found");
        else
        {
            for(int j = 0; j < 2; j++)
            {
                if(! dir1.isRoot())
                {
                    dir1.cdUp();
                }
            }

            relativeFilePath01 = dir1.relativeFilePath(m_verifyFullFileNames01.at(i));
            m_verifyRelativeFilePaths01.append(relativeFilePath01);
        }
    }
}


/* This function begins the verify / checksum process. */
void MainWindow::on_pushButton_Verify01_clicked()
{
    ui->pushButton_cancelVerify01->setEnabled(true);
    ui->pushButton_browse03->setDisabled(true);
    ui->pushButton_Verify01->setDisabled(true);
    ui->pushButton_prepareVerify01->setDisabled(true);
    ui->pushButton_clearAll01->setDisabled(true);
    getFilePaths01();
    getRelativeFilePaths01();

    m_textFileChecksumsList.clear();
    m_diskFileChecksumsList.clear();

    for(int i = 0; i < m_numberOfFilesToVerify; i++)
    {
        TextFileChecksums tempStruct;
        tempStruct.m_fullFilePath01 = m_verifyFullFileNames01.at(i);
        tempStruct.m_filePath01 = m_verifyFilePaths01.at(i);
        tempStruct.m_relativeFilePath01 = m_verifyRelativeFilePaths01.at(i);
        tempStruct.m_fileName01 = m_verifyFileNames01.at(i);
        tempStruct.m_checksum01 = m_verifyChecksums01.at(i);

        m_textFileChecksumsList.push_back(tempStruct);
    }

    if(! m_verifySpecificDirs01)
        m_verifyFilePathVector = m_verifyFullFileNames01.toVector();


    //qDebug() << m_verifyFilePathVector;
    ui->progressBar01->setRange(0, m_verifyFilePathVector.size());
    auto hashFunc01 = std::bind(&opensslchecksum::ssl_fileHash01, m_opensslChecksum01, std::placeholders::_1);
    m_futureVerifyHash = QtConcurrent::mapped(m_verifyFilePathVector, hashFunc01);
    m_verifyHashWatcher.setFuture(m_futureVerifyHash);
}


void MainWindow::on_pushButton_cancelVerify01_clicked()
{
    m_verifyHashWatcher.cancel();
    m_watchVerifyFuture01.cancel();
    ui->pushButton_viewResults01->setDisabled(true);
    ui->pushButton_cancelVerify01->setDisabled(true);
    ui->pushButton_browse03->setEnabled(true);
    ui->pushButton_Verify01->setDisabled(true);
    ui->pushButton_prepareVerify01->setEnabled(true);
    ui->pushButton_clearAll01->setEnabled(true);
}


/* This function is connected to the end of on_pushButton_Verify01_clicked. It takes the checksum results and
 * puts them into a QList of structs. It also calls setVerifyTables(). */
void MainWindow::getVerifyData01()
{
    m_verifyList01.clear();
    m_diskVerifyHashes.clear();

    if(! m_verifyHashWatcher.isCanceled())
    {
        ui->pushButton_viewResults01->setEnabled(true);
        ui->pushButton_cancelVerify01->setDisabled(true);
        ui->pushButton_browse03->setEnabled(true);
        ui->pushButton_Verify01->setDisabled(true);
        ui->pushButton_prepareVerify01->setEnabled(true);
        ui->pushButton_clearAll01->setEnabled(true);

        for(int i = 0; i < m_futureVerifyHash.resultCount(); i++)
        {
            m_diskVerifyHashes.append(m_futureVerifyHash.resultAt(i));
            QString line = m_diskVerifyHashes.at(i);
            m_verifyList01 += line.split(',', Qt::SkipEmptyParts);
        }

        getFullFileNamesAndChecksums01();
        getFilePaths01();
        getRelativeFilePaths01();
        m_numberOfFilesToVerifyOnDisk = m_futureVerifyHash.resultCount();

        for(int i = 0; i < m_futureVerifyHash.resultCount(); i++)
        {
            DiskFileChecksums tempStruct2;
            tempStruct2.m_fullFilePath02 = m_verifyFullFileNames01.at(i);
            tempStruct2.m_filePath02 = m_verifyFilePaths01.at(i);
            tempStruct2.m_relativeFilePath02 = m_verifyRelativeFilePaths01.at(i);
            tempStruct2.m_fileName02 = m_verifyFileNames01.at(i);
            tempStruct2.m_checksum02 = m_verifyChecksums01.at(i);
            m_diskFileChecksumsList.push_back(tempStruct2);
        }

        ui->textBrowser_prepareVerify01->append("");
        ui->textBrowser_prepareVerify01->append("Checksum1 is looking for matches and other information.");
        ui->textBrowser_prepareVerify01->append("Please be patient, as this may take a little while.");

        m_verifyFuture01 = QtConcurrent::run(this, &MainWindow::setVerifyTables);
        m_watchVerifyFuture01.setFuture(m_verifyFuture01);
    }
    else if(m_verifyHashWatcher.isCanceled())
    {
        ui->textBrowser_prepareVerify01->append("");
        ui->textBrowser_prepareVerify01->append("Verify checksum operation has been canceled.");
        ui->progressBar01->reset();
    }
}


void MainWindow::setVerifyTables()
{
    using namespace std;

    if(! m_watchVerifyFuture01.isCanceled())
    {
        ui->pushButton_viewResults01->setDisabled(true);
        ui->pushButton_cancelVerify01->setEnabled(true);
        ui->pushButton_browse03->setDisabled(true);
        ui->pushButton_Verify01->setDisabled(true);
        ui->pushButton_prepareVerify01->setDisabled(true);
        ui->pushButton_clearAll01->setDisabled(true);

        emit resetProgressBar04();
        ui->tableWidget_matchedFiles01->setRowCount(0);
        ui->tableWidget_matchedDiff01->setRowCount(0);
        ui->tableWidget_unmatchedFiles01->setRowCount(0);
        ui->tableWidget_newFiles01->setRowCount(0);

        int col1 = 0;
        m_row1 = 0;
        int rowCount1 = 1;
        int col2 = 0;
        m_row2 = 0;
        int rowCount2 = 1;
        m_row3 = 0;
        int col3 = 0;
        int rowCount3 = 1;
        int col4 = 0;
        int rowCount4 = 1;
        m_row4 = 0;
        m_currentMatchProgress = 0;

        for(list<TextFileChecksums>::iterator it1 = m_textFileChecksumsList.begin(), end1 = m_textFileChecksumsList.end(); it1 != end1; ++it1)
        {
            for(list<DiskFileChecksums>::iterator it2 = m_diskFileChecksumsList.begin(), end2 = m_diskFileChecksumsList.end(); it2 != end2; ++it2)
            {
                if(m_watchVerifyFuture01.isCanceled())
                {
                    emit cancelVerifySignal01();
                    return;
                }

                m_currentMatchProgress++;

                if(m_currentMatchProgress % 500 == 0 || m_currentMatchProgress == m_maxProgressBar)
                {
                    emit progressBarUpdate04(m_currentMatchProgress);
                    //qDebug() << m_currentMatchProgress;
                }

                if(m_verifyOptions01 == 1)
                {
                    m_file1 = it1->m_fullFilePath01;
                    m_file2 = it2->m_fullFilePath02;
                }
                else if(m_verifyOptions01 == 2)
                {
                    m_file1 = it1->m_relativeFilePath01;
                    m_file2 = it2->m_relativeFilePath02;
                }
                else if(m_verifyOptions01 == 3)
                {
                    m_file1 = it1->m_fileName01;
                    m_file2 = it2->m_fileName02;
                }

                if(it1->m_checksum01 == it2->m_checksum02 && m_file1 == m_file2
                   && it1->m_isMatched01 == false && it2->m_isMatched02 == false)
                {
                    ui->tableWidget_matchedFiles01->setRowCount(rowCount1);
                    ui->tableWidget_matchedFiles01->setItem(m_row1, col1, new QTableWidgetItem(m_file1));
                    ui->tableWidget_matchedFiles01->setItem(m_row1, col1 + 1, new QTableWidgetItem(it1->m_checksum01));
                    ui->tableWidget_matchedFiles01->setItem(m_row1, col1 + 2, new QTableWidgetItem(m_file2));
                    ui->tableWidget_matchedFiles01->setItem(m_row1, col1 + 3, new QTableWidgetItem(it2->m_checksum02));
                    it1->m_isMatched01 = true;
                    it2->m_isMatched02 = true;
                    rowCount1++;
                    m_row1++;

                }
            }
        }

        for(list<TextFileChecksums>::iterator it1 = m_textFileChecksumsList.begin(), end1 = m_textFileChecksumsList.end(); it1 != end1; ++it1)
        {
            for(list<DiskFileChecksums>::iterator it2 = m_diskFileChecksumsList.begin(), end2 = m_diskFileChecksumsList.end(); it2 != end2; ++it2)
            {
                if(m_watchVerifyFuture01.isCanceled())
                {
                    emit cancelVerifySignal01();
                    return;
                }

                m_currentMatchProgress++;

                if(m_currentMatchProgress % 500 == 0 || m_currentMatchProgress == m_maxProgressBar)
                {
                    emit progressBarUpdate04(m_currentMatchProgress);
                    //qDebug() << m_currentMatchProgress;
                }

                if(it1->m_isMatched01 || it2->m_isMatched02)
                {
                    continue;
                }

                if(m_verifyOptions01 == 1)
                {
                    m_file1 = it1->m_fullFilePath01;
                    m_file2 = it2->m_fullFilePath02;
                }
                else if(m_verifyOptions01 == 2)
                {
                    m_file1 = it1->m_relativeFilePath01;
                    m_file2 = it2->m_relativeFilePath02;
                }
                else if(m_verifyOptions01 == 3)
                {
                    m_file1 = it1->m_fileName01;
                    m_file2 = it2->m_fileName02;
                }

                if(it1->m_checksum01 == it2->m_checksum02 && m_file1 != m_file2
                   && it1->m_isMatched01 == false && it2->m_isMatched02 == false)
                {
                    ui->tableWidget_matchedDiff01->setRowCount(rowCount2);
                    ui->tableWidget_matchedDiff01->setItem(m_row2, col2, new QTableWidgetItem(m_file1));
                    ui->tableWidget_matchedDiff01->setItem(m_row2, col2 + 1, new QTableWidgetItem(it1->m_checksum01));
                    ui->tableWidget_matchedDiff01->setItem(m_row2, col2 + 2, new QTableWidgetItem(m_file2));
                    ui->tableWidget_matchedDiff01->setItem(m_row2, col2 + 3, new QTableWidgetItem(it2->m_checksum02));
                    it1->m_isMatched01 = true;
                    it2->m_isMatched02 = true;
                    rowCount2++;
                    m_row2++;
                }
            }
        }

        for(list<TextFileChecksums>::iterator it1 = m_textFileChecksumsList.begin(), end1 = m_textFileChecksumsList.end(); it1 != end1; ++it1)
        {
            if(m_watchVerifyFuture01.isCanceled())
            {
                emit cancelVerifySignal01();
                return;
            }

            m_currentMatchProgress++;

            if(m_currentMatchProgress % 500 == 0 || m_currentMatchProgress == m_maxProgressBar)
            {
                emit progressBarUpdate04(m_currentMatchProgress);
                //qDebug() << m_currentMatchProgress;
            }

            if(it1->m_isMatched01)
            {
                continue;
            }

            if(m_verifyOptions01 == 1)
            {
                m_file1 = it1->m_fullFilePath01;
            }
            else if(m_verifyOptions01 == 2)
            {
                m_file1 = it1->m_relativeFilePath01;
            }
            else if(m_verifyOptions01 == 3)
            {
                m_file1 = it1->m_fileName01;
            }

            if(it1->m_isMatched01 == false)
            {
                ui->tableWidget_unmatchedFiles01->setRowCount(rowCount3);
                ui->tableWidget_unmatchedFiles01->setItem(m_row3, col3, new QTableWidgetItem(m_file1));
                ui->tableWidget_unmatchedFiles01->setItem(m_row3, col3 + 1, new QTableWidgetItem(it1->m_checksum01));
                rowCount3++;
                m_row3++;
            }
        }

        for(list<DiskFileChecksums>::iterator it2 = m_diskFileChecksumsList.begin(), end2 = m_diskFileChecksumsList.end(); it2 != end2; ++it2)
        {
            if(m_watchVerifyFuture01.isCanceled())
            {
                emit cancelVerifySignal01();
                return;
            }

            m_currentMatchProgress++;

            if(m_currentMatchProgress % 500 == 0 || m_currentMatchProgress == m_maxProgressBar)
            {
                emit progressBarUpdate04(m_currentMatchProgress);
                //qDebug() << m_currentMatchProgress;
            }

            if(it2->m_isMatched02)
            {
                continue;
            }

            if(m_verifyOptions01 == 1)
            {
                m_file2 = it2->m_fullFilePath02;
            }
            else if(m_verifyOptions01 == 2)
            {
                m_file2 = it2->m_relativeFilePath02;
            }
            else if(m_verifyOptions01 == 3)
            {
                m_file2 = it2->m_fileName02;
            }

            if(it2->m_isMatched02 == false && m_file2 != "File Not Found" && m_file2 != "Error")
            {
                ui->tableWidget_newFiles01->setRowCount(rowCount4);
                ui->tableWidget_newFiles01->setItem(m_row4, col4, new QTableWidgetItem(m_file2));
                ui->tableWidget_newFiles01->setItem(m_row4, col4 + 1, new QTableWidgetItem(it2->m_checksum02));
                rowCount4++;
                m_row4++;
            }
        }
    }
}


void MainWindow::verifyTablesAreFinished()
{
    ui->pushButton_cancelVerify01->setDisabled(true);
    ui->pushButton_browse03->setEnabled(true);
    ui->pushButton_Verify01->setDisabled(true);
    ui->pushButton_prepareVerify01->setEnabled(true);
    ui->pushButton_clearAll01->setEnabled(true);

    if(! m_watchVerifyFuture01.isCanceled())
    {
        ui->pushButton_viewResults01->setEnabled(true);
        ui->progressBar01->setValue(m_maxProgressBar);
        QString numMatches = QLocale(QLocale::English).toString(m_row1);
        QString numPartMatches = QLocale(QLocale::English).toString(m_row2);
        QString numNoMatches = QLocale(QLocale::English).toString(m_row3);
        QString numNewFiles = QLocale(QLocale::English).toString(m_row4);
        ui->textBrowser_prepareVerify01->append("");
        ui->textBrowser_prepareVerify01->append("");
        ui->textBrowser_prepareVerify01->append(numMatches + " files have been fully verified.");
        ui->textBrowser_prepareVerify01->append(numPartMatches + " files have been verified by checksum, but their filenames are different.");
        ui->textBrowser_prepareVerify01->append(numNoMatches + " files from checksum file could not be verified");
        ui->textBrowser_prepareVerify01->append(numNewFiles + " files are new on disk compared to checksum file and could not be verified.");
    }


    if(m_verifySpecificDirs01)
        m_verifySpecificDirs01 = false;
}


void MainWindow::cancelVerifySlot01()
{
    ui->textBrowser_prepareVerify01->append("");
    ui->textBrowser_prepareVerify01->append("Verify matching operation has been canceled.");
    ui->progressBar01->reset();
}


void MainWindow::on_pushButton_viewResults01_clicked()
{
    ui->stackedWidget03->setCurrentIndex(1);
    on_comboBox_verifyTableViews01_currentIndexChanged(0);
}


void MainWindow::resetProgressBar()
{
    int numTextFiles = m_textFileChecksumsList.size();
    int numDiskFiles = m_diskFileChecksumsList.size();
    ui->progressBar01->reset();
    m_maxProgressBar = (numTextFiles * numDiskFiles * 2 + numTextFiles + numDiskFiles);
    ui->progressBar01->setRange(0, m_maxProgressBar);
    //qDebug() << m_maxProgressBar;
}


void MainWindow::updateProgressBar(int value)
{
    ui->progressBar01->setValue(value);
}


/* This function is simply for saving the "verify" tables, but because Qt doesn't allow using
 * tempates or typedefs with ui-> elements, it is extremely long. */
void MainWindow::on_toolButton_saveTable01_triggered(QAction *arg1)
{
    QString windowTitle;

    if(arg1 == m_saveAllTables01)
        windowTitle = "Save All Tables";
    else if(arg1 == m_saveMatchedTable01)
        windowTitle = "Save Matched Tables";
    else if(arg1 == m_savePartialTable01)
        windowTitle = "Save Partially Matched Tables";
    else if(arg1 == m_saveUnmatchedTable01)
        windowTitle = "Save Unmatched Tables";
    else if(arg1 == m_saveNewTable01)
        windowTitle = "Save New File Tables";

    QFile file = QFileDialog::getSaveFileName(this, windowTitle, QDir::rootPath(), "*.txt *.csv");
    QTextStream data(&file);
    QStringList strList;

    if(file.open(QIODevice::WriteOnly | QIODevice::Truncate))
    {
        //qDebug() << "Open";
        if(arg1 == m_saveAllTables01 || arg1 == m_saveMatchedTable01)
        {
            //qDebug() << "Matched";
            data << "Matched Files: \n";

            for(int r = 0; r < ui->tableWidget_matchedFiles01->rowCount(); r++)
            {
                strList.clear();

                for(int c = 0; c < 2; c++)
                {
                    QTableWidgetItem* item = ui->tableWidget_matchedFiles01->item(r,c);

                    if(!item || item->text().isEmpty())
                    {
                        ui->tableWidget_matchedFiles01->setItem(r, c, new QTableWidgetItem("0"));
                    }
                    strList << ui->tableWidget_matchedFiles01->item(r, c)->text();
                }

                if(r == (ui->tableWidget_matchedFiles01->rowCount() - 1))
                    data << strList.join(",") << "\n" << "\n";
                else
                    data << strList.join(",") << "\n";
            }
        }

        if(arg1 == m_saveAllTables01 || arg1 == m_savePartialTable01)
        {
            //qDebug() << "Partial";
            data << "Unmatched Files, Matched Checksums: \n";

            for(int r = 0; r < ui->tableWidget_matchedDiff01->rowCount(); r++)
            {
                strList.clear();

                for(int c = 0; c < ui->tableWidget_matchedDiff01->columnCount(); c++)
                {
                    QTableWidgetItem* item = ui->tableWidget_matchedDiff01->item(r,c);

                    if(!item || item->text().isEmpty())
                    {
                        ui->tableWidget_matchedDiff01->setItem(r, c, new QTableWidgetItem("0"));
                    }
                    strList << ui->tableWidget_matchedDiff01->item(r, c)->text();
                }

                if(r == (ui->tableWidget_matchedDiff01->rowCount() - 1))
                    data << strList.join(",") << "\n" << "\n";
                else
                    data << strList.join(",") << "\n";
            }
        }

        if(arg1 == m_saveAllTables01 || arg1 == m_saveUnmatchedTable01)
        {
            //qDebug() << "Unmatched";
            data << "Unmatched Files, Unmatched Checksums: \n";

            for(int r = 0; r < ui->tableWidget_unmatchedFiles01->rowCount(); r++)
            {
                strList.clear();

                for(int c = 0; c < ui->tableWidget_unmatchedFiles01->columnCount(); c++)
                {
                    QTableWidgetItem* item = ui->tableWidget_unmatchedFiles01->item(r,c);

                    if(!item || item->text().isEmpty())
                    {
                        ui->tableWidget_unmatchedFiles01->setItem(r, c, new QTableWidgetItem("0"));
                    }
                    strList << ui->tableWidget_unmatchedFiles01->item(r, c)->text();
                }

                if(r == (ui->tableWidget_unmatchedFiles01->rowCount() - 1))
                    data << strList.join(",") << "\n" << "\n";
                else
                    data << strList.join(",") << "\n";
            }
        }

        if(arg1 == m_saveAllTables01 || arg1 == m_saveNewTable01)
        {
            //qDebug() << "New";
            data << "New Files On Disk: \n";

            for(int r = 0; r < ui->tableWidget_newFiles01->rowCount(); r++)
            {
                strList.clear();

                for(int c = 0; c < ui->tableWidget_newFiles01->columnCount(); c++)
                {
                    QTableWidgetItem* item = ui->tableWidget_newFiles01->item(r,c);

                    if(!item || item->text().isEmpty())
                    {
                        ui->tableWidget_newFiles01->setItem(r, c, new QTableWidgetItem("0"));
                    }
                    strList << ui->tableWidget_newFiles01->item(r, c)->text();
                }

                if(r == (ui->tableWidget_newFiles01->rowCount() - 1))
                    data << strList.join(",") << "\n" << "\n";
                else
                    data << strList.join(",") << "\n";
            }
        }
    }

    if(file.isOpen())
    {
        file.close();
        statusBar()->showMessage(tr("File saved successfully."), 3000);
    }
}


/* This function changes the "page" based on what is set in each pages combobox. The first combobox
 * is connected to this function. The rest of the comboboxes are connected through connections in
 * the constructor. */
void MainWindow::on_comboBox_verifyTableViews01_currentIndexChanged(int index)
{
    if(index == 0)
        ui->comboBox_verifyTableViews01->setCurrentIndex(0);
    else if(index == 1)
        ui->comboBox_verifyTableViews02->setCurrentIndex(1);
    else if(index == 2)
        ui->comboBox_verifyTableViews03->setCurrentIndex(2);
    else if(index == 3)
        ui->comboBox_verifyTableViews04->setCurrentIndex(3);

    ui->stackedWidget03->setCurrentIndex(index + 1);
}


void MainWindow::on_pushButton_returnToVerify01_clicked()
{
    ui->stackedWidget03->setCurrentIndex(0);
}


void MainWindow::on_pushButton_clearAll01_clicked()
{
    ui->lineEdit_selectVerifyFile01->clear();
    ui->textBrowser_prepareVerify01->clear();
    ui->listWidget_verifyAgainst01->clear();
    ui->tableWidget_matchedFiles01->setRowCount(0);
    ui->tableWidget_matchedDiff01->setRowCount(0);
    ui->tableWidget_unmatchedFiles01->setRowCount(0);

    ui->pushButton_viewResults01->setDisabled(true);
    ui->pushButton_cancelVerify01->setDisabled(true);
    ui->pushButton_Verify01->setDisabled(true);
    ui->progressBar01->reset();

    m_verifyFilePathVector.clear();
    m_dirsToVerify01.clear();
}


//-----Checksum-Text-Below-----------------------------------------------------------------------------------


void MainWindow::on_plainTextEdit_userText01_textChanged()
{
    m_opensslChecksum01->setHashType01(ui->comboBox_hashType04->currentIndex());
    m_opensslChecksum01->setCallingFunction01(2);

    m_userText = ui->plainTextEdit_userText01->toPlainText();
    ui->lineEdit_textChecksum01->clear();
    m_textHash04 = m_opensslChecksum01->textHash01(m_userText);
    ui->lineEdit_textChecksum01->setText(m_textHash04);

    if(ui->plainTextEdit_userText01->toPlainText().isEmpty())
        ui->lineEdit_textChecksum01->clear();
}


void MainWindow::on_comboBox_hashType04_currentIndexChanged(int index)
{
    m_opensslChecksum01->setHashType01(index);
    on_plainTextEdit_userText01_textChanged();
}


void MainWindow::on_checkBox_toUpper04_stateChanged(int arg1)
{
    if(arg1 == 0)
    {
        m_textHash04 = m_textHash04.toLower();
        ui->lineEdit_textChecksum01->setText(m_textHash04);
        if(ui->plainTextEdit_userText01->toPlainText().isEmpty())
            ui->lineEdit_textChecksum01->clear();
    }

    if(arg1 == 2)
    {
        m_textHash04 = m_textHash04.toUpper();
        ui->lineEdit_textChecksum01->setText(m_textHash04);
        if(ui->plainTextEdit_userText01->toPlainText().isEmpty())
            ui->lineEdit_textChecksum01->clear();
    }
}


void MainWindow::on_pushButton_compare04_released()
{
    m_calcHash04 = ui->lineEdit_textChecksum01->text();
    m_userHash04 = ui->lineEdit_compare04->text();

    m_calcHash04 = m_calcHash04.simplified();
    m_calcHash04.replace( " ", "" );
    m_userHash04 = m_userHash04.simplified();
    m_userHash04.replace( " ", "" );

    int compareVal01 = QString::compare(m_calcHash04, m_userHash04, Qt::CaseInsensitive);
    // qDebug() << compareVal01;
    if(compareVal01 == 0)
    {
        QMessageBox::information(this, "Checksums match.", "Checksums match!");
    }
    else
    {
        QMessageBox::critical(this, "Checksums do not match.", "Checksums do not match.");
    }
}



//-----Copy/Compare--File-Copy-Below-------------------------------------------------------------------------


void MainWindow::on_pushButton_resetView05_released()
{
    if(ui->radioButton_useTree05->isChecked())
    {
        m_resetView01 = false;
        m_checkProxy02->resetToDefault();
        delete m_fsModel02;
        m_fsModel02 = new QFileSystemModel(this);
        //m_fsModel01 = new CheckableFileModel(this);
        ui->progressBar01->reset();
        newView02();
    }

    if(ui->radioButton_useBrowse05->isChecked())
    {
        ui->lineEdit_fileText05->clear();
        ui->listWidget_selectedDirs05->clear();
        ui->listWidget_selectedFiles05->clear();
        m_browsedDirs05.clear();
        m_browsedFiles05.clear();
    }
}


void MainWindow::newView02()
{
    m_fsModel02->setOptions(m_qfsOptions01);
    m_fsModel02->setFilter(m_qdirFilters01);
    m_fsModel02->setRootPath(QDir::rootPath());

    //m_checkableModel->setSourceModel(m_fsModel01);
    //ui->treeViewFiles01->setModel(m_checkableModel);
    //QModelIndex rootP = m_checkableModel->index(0, 0);
    //m_fsModel01->setRootPath(QDir::homePath());
    //ui->treeViewFiles01->setModel(m_fsModel01);

    m_checkProxy02->setSourceModel(m_fsModel02);
    ui->treeViewFiles05->setModel(m_checkProxy02);
    ui->treeViewFiles05->setExpandsOnDoubleClick(true);
    ui->label_copyType05_02->setText("Nothing is selected.");

    QModelIndex rootP = m_checkProxy02->index(0, 0);
    ui->treeViewFiles05->expand(rootP);
    fsQtimer05.start(250);

    if(m_resetView01)
    {
        on_pushButton_resetView05_released();
    }
}


void MainWindow::checkTreeOrBrowse02()
{
    if(ui->radioButton_useTree05->isChecked())
    {
        ui->frame05_05->setEnabled(true);
        ui->frame05_06->setDisabled(true);
        ui->stackedWidget05->setCurrentIndex(0);
        ui->lineEdit_fileText05->clear();
    }
    else if(ui->radioButton_useBrowse05->isChecked())
    {
        ui->frame05_05->setEnabled(true);
        ui->frame05_06->setEnabled(true);
        ui->stackedWidget05->setCurrentIndex(1);
    }
}


void MainWindow::expandColumn02()
{
    ui->treeViewFiles05->resizeColumnToContents(0);
    fsQtimer05.stop();
}


void MainWindow::repaint_treeView02()
{
    ui->treeViewFiles05->dataChanged(QModelIndex(), QModelIndex());
    m_checkProxy02->checkedState()->checkedLeafSourceModelIndexes(m_selectedFiles05);
    m_checkProxy02->checkedState()->checkedBranchSourceModelIndexes(m_selectedDirectories05);

    if(m_selectedDirectories05.size() > 0 && m_selectedFiles05.size() == 0)
        ui->label_copyType05_02->setText("Folder Copy.");
    else if(m_selectedDirectories05.size() == 0 && m_selectedFiles05.size() > 0)
        ui->label_copyType05_02->setText("File Copy.");
    else if(m_selectedDirectories05.size() > 0 && m_selectedFiles05.size() > 0)
        ui->label_copyType05_02->setText("Folder and file copy.");
    else if(m_selectedDirectories05.size() == 0 && m_selectedFiles05.size() == 0)
        ui->label_copyType05_02->setText("Nothing is selected.");
}


void MainWindow::on_pushButton_browseDirs05_clicked()
{
    QFileDialog fileDialog(this);
    fileDialog.setFileMode(QFileDialog::Directory);
    fileDialog.setDirectory(QDir::rootPath());

    if(fileDialog.exec())
    {
        if(m_browsedDirs05.contains(fileDialog.selectedFiles().at(0)))
        {
            QMessageBox::warning(this, "Directory Has Already Been Added.", "That directory has already been added.");
            return on_pushButton_browseDirs05_clicked();
        }
        else
        {
            m_browsedDirs05.append(fileDialog.selectedFiles().toVector());
            ui->listWidget_selectedDirs05->addItem(fileDialog.selectedFiles().at(0));
        }
    }
}


void MainWindow::on_pushButton_browseFiles05_clicked()
{
    QFileDialog fileDialog(this);
    fileDialog.setFileMode(QFileDialog::ExistingFiles);
    fileDialog.setDirectory(QDir::rootPath());

    if(fileDialog.exec())
    {
        for(int i = 0; i < fileDialog.selectedFiles().count(); i++)
        {
            if(m_browsedFiles05.contains(fileDialog.selectedFiles().at(i)))
            {
                QMessageBox::warning(this, "File(s) Have Already Been Added.", "One of these files has already been added.");
                return on_pushButton_browseFiles05_clicked();
            }
            else
            {
                ui->listWidget_selectedFiles05->addItem(fileDialog.selectedFiles().at(i));
            }
        }
        m_browsedFiles05.append(fileDialog.selectedFiles().toVector());
    }
}


void MainWindow::on_pushButton_add05_clicked()
{
    m_pathName05 = ui->lineEdit_fileText05->text();
    QFileInfo fileInfo(m_pathName05);

    if(m_pathName05.isEmpty())
    {
        QMessageBox::information(this, "No Directory Selected",
        "There is no directory or file selected. Please select a directory or file.");
    }
    else if(!fileInfo.isDir() && !fileInfo.isFile())
    {
        QMessageBox::information(this, "Invalid Path",
        "The path you have entered is not valid. Please enter a valid path to a directory or file.");
    }
    else if(m_browsedDirs05.contains(m_pathName05) || m_browsedFiles05.contains(m_pathName05))
    {
        QMessageBox::warning(this, "Item Has Already Been Added.", "This item has already been added.");
        return;
    }
    else
    {
        if(fileInfo.isDir())
        {
            ui->listWidget_selectedDirs05->addItem(m_pathName05);
            m_browsedDirs05.append(m_pathName05);
        }

        if(fileInfo.isFile())
        {
            ui->listWidget_selectedFiles05->addItem(m_pathName05);
            m_browsedFiles05.append(m_pathName05);
        }

        m_pathName05 = "";
        ui->lineEdit_fileText05->setText(m_pathName05);
    }
}


void MainWindow::on_pushButton_delete05_clicked()
{
    QStringList itemsToDelete01;
    int count = 0;

    foreach (QListWidgetItem *item, ui->listWidget_selectedDirs05->selectedItems())
    {
        itemsToDelete01 << item->text();
        m_browsedDirs05.removeAll(itemsToDelete01.at(count));
        count++;
        delete ui->listWidget_selectedDirs05->takeItem(ui->listWidget_selectedDirs05->row(item));
    }

    QStringList itemsToDelete02;
    count = 0;

    foreach (QListWidgetItem *item, ui->listWidget_selectedFiles05->selectedItems())
    {
        itemsToDelete02 << item->text();
        m_browsedFiles05.removeAll(itemsToDelete02.at(count));
        count++;
        delete ui->listWidget_selectedFiles05->takeItem(ui->listWidget_selectedFiles05->row(item));
    }
}


void MainWindow::on_lineEdit_fileText05_returnPressed()
{
    on_pushButton_add05_clicked();
}


void MainWindow::on_pushButton_settings05_clicked()
{
    m_settings01->open();
    m_settings01->on_StartSettings01();
}


void MainWindow::on_radioButton_useTree05_clicked()
{
    checkTreeOrBrowse02();
}


void MainWindow::on_radioButton_useBrowse05_clicked()
{
    checkTreeOrBrowse02();
}


void MainWindow::on_pushButton_copy_compare05_01_clicked()
{
    on_pushButton_copy_compare05_02_clicked();
}


void MainWindow::on_pushButton_copy_compare05_02_clicked()
{
    if(ui->radioButton_useTree05->isChecked())
    {
        m_selectedFiles05.clear();
        m_selectedDirectories05.clear();
        m_checkProxy02->checkedState()->checkedLeafSourceModelIndexes(m_selectedFiles05);
        m_checkProxy02->checkedState()->checkedBranchSourceModelIndexes(m_selectedDirectories05);

        if (m_selectedFiles05.isEmpty() && m_selectedDirectories05.isEmpty())
        {
            QMessageBox::information(this, "Nothing Is Selected",
                                     "No files or directories are selected. Please select a file or directory.");
            return;
        }

        prepareCopyDisplay02();
        QGuiApplication::setOverrideCursor(Qt::WaitCursor);
        m_prepareForCopy05 = QtConcurrent::run(this, &MainWindow::treeCopy02);
        m_watcherPrepareCopy05.setFuture(m_prepareForCopy05);
    }

    if(ui->radioButton_useBrowse05->isChecked())
    {
        if (m_browsedDirs05.isEmpty() && m_browsedFiles05.isEmpty())
        {
            QMessageBox::information(this, "Nothing Is Selected",
                                     "No directories or files have been added. Please add a directory or file.");
            return;
        }

        prepareCopyDisplay02();
        QGuiApplication::setOverrideCursor(Qt::WaitCursor);
        m_prepareForCopy05 = QtConcurrent::run(this, &MainWindow::browseCopy02);
        m_watcherPrepareCopy05.setFuture(m_prepareForCopy05);
    }
}


void MainWindow::prepareCopyDisplay02()
{
    ui->textBrowser_showCopy05->clear();
    ui->stackedWidget05->setCurrentIndex(2);
    ui->textBrowser_showCopy05->append("Please Wait...");
    ui->textBrowser_showCopy05->append("Preparing File Information...");
    ui->progressBar01->reset();
    ui->frame05_05->setDisabled(true);
    ui->frame05_06->setDisabled(true);
    ui->pushButton_viewResults05->setDisabled(true);
    ui->pushButton_startCopy05->setDisabled(true);
    ui->pushButton_cancelCopy05->setDisabled(true);
}


void MainWindow::treeCopy02()
{
    m_selectedFilePaths05_01.clear();
    m_selectedFileNames05_01.clear();
    m_selectedFilePaths05_02.clear();
    m_dirsToCopy05.clear();
    m_selectedDirs05.clear();
    m_sizeOfFiles01 = 0;
    m_fileCounter01 = 0;

    for (int i = 0; i < m_selectedDirectories05.count(); i++)
    {
        QDirIterator it1(m_fsModel02->filePath(m_selectedDirectories05.at(i)), m_qdirFilters01, m_qdirIteratorFlags01);
        QDirIterator it2(m_fsModel02->filePath(m_selectedDirectories05.at(i)), QDir::Dirs | QDir::NoDotAndDotDot, m_qdirIteratorFlags01);
        //qDebug() << m_fsModel02->filePath(m_selectedDirectories05.at(i));
        QFileInfo tempFileInfo = m_fsModel02->fileInfo(m_selectedDirectories05.at(i));
        m_dirsToCopy05.append(tempFileInfo.absoluteFilePath());
        //qDebug() << m_dirsToCopy05.at(i);

        while (it1.hasNext())
        {
            QFileInfo f1(it1.next());
            QFileInfo f2;
            QFile file1(it1.filePath());
            QString fileNameString1 = file1.fileName();
            // Old: if(f2.isSymLink() && f2.size() == QFileInfo(f2.symLinkTarget()).size() && ! m_qdirIteratorFlags01.testFlag(QDirIterator::FollowSymlinks))

            if(f1.isShortcut() && ! m_qdirIteratorFlags01.testFlag(QDirIterator::FollowSymlinks))
            {
                QFile shortCutFile01(it1.filePath());
                if(shortCutFile01.open(QIODevice::ReadOnly))
                {
                    m_selectedFilePaths05_01.append(f1.absoluteFilePath());
                    m_selectedFileNames05_01.append(f1.fileName());
                    m_sizeOfFiles01 += shortCutFile01.size();
                    m_fileCounter01++;
                    shortCutFile01.close();
                    //qDebug() << "File shortcut added from tree view: " << f1.absoluteFilePath();
                }
            }
            else if(f1.isShortcut() && m_qdirIteratorFlags01.testFlag(QDirIterator::FollowSymlinks))
            {
                QFileInfo shortCutTarget01(f1.symLinkTarget());
                if(shortCutTarget01.exists())
                {
                    m_selectedFilePaths05_01.append(shortCutTarget01.absoluteFilePath());
                    m_selectedFileNames05_01.append(shortCutTarget01.fileName());
                    m_sizeOfFiles01 += shortCutTarget01.size();
                    m_fileCounter01++;
                    //qDebug() << "File target from shortcut added from tree view: " << shortCutTarget01.absoluteFilePath();
                }
            }
            else if(f1.isSymbolicLink() && ! m_qdirIteratorFlags01.testFlag(QDirIterator::FollowSymlinks))
            {
                QFile symLinkFile01(it1.filePath());
                if(symLinkFile01.open(QIODevice::ReadOnly))
                {
                    m_selectedFilePaths05_01.append(f1.absoluteFilePath());
                    m_selectedFileNames05_01.append(f1.fileName());
                    m_sizeOfFiles01 += symLinkFile01.size();
                    m_fileCounter01++;
                    symLinkFile01.close();
                    //qDebug() << "Symbolic link to file added from tree view: " << f1.absoluteFilePath();
                }
            }
            else if(f1.isSymbolicLink() && m_qdirIteratorFlags01.testFlag(QDirIterator::FollowSymlinks))
            {
                QFileInfo symLinkTarget01(f1.symLinkTarget());
                if(symLinkTarget01.exists())
                {
                    m_selectedFilePaths05_01.append(symLinkTarget01.absoluteFilePath());
                    m_selectedFileNames05_01.append(symLinkTarget01.fileName());
                    m_sizeOfFiles01 += symLinkTarget01.size();
                    m_fileCounter01++;
                    //qDebug() << "Target from symbolic link added from tree view: " << symLinkTarget01.absoluteFilePath();
                }
            }
            else if(f1.isFile() && ! f1.isShortcut())
            {
                m_selectedFilePaths05_01.append(f1.absoluteFilePath());
                m_selectedFileNames05_01.append(f1.fileName());
                m_sizeOfFiles01 += f1.size();
                m_fileCounter01++;
            }
            else if(fileNameString1.contains(".lnk", Qt::CaseInsensitive) && ! fileNameString1.endsWith(".lnk", Qt::CaseInsensitive))
            {
                while(! fileNameString1.endsWith(".lnk", Qt::CaseInsensitive))
                {
                    QDir dir1(it1.filePath());
                    dir1.cdUp();
                    fileNameString1 = dir1.absolutePath();
                }

                file1.setFileName(fileNameString1);
                f2.setFile(file1);

                if(file1.open(QIODevice::ReadOnly))
                {
                    m_selectedFilePaths05_01.append(f2.absoluteFilePath());
                    m_selectedFileNames05_01.append(f2.fileName());
                    m_sizeOfFiles01 += file1.size();
                    m_fileCounter01++;
                    file1.close();
                    //qDebug() << "File shortcut added from tree view: " << f1.absoluteFilePath();
                }
            }
        }

        while(it2.hasNext())
        {
            it2.next();
            QDir targetDir(m_fsModel02->filePath(m_selectedDirectories05.at(i)));
            QFileInfo fInfo = it2.fileInfo();
            if(fInfo.isDir() && ! fInfo.isShortcut())
            {
                QString relativePath = QString(targetDir.relativeFilePath(fInfo.absoluteFilePath()));
                m_dirs05.append(relativePath);
                //qDebug() << relativePath;
            }
        }

        m_selectedDirs05.append(m_dirs05);
        m_dirs05.clear();
    }

    for (int i = 0; i < m_selectedFiles05.count(); i++)
    {
        QFileInfo f4 = m_fsModel02->fileInfo(m_selectedFiles05.at(i));
        m_selectedFilePaths05_02.append(f4.absoluteFilePath());
        m_selectedFileNames05_02.append(f4.fileName());
        m_sizeOfFiles01 += f4.size();
        m_fileCounter01++;
    }

    m_sizeOfFilesVector01 = m_selectedFilePaths05_01.count();
    m_numberOfThreads01 = QThreadPool::globalInstance()->maxThreadCount();
}


void MainWindow::browseCopy02()
{
    m_selectedFilePaths05_01.clear();
    m_selectedFileNames05_01.clear();
    m_selectedDirs05.clear();
    m_dirsToCopy05.clear();
    m_sizeOfFiles01 = 0;
    m_fileCounter01 = 0;

    for(int i = 0; i < m_browsedDirs05.count(); i++)
    {
        QDirIterator it1(m_browsedDirs05.at(i), m_qdirFilters01, m_qdirIteratorFlags01);
        QDirIterator it2(m_browsedDirs05.at(i), QDir::Dirs | QDir::NoDotAndDotDot, m_qdirIteratorFlags01);
        m_dirsToCopy05.append(m_browsedDirs05.at(i));

        while (it1.hasNext())
        {
            QFileInfo f1(it1.next());
            QFileInfo f2;
            QFile file1(it1.filePath());
            QString fileNameString1 = file1.fileName();

            if(f1.isShortcut() && ! m_qdirIteratorFlags01.testFlag(QDirIterator::FollowSymlinks))
            {
                QFile shortCutFile01(it1.filePath());
                if(shortCutFile01.open(QIODevice::ReadOnly))
                {
                    m_selectedFilePaths05_01.append(f1.absoluteFilePath());
                    m_selectedFileNames05_01.append(f1.fileName());
                    m_sizeOfFiles01 += shortCutFile01.size();
                    m_fileCounter01++;
                    shortCutFile01.close();
                    //qDebug() << "File shortcut added from browse view: " << f1.absoluteFilePath();
                }
            }
            else if(f1.isShortcut() && m_qdirIteratorFlags01.testFlag(QDirIterator::FollowSymlinks))
            {
                QFileInfo shortCutTarget01(f1.symLinkTarget());
                if(shortCutTarget01.exists())
                {
                    m_selectedFilePaths05_01.append(shortCutTarget01.absoluteFilePath());
                    m_selectedFileNames05_01.append(shortCutTarget01.fileName());
                    m_sizeOfFiles01 += shortCutTarget01.size();
                    m_fileCounter01++;
                    //qDebug() << "File target from shortcut added from browse view: " << shortCutTarget01.absoluteFilePath();
                }
            }
            else if(f1.isSymbolicLink() && ! m_qdirIteratorFlags01.testFlag(QDirIterator::FollowSymlinks))
            {
                QFile symLinkFile01(it1.filePath());
                if(symLinkFile01.open(QIODevice::ReadOnly))
                {
                    m_selectedFilePaths05_01.append(f1.absoluteFilePath());
                    m_selectedFileNames05_01.append(f1.fileName());
                    m_sizeOfFiles01 += symLinkFile01.size();
                    m_fileCounter01++;
                    symLinkFile01.close();
                    //qDebug() << "Symbolic link to file added from browse view: " << f1.absoluteFilePath();
                }
            }
            else if(f1.isSymbolicLink() && m_qdirIteratorFlags01.testFlag(QDirIterator::FollowSymlinks))
            {
                QFileInfo symLinkTarget01(f1.symLinkTarget());
                if(symLinkTarget01.exists())
                {
                    m_selectedFilePaths05_01.append(symLinkTarget01.absoluteFilePath());
                    m_selectedFileNames05_01.append(symLinkTarget01.fileName());
                    m_sizeOfFiles01 += symLinkTarget01.size();
                    m_fileCounter01++;
                    //qDebug() << "Target from symbolic link added from browse view: " << symLinkTarget01.absoluteFilePath();
                }
            }
            else if(f1.isFile() && ! f1.isShortcut())
            {
                m_selectedFilePaths05_01.append(f1.absoluteFilePath());
                m_selectedFileNames05_01.append(f1.fileName());
                m_sizeOfFiles01 += f1.size();
                m_fileCounter01++;
            }
            else if(fileNameString1.contains(".lnk", Qt::CaseInsensitive) && ! fileNameString1.endsWith(".lnk", Qt::CaseInsensitive))
            {
                while(! fileNameString1.endsWith(".lnk", Qt::CaseInsensitive))
                {
                    QDir dir1(it1.filePath());
                    dir1.cdUp();
                    fileNameString1 = dir1.absolutePath();
                }

                file1.setFileName(fileNameString1);
                f2.setFile(file1);

                if(file1.open(QIODevice::ReadOnly))
                {
                    m_selectedFilePaths05_01.append(f2.absoluteFilePath());
                    m_selectedFileNames05_01.append(f2.fileName());
                    m_sizeOfFiles01 += file1.size();
                    m_fileCounter01++;
                    file1.close();
                    //qDebug() << "File shortcut added from tree view: " << f1.absoluteFilePath();
                }
            }
        }

        while(it2.hasNext())
        {
            it2.next();
            QDir targetDir(m_browsedDirs05.at(i));
            QFileInfo fInfo = it2.fileInfo();
            if(fInfo.isDir() && ! fInfo.isShortcut())
            {
                QString relativePath = QString(targetDir.relativeFilePath(fInfo.absoluteFilePath()));
                m_dirs05.append(relativePath);
            }
        }

        m_selectedDirs05.append(m_dirs05);
        m_dirs05.clear();
    }

    for(int i = 0; i < m_browsedFiles05.count(); i++)
    {
        QFileInfo f1(m_browsedFiles05.at(i));
        m_selectedFilePaths05_02.append(f1.absoluteFilePath());
        m_selectedFileNames05_02.append(f1.fileName());
        m_sizeOfFiles01 += f1.size();
        m_fileCounter01++;
    }

    m_sizeOfFilesVector01 = m_selectedFilePaths05_01.count();
    m_numberOfThreads01 = QThreadPool::globalInstance()->maxThreadCount();
}


void MainWindow::setCopyDisplay02()
{
    m_destination05.clear();
    QFileDialog fileDialog(this);
    fileDialog.setFileMode(QFileDialog::Directory);
    fileDialog.setDirectory(QDir::rootPath());

    if(fileDialog.exec())
    {
        m_destination05 = fileDialog.selectedFiles();
    }
    else
    {
        ui->textBrowser_showCopy05->clear();
        ui->textBrowser_showCopy05->append("Error, user must select a destination to copy to.");
        QGuiApplication::restoreOverrideCursor();
        return;
    }

    m_numFilesString01 = QLocale(QLocale::English).toString(m_sizeOfFilesVector01);
    m_sizeOfFilesStr01 = QLocale(QLocale::English).toString(m_sizeOfFiles01);
    m_numberOfThreadsStr01 = QLocale(QLocale::English).toString(m_numberOfThreads01);

    ui->textBrowser_showCopy05->clear();
    ui->progressBar01->reset();
    ui->progressBar01->setRange(0, m_selectedFilePaths05_01.size());
    m_bytesCopied05 = 0;

    if(m_listAllFiles01)
    {
        for(int i = 0; i < m_sizeOfFilesVector01; i++)
            ui->textBrowser_showCopy05->append(m_selectedFilePaths05_01.at(i));
        ui->textBrowser_showCopy05->append("");
    }

    ui->textBrowser_showCopy05->append("There are " + m_numFilesString01 + " files selected.");
    ui->textBrowser_showCopy05->append("Total size of files selected is " + m_sizeOfFilesStr01 + " bytes.");
    ui->textBrowser_showCopy05->append("Checksum1 will copy the files and directories to " + m_destination05.at(0));
    ui->textBrowser_showCopy05->append("Checksum1 will use " + m_numberOfThreadsStr01 + " thread(s).");
    ui->pushButton_startCopy05->setEnabled(true);
    ui->pushButton_cancelCopy05->setDisabled(true);
    ui->pushButton_return05->setEnabled(true);
    QGuiApplication::restoreOverrideCursor();
    //qDebug() << m_selectedDirs05;
}


void MainWindow::on_pushButton_return05_clicked()
{
    ui->pushButton_startCopy05->setEnabled(true);
    ui->progressBar01->reset();
    checkTreeOrBrowse02();
}


void MainWindow::on_pushButton_startCopy05_clicked()
{
    m_filesToCopySameAsDest05 = 0;
    m_filesToCopyPresent05 = 0;

    ui->pushButton_startCopy05->setDisabled(true);
    ui->pushButton_cancelCopy05->setEnabled(true);
    ui->pushButton_return05->setDisabled(true);
    ui->pushButton_viewResults05->setDisabled(true);
    ui->textBrowser_showCopy05->append("");

    if(m_destination05.isEmpty())
    {
        ui->textBrowser_showCopy05->append("Error, user must select a destination to copy to.");
        setCopyDisplay02();
        return;
    }

    if(checkIfFoldersExist05())
    {
        setCopyDisplay02();
        return;
    }

    ui->textBrowser_showCopy05->append("Copying Files... ");

    m_showCopyCursor05 = ui->textBrowser_showCopy05->textCursor();

    for(int i = 0; i < m_dirsToCopy05.size(); i++)
    {
        if(m_dirsToCopy05.at(i) == m_destination05.at(0)) qDebug() << "Same!";
        if(! createAllFolders05(m_dirsToCopy05.at(i), m_destination05.at(0))) return;
    }

    prepareToCopyFiles05();
}


bool MainWindow::checkIfFoldersExist05()
{
    bool returnVal = false;

    for(int i = 0; i < m_dirsToCopy05.size(); i++)
    {
        QDir tempDir01(m_dirsToCopy05.at(i));

        if(m_dirsToCopy05.at(i) == m_destination05.at(0))
        {
            m_numberToAppendToDir05.append(i);
            QMessageBox msgBox;
            msgBox.setText("Folder is already present at destination.");
            msgBox.setInformativeText("You are attempting to copy a directory from one location to the same "
                                      "location. This will not end well. Please choose a different location.");
            QPushButton *cancelButton = msgBox.addButton(tr("Cancel"), QMessageBox::RejectRole);
            msgBox.setDefaultButton(cancelButton);
            msgBox.exec();

            if(msgBox.clickedButton() == cancelButton) returnVal = true;
        }

        if(! tempDir01.isRoot())
            tempDir01.cdUp();

        if(tempDir01.absolutePath() == m_destination05.at(0))
        {
            m_numberToAppendToDir05.append(i);
            QMessageBox msgBox;
            msgBox.setText("Folder is already present at destination.");
            msgBox.setInformativeText("You may be attempting to copy a directory from one location to the same "
                                      "location. This will not end well. Please choose a different location.");
            QPushButton *cancelButton = msgBox.addButton(tr("Cancel"), QMessageBox::RejectRole);
            msgBox.setDefaultButton(cancelButton);
            msgBox.exec();

            if(msgBox.clickedButton() == cancelButton) returnVal = true;
        }
    }
    return returnVal;
}


bool MainWindow::createAllFolders05(QString fromDir, QString toDir)
{
    QDir dir(fromDir);
    if(dir != dir.root())
        dir.cdUp();

    //qDebug() << dir.absolutePath();
    QString fromDir1 = dir.absolutePath();


    QDirIterator it1(fromDir, QDir::AllDirs | QDir::NoDotAndDotDot, QDirIterator::Subdirectories);
    int i = 0;

    while(it1.hasNext())
    {
        it1.next();
        const auto fileInfo = it1.fileInfo();
        QString dir1 = it1.filePath();
        //qDebug() << "from dir " << fromDir1;
        QString newDir = dir1.remove(fromDir1);
        if(newDir.startsWith('/') || newDir.startsWith('\'') || newDir.startsWith(QDir::separator()))
            newDir = newDir.remove(0, 1);

        //qDebug() << "newDir" << newDir;

        const QString constructedAbsolutePath = newDir.prepend(toDir + QDir::separator());
        QDir targetDir(constructedAbsolutePath);

        if(targetDir.exists())
        {
            QMessageBox msgBox;
            msgBox.setText("Folder is already present at destination.");
            msgBox.setInformativeText("The folder, " + constructedAbsolutePath + ", already exists in the destination.");
            QPushButton *cancelButton = msgBox.addButton(tr("Cancel"), QMessageBox::RejectRole);
            msgBox.setDefaultButton(cancelButton);
            msgBox.exec();

            if(msgBox.clickedButton() == cancelButton)
            {
                ui->textBrowser_showCopy05->append("File copy and compare has been canceled.");
                ui->pushButton_startCopy05->setEnabled(true);
                ui->pushButton_cancelCopy05->setDisabled(true);
                ui->pushButton_return05->setEnabled(true);
                ui->pushButton_viewResults05->setDisabled(true);
                ui->progressBar01->reset();
                return false;
            }
        }
        //qDebug() << constructedAbsolutePath;


        if(fileInfo.isDir() && ! fileInfo.isShortcut())
        {
            // Create directory in target folder.
            if(! dir.mkpath(constructedAbsolutePath))
            {
                problemCreatingFolders05(constructedAbsolutePath);
                return false;
            }

            i++;
        }

        if(i == m_sizeOfFilesVector01)
            return false;
    }

    return true;
}


void MainWindow::problemCreatingFolders05(QString folder1)
{
    QMessageBox::warning(this, "Checksum1", "Error creating folder " + folder1 + ".");
    ui->textBrowser_showCopy05->insertPlainText("Error creating folders.");
    ui->pushButton_cancelCopy05->setDisabled(true);
    ui->pushButton_return05->setEnabled(true);
}


void MainWindow::prepareToCopyFiles05()
{
    m_originalFiles05.clear();
    m_copiedFiles05.clear();
    m_originalFilesFutureResults05.clear();
    m_copiedFilesFutureResults05.clear();
    m_originalFilesList05.clear();
    m_copiedFilesList05.clear();
    m_originalFileChecksumsList.clear();
    m_copiedFileChecksumsList.clear();
    m_showCopyCursor05 = ui->textBrowser_showCopy05->textCursor();
    m_numFilesCopied05 = 0;

    m_copyFilesFuture05 = QtConcurrent::run(this, &MainWindow::copyFiles05);
    m_copyFilesFutureWatcher05.setFuture(m_copyFilesFuture05);
}


void MainWindow::copyFiles05()
{
    m_filesAreCopied01 = true;

    for(int i = 0; i < m_dirsToCopy05.size(); i++)
    {
        for(int j = 0; j < m_selectedFilePaths05_01.size(); j++)
        {
            if(! m_selectedFilePaths05_01.at(j).contains(m_dirsToCopy05.at(i)))
                continue;

            QDir fromDir(m_dirsToCopy05.at(i));

            if(! fromDir.isRoot())
                fromDir.cdUp();

            QString filePath = m_dirsToCopy05.at(i);
            QString upFilePath = fromDir.absolutePath();
            //qDebug() << "upFilePath" << upFilePath;
            filePath = filePath.remove(upFilePath);
            //qDebug() << "Filepath" << filePath;
            QString originalFile = m_selectedFilePaths05_01.at(j);
            originalFile = originalFile.remove(upFilePath);
            //qDebug() << "altered path" << originalFile;
            QString newPath;

            if(fromDir.isRoot())
                newPath = m_destination05.at(0) + QDir::separator() + originalFile;
            else
                newPath = m_destination05.at(0) + originalFile;

            //qDebug() << "new path" << newPath;
            QDir newPath1(newPath);

            if(newPath1.exists())
            {
                emit fileToCopyIsPresentSignal05(newPath1.absolutePath());
                //qDebug() << "new path1" << newPath;
            }


            if(! QFile::copy(m_selectedFilePaths05_01.at(j), newPath))
            {
                emit fileToCopyIsPresentSignal05(newPath1.absolutePath());
                m_filesAreCopied01 = false;
            }

            if(m_filesAreCopied01)
            {
                m_numFilesCopied05 += 1;
                m_originalFiles05.append(m_selectedFilePaths05_01.at(j));
                m_copiedFiles05.append(newPath1.absolutePath());
                emit progressBarUpdate05(m_numFilesCopied05);
                m_selectedFilePaths05_01.removeAt(j);
                j--;
                //emit progressBarUpdate05(m_numFilesCopied05);
            }
        }
    }
}


void MainWindow::fileToCopyIsPresentSlot05(QString newFile)
{
    //qDebug() << "new path" << newFile;
    QMessageBox::warning(this, "Error Copying File", "Error copying " + newFile + ".");
    m_filesAreCopied01 = false;
}


void MainWindow::updateProgressBar05(int progress)
{
    ui->progressBar01->setValue(progress);
}


void MainWindow::updateProgressBarForThreadedFileCopy05(int progress)
{
    m_numFilesCopied05 += progress;
    ui->progressBar01->setValue(m_numFilesCopied05);
}


void MainWindow::copyIsFinished05()
{
    ui->textBrowser_showCopy05->insertPlainText("Done.");
    beginFirstChecksum05();
}


//-----Copy/Compare--Comparison-Below------------------------------------------------------------------------


void MainWindow::beginFirstChecksum05()
{
    m_compareFullFilePaths05.clear();
    m_compareFilePaths05.clear();
    m_compareFileNames05.clear();
    m_compareChecksums05.clear();
    m_opensslChecksum01->setCallingFunction01(2);
    m_opensslChecksum01->setHashType01(ui->comboBox_hashType05->currentIndex());
    ui->progressBar01->reset();
    ui->progressBar01->setRange(0, m_originalFiles05.size());
    emit m_originalFilesChecksumWatcher05.progressRangeChanged(0, m_originalFiles05.size());
    ui->textBrowser_showCopy05->append("Calculating Original Files Checksums... ");

    auto hashFunc05 = std::bind(&opensslchecksum::ssl_fileHash01, m_opensslChecksum01, std::placeholders::_1);
    m_originalFilesChecksumFuture05 = QtConcurrent::mapped(m_originalFiles05, hashFunc05);
    m_originalFilesChecksumWatcher05.setFuture(m_originalFilesChecksumFuture05);
}


void MainWindow::firstChecksumCompleted05()
{
    for(int i = 0; i < m_originalFilesChecksumFuture05.resultCount(); i++)
    {
        m_originalFilesFutureResults05.append(m_originalFilesChecksumFuture05.resultAt(i));
        QString line = m_originalFilesFutureResults05.at(i);
        m_originalFilesList05 += line.split(',', Qt::SkipEmptyParts);
    }

    for(int i = 0; i < m_originalFilesList05.size(); i++)
    {
        if(i % 2 == 0)
        {
            m_compareFullFilePaths05.append(m_originalFilesList05.at(i));
        }
        else if(i % 2 != 0)
        {
            m_compareChecksums05.append(m_originalFilesList05.at(i).trimmed());
        }
    }

    QString filePath;
    QString fileName;

    for(int i = 0; i < m_compareFullFilePaths05.count(); i++)
    {
        filePath = m_compareFullFilePaths05.at(i);

        if(filePath == "File Not Found")
            m_compareFileNames05.append("File Not Found");
        else if(filePath == "Error")
            m_compareFileNames05.append("Error");
        else if(filePath == "")
            m_compareFileNames05.append("File Not Found");
        else
        {
            QFileInfo f1(filePath);
            fileName = f1.fileName();
            m_compareFileNames05.append(fileName);
        }
    }

    for(int i = 0; i < m_dirsToCopy05.size(); i++)
    {
        for(int j = 0; j < m_originalFiles05.size(); j++)
        {
            if(! m_originalFiles05.at(j).contains(m_dirsToCopy05.at(i)))
                continue;

            QDir fromDir(m_dirsToCopy05.at(i));

            if(! fromDir.isRoot())
                fromDir.cdUp();

            QString filePath = m_dirsToCopy05.at(i);
            QString upFilePath = fromDir.absolutePath();
            filePath = filePath.remove(upFilePath);
            QString originalFile = m_originalFiles05.at(j);
            originalFile = originalFile.remove(upFilePath);
            //qDebug() << "altered path" << originalFile;
            QFileInfo tempFile01 = m_compareFullFilePaths05.at(j);

            if(fromDir.isRoot())
                originalFile = '/' + originalFile;

            OriginalFileChecksums tempStruct;
            tempStruct.m_fullFilePath01 = m_compareFullFilePaths05.at(j);
            tempStruct.m_filePath01 = tempFile01.absolutePath();
            tempStruct.m_fileName01 = m_compareFileNames05.at(j);
            tempStruct.m_relativeFilePath01 = originalFile;
            tempStruct.m_checksum01 = m_compareChecksums05.at(j);

            m_originalFileChecksumsList.push_back(tempStruct);
        }
    }

    ui->textBrowser_showCopy05->insertPlainText("Done.");
    beginSecondChecksum05();
}


void MainWindow::beginSecondChecksum05()
{
    m_compareFullFilePaths05.clear();
    m_compareFilePaths05.clear();
    m_compareFileNames05.clear();
    m_compareChecksums05.clear();
    m_opensslChecksum01->setCallingFunction01(2);
    m_opensslChecksum01->setHashType01(ui->comboBox_hashType05->currentIndex());
    ui->progressBar01->reset();
    ui->progressBar01->setRange(0, m_copiedFiles05.size());
    emit m_copiedFilesChecksumWatcher05.progressRangeChanged(0, m_copiedFiles05.size());
    ui->textBrowser_showCopy05->append("Calculating Copied Files Checksums... ");

    auto hashFunc05 = std::bind(&opensslchecksum::ssl_fileHash01, m_opensslChecksum01, std::placeholders::_1);
    m_copiedFilesChecksumFuture05 = QtConcurrent::mapped(m_copiedFiles05, hashFunc05);
    m_copiedFilesChecksumWatcher05.setFuture(m_copiedFilesChecksumFuture05);
}


void MainWindow::secondChecksumCompleted05()
{
    for(int i = 0; i < m_copiedFilesChecksumFuture05.resultCount(); i++)
    {
        m_copiedFilesFutureResults05.append(m_copiedFilesChecksumFuture05.resultAt(i));
        QString line = m_copiedFilesFutureResults05.at(i);
        m_copiedFilesList05 += line.split(',', Qt::SkipEmptyParts);
    }

    for(int i = 0; i < m_copiedFilesList05.size(); i++)
    {
        if(i % 2 == 0)
        {
            m_compareFullFilePaths05.append(m_copiedFilesList05.at(i));
        }
        else if(i % 2 != 0)
        {
            m_compareChecksums05.append(m_copiedFilesList05.at(i).trimmed());
        }
    }

    QString filePath;
    QString fileName;

    for(int i = 0; i < m_compareFullFilePaths05.count(); i++)
    {
        filePath = m_compareFullFilePaths05.at(i);

        if(filePath == "File Not Found")
            m_compareFileNames05.append("File Not Found");
        else if(filePath == "Error")
            m_compareFileNames05.append("Error");
        else if(filePath == "")
            m_compareFileNames05.append("File Not Found");
        else
        {
            QFileInfo f1(filePath);
            fileName = f1.fileName();
            m_compareFileNames05.append(fileName);
        }
    }

    for(int i = 0; i < m_copiedFiles05.size(); i++)
    {
        QFileInfo tempFile01 = m_compareFullFilePaths05.at(i);
        QString relativeFilePath = m_copiedFiles05.at(i).mid(m_destination05.at(0).length());
        CopiedFileChecksums tempStruct;
        tempStruct.m_fullFilePath02 = m_compareFullFilePaths05.at(i);
        tempStruct.m_filePath02 = tempFile01.absolutePath();
        tempStruct.m_fileName02 = m_compareFileNames05.at(i);
        tempStruct.m_relativeFilePath02 = relativeFilePath;
        tempStruct.m_checksum02 = m_compareChecksums05.at(i);

        m_copiedFileChecksumsList.push_back(tempStruct);
    }

    ui->textBrowser_showCopy05->insertPlainText("Done.");
    setupToCompare05();
}


void MainWindow::setupToCompare05()
{
    ui->textBrowser_showCopy05->append("");
    ui->textBrowser_showCopy05->append("Checksum1 is looking for matches and other information.");
    ui->textBrowser_showCopy05->append("Please be patient, as this may take a little while.");

    m_compareFuture05 = QtConcurrent::run(this, &MainWindow::compareAndSetTables05);
    m_compareFutureWatcher05.setFuture(m_compareFuture05);
}


void MainWindow::compareAndSetTables05()
{
    using namespace std;

    if(! m_compareFutureWatcher05.isCanceled())
    {
        emit resetProgressBar05();
        ui->tableWidget_matchedFiles05->setRowCount(0);
        ui->tableWidget_matchedDiff05->setRowCount(0);
        ui->tableWidget_unmatchedFiles05->setRowCount(0);
        ui->tableWidget_newFiles05->setRowCount(0);

        int col1 = 0;
        m_row1 = 0;
        int rowCount1 = 1;
        int col2 = 0;
        m_row2 = 0;
        int rowCount2 = 1;
        m_row3 = 0;
        int col3 = 0;
        int rowCount3 = 1;
        m_row4 = 0;
        m_currentMatchProgress = 0;

        for(list<OriginalFileChecksums>::iterator it1 = m_originalFileChecksumsList.begin(), end1 = m_originalFileChecksumsList.end(); it1 != end1; ++it1)
        {
            for(list<CopiedFileChecksums>::iterator it2 = m_copiedFileChecksumsList.begin(), end2 = m_copiedFileChecksumsList.end(); it2 != end2; ++it2)
            {
                if(m_compareFutureWatcher05.isCanceled())
                {
                    emit cancelCompare05();
                    return;
                }

                m_currentMatchProgress++;

                if(m_currentMatchProgress % 500 == 0 || m_currentMatchProgress == m_maxProgressBar)
                    emit progressBarUpdate05(m_currentMatchProgress);

                if(m_compareOptions05 == 1)
                {
                    m_file1 = it1->m_fullFilePath01;
                    m_file2 = it2->m_fullFilePath02;
                }
                else if(m_compareOptions05 == 2)
                {
                    m_file1 = it1->m_relativeFilePath01;
                    m_file2 = it2->m_relativeFilePath02;
                }
                else if(m_compareOptions05 == 3)
                {
                    m_file1 = it1->m_fileName01;
                    m_file2 = it2->m_fileName02;
                }

                if(it1->m_checksum01 == it2->m_checksum02 && m_file1 == m_file2
                   && it1->m_isMatched01 == false && it2->m_isMatched02 == false)
                {
                    ui->tableWidget_matchedFiles05->setRowCount(rowCount1);
                    ui->tableWidget_matchedFiles05->setItem(m_row1, col1, new QTableWidgetItem(m_file1));
                    ui->tableWidget_matchedFiles05->setItem(m_row1, col1 + 1, new QTableWidgetItem(it1->m_checksum01));
                    ui->tableWidget_matchedFiles05->setItem(m_row1, col1 + 2, new QTableWidgetItem(m_file2));
                    ui->tableWidget_matchedFiles05->setItem(m_row1, col1 + 3, new QTableWidgetItem(it2->m_checksum02));
                    it1->m_isMatched01 = true;
                    it2->m_isMatched02 = true;
                    rowCount1++;
                    m_row1++;

                }
            }
        }

        for(list<OriginalFileChecksums>::iterator it1 = m_originalFileChecksumsList.begin(), end1 = m_originalFileChecksumsList.end(); it1 != end1; ++it1)
        {
            for(list<CopiedFileChecksums>::iterator it2 = m_copiedFileChecksumsList.begin(), end2 = m_copiedFileChecksumsList.end(); it2 != end2; ++it2)
            {
                if(m_compareFutureWatcher05.isCanceled())
                {
                    emit cancelCompare05();
                    return;
                }

                m_currentMatchProgress++;

                if(m_currentMatchProgress % 500 == 0 || m_currentMatchProgress == m_maxProgressBar)
                    emit progressBarUpdate05(m_currentMatchProgress);

                if(it1->m_isMatched01 || it2->m_isMatched02)
                {
                    continue;
                }

                if(m_compareOptions05 == 1)
                {
                    m_file1 = it1->m_fullFilePath01;
                    m_file2 = it2->m_fullFilePath02;
                }
                else if(m_compareOptions05 == 2)
                {
                    m_file1 = it1->m_relativeFilePath01;
                    m_file2 = it2->m_relativeFilePath02;
                }
                else if(m_compareOptions05 == 3)
                {
                    m_file1 = it1->m_fileName01;
                    m_file2 = it2->m_fileName02;
                }

                if(it1->m_checksum01 == it2->m_checksum02 && m_file1 != m_file2
                   && it1->m_isMatched01 == false && it2->m_isMatched02 == false)
                {
                    ui->tableWidget_matchedDiff05->setRowCount(rowCount2);
                    ui->tableWidget_matchedDiff05->setItem(m_row2, col2, new QTableWidgetItem(m_file1));
                    ui->tableWidget_matchedDiff05->setItem(m_row2, col2 + 1, new QTableWidgetItem(it1->m_checksum01));
                    ui->tableWidget_matchedDiff05->setItem(m_row2, col2 + 2, new QTableWidgetItem(m_file2));
                    ui->tableWidget_matchedDiff05->setItem(m_row2, col2 + 3, new QTableWidgetItem(it2->m_checksum02));
                    it1->m_isMatched01 = true;
                    it2->m_isMatched02 = true;
                    rowCount2++;
                    m_row2++;
                }
            }
        }

        for(list<OriginalFileChecksums>::iterator it1 = m_originalFileChecksumsList.begin(), end1 = m_originalFileChecksumsList.end(); it1 != end1; ++it1)
        {
            if(m_compareFutureWatcher05.isCanceled())
            {
                emit cancelCompare05();
                return;
            }

            m_currentMatchProgress++;

            if(m_currentMatchProgress % 500 == 0 || m_currentMatchProgress == m_maxProgressBar)
                emit progressBarUpdate05(m_currentMatchProgress);

            if(it1->m_isMatched01)
            {
                continue;
            }

            if(m_compareOptions05 == 1)
            {
                m_file1 = it1->m_fullFilePath01;
            }
            else if(m_compareOptions05 == 2)
            {
                m_file1 = it1->m_relativeFilePath01;
            }
            else if(m_compareOptions05 == 3)
            {
                m_file1 = it1->m_fileName01;
            }

            if(it1->m_isMatched01 == false)
            {
                ui->tableWidget_unmatchedFiles05->setRowCount(rowCount3);
                ui->tableWidget_unmatchedFiles05->setItem(m_row3, col3, new QTableWidgetItem(m_file1));
                ui->tableWidget_unmatchedFiles05->setItem(m_row3, col3 + 1, new QTableWidgetItem(it1->m_checksum01));
                rowCount3++;
                m_row3++;
            }
        }

        for(list<CopiedFileChecksums>::iterator it2 = m_copiedFileChecksumsList.begin(), end2 = m_copiedFileChecksumsList.end(); it2 != end2; ++it2)
        {
            if(m_compareFutureWatcher05.isCanceled())
            {
                emit cancelCompare05();
                return;
            }

            m_currentMatchProgress++;

            if(m_currentMatchProgress % 500 == 0 || m_currentMatchProgress == m_maxProgressBar)
                emit progressBarUpdate05(m_currentMatchProgress);

            if(it2->m_isMatched02)
            {
                continue;
            }

            if(m_compareOptions05 == 1)
            {
                m_file2 = it2->m_fullFilePath02;
            }
            else if(m_compareOptions05 == 2)
            {
                m_file2 = it2->m_relativeFilePath02;
            }
            else if(m_compareOptions05 == 3)
            {
                m_file2 = it2->m_fileName02;
            }

            if(it2->m_isMatched02 == false)
            {
                ui->tableWidget_unmatchedFiles05->setRowCount(rowCount3);
                ui->tableWidget_unmatchedFiles05->setItem(m_row3, col3 + 1, new QTableWidgetItem(m_file2));
                ui->tableWidget_unmatchedFiles05->setItem(m_row3, col3 + 2, new QTableWidgetItem(it2->m_checksum02));
                rowCount3++;
                m_row3++;
            }
        }
    }
}


void MainWindow::compareAndSetTablesFinished05()
{
    if(! m_compareFutureWatcher05.isCanceled())
    {
        ui->pushButton_cancelCopy05->setDisabled(true);
        ui->pushButton_return05->setEnabled(true);
        ui->pushButton_viewResults05->setEnabled(true);
        ui->progressBar01->setValue(m_maxProgressBar);
        QString numMatches = QLocale(QLocale::English).toString(m_row1);
        QString numPartMatches = QLocale(QLocale::English).toString(m_row2);
        QString numNoMatches = QLocale(QLocale::English).toString(m_row3);
        ui->textBrowser_showCopy05->append("");
        ui->textBrowser_showCopy05->append("");
        ui->textBrowser_showCopy05->append(numMatches + " files have been fully verified.");
        ui->textBrowser_showCopy05->append(numPartMatches + " files have been verified by checksum, but their filenames are different.");
        ui->textBrowser_showCopy05->append(numNoMatches + " files could not be verified");
    }
}


void MainWindow::resetProgressBarSlot05()
{
    int numOriginalFiles05 = m_originalFileChecksumsList.size();
    int numCopiedFiles05 = m_copiedFileChecksumsList.size();
    ui->progressBar01->reset();
    m_maxProgressBar = (numOriginalFiles05 * numCopiedFiles05 * 2 + numOriginalFiles05 + numCopiedFiles05);
    ui->progressBar01->setRange(0, m_maxProgressBar);
}


void MainWindow::on_pushButton_viewResults05_released()
{
    ui->frame05_05->hide();
    ui->frame05_06->hide();
    ui->stackedWidget05->setCurrentIndex(3);
    on_comboBox_verifyTableViews05_1_currentIndexChanged(0);
}


void MainWindow::on_pushButton_return05_1_released()
{
    ui->frame05_05->show();
    ui->frame05_06->show();
    ui->stackedWidget05->setCurrentIndex(2);
    ui->progressBar01->reset();

    if(ui->radioButton_useTree05->isChecked())
    {
        ui->frame05_05->setEnabled(true);
        ui->frame05_06->setDisabled(true);
    }
    else if(ui->radioButton_useBrowse05->isChecked())
    {
        ui->frame05_05->setEnabled(true);
        ui->frame05_06->setEnabled(true);
    }
}


void MainWindow::on_comboBox_verifyTableViews05_1_currentIndexChanged(int index)
{
    switch(index)
    {
    case 0:
        ui->comboBox_verifyTableViews05_1->setCurrentIndex(0);
        break;

    case 1:
        ui->comboBox_verifyTableViews05_2->setCurrentIndex(1);
        break;

    case 2:
        ui->comboBox_verifyTableViews05_3->setCurrentIndex(2);
        break;
    }

    ui->stackedWidget05->setCurrentIndex(index + 3);
}


void MainWindow::on_toolButton_saveTable05_1_triggered(QAction *arg1)
{
    QString windowTitle;

    if(arg1 == m_saveAllTables05)
        windowTitle = "Save All Tables";
    else if(arg1 == m_saveMatchedTable05)
        windowTitle = "Save Matched Tables";
    else if(arg1 == m_savePartialTable05)
        windowTitle = "Save Partially Matched Tables";
    else if(arg1 == m_saveUnmatchedTable05)
        windowTitle = "Save Unmatched Tables";

    QFile file = QFileDialog::getSaveFileName(this, windowTitle, QDir::rootPath(), "*.txt *.csv");
    QTextStream data(&file);
    QStringList strList;

    if(file.open(QIODevice::WriteOnly | QIODevice::Truncate))
    {
        //qDebug() << "Open";
        if(arg1 == m_saveAllTables05 || arg1 == m_saveMatchedTable05)
        {
            //qDebug() << "Matched";
            data << "Matched Files: \n";

            for(int r = 0; r < ui->tableWidget_matchedFiles05->rowCount(); r++)
            {
                strList.clear();

                for(int c = 0; c < ui->tableWidget_matchedFiles05->columnCount(); c++)
                {
                    QTableWidgetItem* item = ui->tableWidget_matchedFiles05->item(r,c);

                    if(!item || item->text().isEmpty())
                    {
                        ui->tableWidget_matchedFiles05->setItem(r, c, new QTableWidgetItem("0"));
                    }
                    strList << ui->tableWidget_matchedFiles05->item(r, c)->text();
                }

                if(r == (ui->tableWidget_matchedFiles05->rowCount() - 1))
                    data << strList.join(",") << "\n" << "\n";
                else
                    data << strList.join(",") << "\n";
            }
        }

        if(arg1 == m_saveAllTables05 || arg1 == m_savePartialTable05)
        {
            //qDebug() << "Partial";
            data << "Unmatched Files, Matched Checksums: \n";

            for(int r = 0; r < ui->tableWidget_matchedDiff05->rowCount(); r++)
            {
                strList.clear();

                for(int c = 0; c < ui->tableWidget_matchedDiff05->columnCount(); c++)
                {
                    QTableWidgetItem* item = ui->tableWidget_matchedDiff05->item(r,c);

                    if(!item || item->text().isEmpty())
                    {
                        ui->tableWidget_matchedDiff05->setItem(r, c, new QTableWidgetItem("0"));
                    }
                    strList << ui->tableWidget_matchedDiff05->item(r, c)->text();
                }

                if(r == (ui->tableWidget_matchedDiff05->rowCount() - 1))
                    data << strList.join(",") << "\n" << "\n";
                else
                    data << strList.join(",") << "\n";
            }
        }

        if(arg1 == m_saveAllTables05 || arg1 == m_saveUnmatchedTable05)
        {
            //qDebug() << "Unmatched";
            data << "Unmatched Files, Unmatched Checksums: \n";

            for(int r = 0; r < ui->tableWidget_unmatchedFiles05->rowCount(); r++)
            {
                strList.clear();

                for(int c = 0; c < ui->tableWidget_unmatchedFiles05->columnCount(); c++)
                {
                    QTableWidgetItem* item = ui->tableWidget_unmatchedFiles05->item(r,c);

                    if(!item || item->text().isEmpty())
                    {
                        ui->tableWidget_unmatchedFiles05->setItem(r, c, new QTableWidgetItem("0"));
                    }
                    strList << ui->tableWidget_unmatchedFiles05->item(r, c)->text();
                }

                if(r == (ui->tableWidget_unmatchedFiles05->rowCount() - 1))
                    data << strList.join(",") << "\n" << "\n";
                else
                    data << strList.join(",") << "\n";
            }
        }
    }

    if(file.isOpen())
    {
        file.close();
        statusBar()->showMessage(tr("File saved successfully."), 3000);
    }
}


void MainWindow::compareOptionsSlot05(int arg)
{
    m_compareOptions05 = arg;
}


void MainWindow::on_pushButton_cancelCopy05_released()
{
    ui->pushButton_startCopy05->setEnabled(true);
    ui->pushButton_cancelCopy05->setDisabled(true);
    ui->pushButton_return05->setEnabled(true);
    ui->pushButton_viewResults05->setDisabled(true);
    ui->progressBar01->reset();
    ui->textBrowser_showCopy05->append("");
    ui->textBrowser_showCopy05->append("");
    ui->textBrowser_showCopy05->append("Copy and compare has been canceled.");
}



/* Test Code / Old Code:

    The following appears to work for finding and expanding folders in QTreeView.
    I have kept it in case I would like to implement a "resore" function.
    ui->treeViewFiles02->expand(m_checkProxy->mapFromSource(m_fsModel01->index("C:/A1")));
    ui->treeViewFiles02->scrollTo(m_checkProxy->mapFromSource(m_fsModel01->index("C:/A1")));

    An attempt at multithreading with async.
    stdFutureFileHash01 = std::async(std::launch::async, hashFunc01);
    stdFutureFileHashResults01 = stdFutureFileHash01.get();
    for(int i = 0; i < stdFutureFileHashResults01.count(); i++)
        qDebug() << stdFutureFileHashResults01.at(i);
*/
