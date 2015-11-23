#-------------------------------------------------
#
# Project created by QtCreator 2015-06-01T19:13:02
#
#-------------------------------------------------
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HuffProject
#CONFIG   += console
#CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    hufftree.cpp \
    compress.cpp \
    decompress.cpp \
    gui.cpp

HEADERS += \
    hufftree.h \
    node.h \
    compress.h \
    decompress.h \
    gui.h

FORMS    += gui.ui
RC_FILE +=dialogo.rc
