QT       += core gui
QT       += concurrent

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

INCLUDEPATH += "$$PWD\OpenSSL-Win64\include"

LIBS += -L"$$PWD\OpenSSL-Win64\lib" -ldasync
LIBS += -L"$$PWD\OpenSSL-Win64\lib" -llibapps
LIBS += -L"$$PWD\OpenSSL-Win64\lib" -llibcrypto
LIBS += -L"$$PWD\OpenSSL-Win64\lib" -llibcrypto_static
LIBS += -L"$$PWD\OpenSSL-Win64\lib" -llibssl
LIBS += -L"$$PWD\OpenSSL-Win64\lib" -llibssl_static

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    checkableproxymodel.cpp \
    delayedexecutiontimer.cpp \
    main.cpp \
    mainwindow.cpp \
    opensslchecksum.cpp \
    settingsmain.cpp

HEADERS += \
    checkableproxymodel.h \
    delayedexecutiontimer.h \
    mainwindow.h \
    opensslchecksum.h \
    settingsmain.h

FORMS += \
    mainwindow.ui \
    settingsmain.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
