#include "opensslchecksum.h"


opensslchecksum::opensslchecksum(QWidget *parent) : QMainWindow(parent)
{
}


void opensslchecksum::setHashType01(int hash)
{
    switch(hash)
    {
    case 0:
        m_hashType01 = "MD5";
        break;

    case 1:
        m_hashType01 = "SHA1";
        break;

    case 2:
        m_hashType01 = "SHA256";
        break;

    case 3:
        m_hashType01 = "SHA512";
        break;
    }
}


void opensslchecksum::setCallingFunction01(int caller)
{
    m_callingFunction01 = caller;
}


void opensslchecksum::setWriteChecksumsOnly01(int arg1)
{
    m_writeChecksumsOnly01 = arg1;
}


void opensslchecksum::isCanceledSlot01(bool isCanceled)
{
    m_isCanceled01 = isCanceled;
}


QVector<QString> opensslchecksum::ssl_fileHash01(const QString &File01)
{
    QVector<QString> returnVal;
    QString filePath02;
    QString finalResult01 = "";
    QString finalResult02 = "";

    using namespace std;

    EVP_MD_CTX *mdctx;
    const EVP_MD *md;
    unsigned char md_value[EVP_MAX_MD_SIZE];
    unsigned int md_len;

    QByteArray inUtf8 = m_hashType01.toUtf8();
    const char *hashType = inUtf8.constData();

    md = EVP_get_digestbyname(hashType);

    string fileName = File01.toStdString();
    QFileInfo fileInfo(File01);
    QFile file(File01);
    file.open(QFile::ReadOnly);
    int fileSize01 = file.size();

    ifstream myFile;
    myFile.open(fileName, ios::binary);
    // Buffer size of 1 MB (or any number you like). -Stack Overflow
    size_t buffer_size = 1048576;
    char *buffer = new char[buffer_size];
    mdctx = EVP_MD_CTX_new();

    if(myFile.is_open() && file.bytesAvailable() > 0)
    {
        file.close();
        EVP_DigestInit_ex(mdctx, md, NULL);

        float fileReadProgress01 = buffer_size;
        int percentProgress01 = 0;

        while(myFile)
        {
            if(m_isCanceled01)
            {
                m_isCanceled01 = false;
                emit resetChecksum01();
                returnVal.push_back("");
                return returnVal;
            }

            // Try to read next chunk of data. -Stack Overflow
            myFile.read(buffer, buffer_size);
            // Get the number of bytes actually read. -Stack Overflow
            size_t count = myFile.gcount();
            EVP_DigestUpdate(mdctx, buffer, (int)count);

            percentProgress01 = int(fileReadProgress01 / fileSize01 * 100);
            if(percentProgress01 > 100)
                percentProgress01 = 100;

            if(m_callingFunction01 == 1)
                emit progressChangeSignal01(percentProgress01);

            fileReadProgress01 += count;

            // If nothing has been read, break. -Stack Overflow
            if(!count)
                break;
        }
    }
    else if(! fileInfo.exists())
    {
        file.close();
        myFile.close();

        if(m_writeChecksumsOnly01 == 0)
            finalResult01 = "File Not Found,File Not Found";
        else if(m_writeChecksumsOnly01 == 2)
            finalResult01 = "File Not Found";

        finalResult02 = "File Not Found";

        if(m_callingFunction01 == 1)
            returnVal.push_back(finalResult02);
        else if(m_callingFunction01 == 2)
            returnVal.push_back(finalResult01);

        return returnVal;
    }
    else if(fileSize01 == 0)
    {
        file.close();
        myFile.close();

        if(m_writeChecksumsOnly01 == 0)
            finalResult01 = fileInfo.absoluteFilePath() + "," + "Zero Byte File";
        else if(m_writeChecksumsOnly01 == 2)
            finalResult01 = "Zero Byte File";

        finalResult02 = "Zero Byte File";

        if(m_callingFunction01 == 1)
            returnVal.push_back(finalResult02);
        else if(m_callingFunction01 == 2)
            returnVal.push_back(finalResult01);

        return returnVal;
    }
    else
    {
        //QMessageBox::critical(this, "Error", "Error opening the file.");
        //emit errorFileOpening01();
        file.close();
        myFile.close();

        if(m_writeChecksumsOnly01 == 0)
            finalResult01 = fileInfo.absoluteFilePath() + "," + "Error";
        else if(m_writeChecksumsOnly01 == 2)
            finalResult01 = "Error";

        finalResult02 = "Error";

        if(m_callingFunction01 == 1)
            returnVal.push_back(finalResult02);
        else if(m_callingFunction01 == 2)
            returnVal.push_back(finalResult01);

        return returnVal;
    }

    EVP_DigestFinal_ex(mdctx, md_value, &md_len);
    EVP_MD_CTX_free(mdctx);

    char finalHash [130];

    for (unsigned int i = 0; i < md_len; i++)
    {
        sprintf((char*)&finalHash[i * 2], "%02x", md_value[i]);
    }

    QString QfinalHash02;
    QfinalHash02 = QString::fromLatin1(finalHash);

    delete[] buffer;
    myFile.close();

    if(m_writeChecksumsOnly01 == 0)
        finalResult01 = fileInfo.absoluteFilePath() + "," + QfinalHash02.toUpper();
    else if(m_writeChecksumsOnly01 == 2)
        finalResult01 = QfinalHash02.toUpper();

    if(m_callingFunction01 == 1)
        returnVal.push_back(QfinalHash02.toUpper());
    else if(m_callingFunction01 == 2)
        returnVal.push_back(finalResult01);

    return returnVal;
}


QString opensslchecksum::textHash01(const QString &text)
{
    QByteArray inUtf8 = m_hashType01.toUtf8();
    const char *hashType = inUtf8.constData();

    EVP_MD_CTX *mdctx;
    const EVP_MD *md;

    std::string textString = text.toStdString();
    char *mess1 = (char*)textString.c_str();

    unsigned char md_value[EVP_MAX_MD_SIZE];
    unsigned int md_len, i;

    //OpenSSL_add_all_digests();

    md = EVP_get_digestbyname(hashType);

    mdctx = EVP_MD_CTX_create();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, mess1, (int)strlen(mess1));

    EVP_DigestFinal_ex(mdctx, md_value, &md_len);
    EVP_MD_CTX_destroy(mdctx);

    char finalHash [130];

    for(i = 0; i < md_len; i++)
        sprintf((char*)&finalHash[i * 2], "%02x", md_value[i]);

    QString QfinalHash02;
    QfinalHash02 = QString::fromLatin1(finalHash);

    EVP_cleanup();

    return QfinalHash02;
}
