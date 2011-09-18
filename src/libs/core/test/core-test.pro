TEMPLATE = lib
CONFIG += dll
TARGET = Core-test

DEFINES += NDEBUG
unix:QMAKE_CXXFLAGS_DEBUG += -O2

include(../../../enelibrary.pri)
include(../core-lib.pri)
include(core-test-lib.pri)
include(../../../../lib/extern-libs.pri)
