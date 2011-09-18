TEMPLATE = lib
CONFIG += dll
TARGET = Core

DEFINES += NDEBUG
unix:QMAKE_CXXFLAGS_DEBUG += -O2

include(../../enelibrary.pri)
include(core-lib.pri)
# include(../languageutils/languageutils.pri)
