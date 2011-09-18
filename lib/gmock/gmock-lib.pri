contains(CONFIG, dll) {
    DEFINES += GMOCK_BUILD_LIB
} else {
    DEFINES += GMOCK_BUILD_STATIC_LIB
}

INCLUDEPATH += $$PWD/include $$PWD/gtest/include $$PWD/gtest

SOURCES += src/gmock-all.cc gtest/src/gtest-all.cc
