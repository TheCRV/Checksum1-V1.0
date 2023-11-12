#ifndef OPENSSLCHECKSUM_H
#define OPENSSLCHECKSUM_H

#include <QMainWindow>
#include <QObject>
#include "openssl/evp.h"
#include "settingsmain.h"
#include "ui_settings01.h"
#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <Qt>
#include <QLabel>
#include <QString>
#include <QMessageBox>
#include <QSizePolicy>
#include <QFileDialog>
#include <QFile>
#include <QDir>
#include <QDebug>



class opensslchecksum : public QMainWindow
{
    Q_OBJECT

public:
    explicit opensslchecksum(QWidget *parent = nullptr);
    QVector<QString> ssl_fileHash01(const QString &);
    QString textHash01(const QString &);
    void setHashType01(int hash);
    void setCallingFunction01(int caller);
    void setWriteChecksumsOnly01(int arg1);
    bool m_isCanceled01 = false;


private:
    QString m_hashType01;
    int m_callingFunction01;
    int m_writeChecksumsOnly01 = 0;


signals:
    void progressChangeSignal01(int);
    void resetChecksum01();


public slots:
    void isCanceledSlot01(bool);

};

#endif // OPENSSLCHECKSUM_H
