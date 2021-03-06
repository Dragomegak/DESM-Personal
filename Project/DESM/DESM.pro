#-------------------------------------------------
#
# Project created by QtCreator 2019-02-03T18:44:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DESM
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        loginScreen.cpp \
    mainscreen.cpp \
    loadProfile.cpp \
    createProfile.cpp \
    editProfile.cpp

HEADERS += \
        loginScreen.h \
    mainscreen.h \
    loadProfile.h \
    createProfile.h \
    editProfile.h

FORMS += \
        loginScreen.ui \
    mainscreen.ui \
    loadProfile.ui \
    createProfile.ui \
    editProfile.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    virgo.exe


win32: LIBS += -L'C:/Program Files (x86)/Windows Kits/8.1/Lib/winv6.3/um/x64/' -lUser32

INCLUDEPATH += 'C:/Program Files (x86)/Windows Kits/8.1/Lib/winv6.3/um/x64'
DEPENDPATH += 'C:/Program Files (x86)/Windows Kits/8.1/Lib/winv6.3/um/x64'

win32 {
CONFIG += embed_manifest_exe
QMAKE_LFLAGS_WINDOWS += /MANIFESTUAC:level=\'requireAdministrator\'
}
