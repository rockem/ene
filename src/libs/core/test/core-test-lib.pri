contains(CONFIG, dll) {
    DEFINES += TEST_CORE_BUILD_LIB
} else {
    DEFINES += TEST_CORE_BUILD_STATIC_LIB
}

SOURCES += \
    test_clearbuffercommand.cpp



HEADERS += \
   mock_textbufferview.h
