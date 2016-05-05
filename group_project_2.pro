#-------------------------------------------------
#
# Project created by QtCreator 2016-04-06T20:14:12
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = group_project_2
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    logindialog.cpp \
    errordialog.cpp \
    connection.cpp

HEADERS  += mainwindow.h \
    logindialog.h \
    errordialog.h \
    connection.h

FORMS    += mainwindow.ui \
    logindialog.ui \
    errordialog.ui
