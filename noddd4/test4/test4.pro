QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

HEADERS += ../mynod4/nodnok.h
SOURCES +=  tst_mytest4.cpp ../mynod4/nodnok.cpp
