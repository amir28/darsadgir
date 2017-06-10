#-------------------------------------------------
#
# Project created by QtCreator 2017-06-06T15:16:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DarSadGir
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

RESOURCES += \
	icon.qrc

macx:ICON = $${PWD}/icon.icns
