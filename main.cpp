#include "mainwindow.h"
#include "checkableproxymodel.h"
#include "delayedexecutiontimer.h"
#include "settingsmain.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    /* The following statement prevents this error message:
     * QObject::connect: Cannot queue arguments of type 'QVector<int>'
     * (Make sure 'QVector<int>' is registered using qRegisterMetaType().) */

    qRegisterMetaType<QVector<int>>();

    w.show();
    return a.exec();
}
