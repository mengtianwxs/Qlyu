TARGET = Qlyu
CONFIG += build_qlyu_lib

QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

include(qlyu.pri)


load(qt_module)