#-------------------------------------------------
#
# Project created by QtCreator 2014-07-24T21:18:11
#
#-------------------------------------------------

QT       += core gui
QMAKE_CXXFLAGS += -std=c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = rabbit
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    rabbit.cpp \
    field.cpp

HEADERS  += mainwindow.h \
    rabbit.h \
    field.h \
    zoo.h

FORMS    += mainwindow.ui
