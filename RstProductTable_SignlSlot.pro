#-------------------------------------------------
#
# Project created by QtCreator 2017-11-19T17:10:15
#
#-------------------------------------------------

QT       += core gui xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProductTable
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    parser.cpp \
    changetwitm.cpp \
    search.cpp

HEADERS  += mainwindow.h \
    parser.h \
    search.h \
    changetwitm.h

FORMS    += mainwindow.ui
