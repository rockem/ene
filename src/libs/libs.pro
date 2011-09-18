TEMPLATE  = subdirs
CONFIG   += ordered
QT += core gui

SUBDIRS   = \
    core


#!win32 {
#    SUBDIRS += valgrind
#}

# Windows: Compile Qt Creator CDB extension if Debugging tools can be detected.
#win32 {
#    include(qtcreatorcdbext/cdb_detect.pri)
#    exists($$CDB_PATH):SUBDIRS += qtcreatorcdbext
#}
