#-------------------------------------------------
#
# Project created by QtCreator 2012-12-09T10:37:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = frc-scouting
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    currentalliancedata.cpp

HEADERS  += mainwindow.h \
    currentalliancedata.h \
    structs.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    Team_Number_List.txt

RESOURCES += \
    resources.qrc
