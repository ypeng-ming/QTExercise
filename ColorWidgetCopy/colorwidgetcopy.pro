QT += core gui
QT += core5compat
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
greaterThan(QT_MAJOR_VERSION, 5): QT += core5compat

TARGET      = colorwidgetcopy
TEMPLATE    = app
DESTDIR     = $$PWD/../bin
CONFIG      += warn_off
CONFIG      +=uitools
CONFIG += staticlib
CONFIG +=console

SOURCES     += main.cpp
SOURCES     += frmcolorwidgetcopy.cpp
SOURCES     += colorwidgetcopycopy.cpp

HEADERS     +=ui_frmcolorwidgetcopy.h
HEADERS     += colorwidgetcopy.h
HEADERS     += frmcolorwidgetcopy.h

FORMS       += frmcolorwidgetcopy.ui
