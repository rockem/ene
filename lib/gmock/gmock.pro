TEMPLATE = lib
CONFIG += dll
TARGET = gmock

DEFINES += NDEBUG
unix:QMAKE_CXXFLAGS_DEBUG += -O2

include(../../../enelibrary.pri)
include(gmock-lib.pri)
