contains(CONFIG, dll) {
    DEFINES += CORE_BUILD_LIB
} else {
    DEFINES += CORE_BUILD_STATIC_LIB
}

INCLUDEPATH += $$PWD

HEADERS +=  \
    $$PWD/mainwindow.h \
    $$PWD/eventmanager.h \
    $$PWD/event.h \
    $$PWD/textbuffer.h \
    $$PWD/clearbuffercommand.h \
    $$PWD/qttextbufferview.h

SOURCES += \
    $$PWD/mainwindow.cpp \
    $$PWD/eventmanager.cpp \
    $$PWD/textbuffer.cpp \
    $$PWD/clearbuffercommand.cpp \
    $$PWD/qttextbufferview.cpp


FORMS += $$PWD/mainwindow.ui
