TEMPLATE = app

TARGET = firstQtApp

QT = core gui

greaterThan(QT_MAJOR_VERSION,4): QT += widgets

SOURCES += \
    Cursors.cpp \
    mybutton.cpp \
    simple.cpp

HEADERS += \
    Cursors.h \
    mybutton.h
