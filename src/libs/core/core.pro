TEMPLATE  = subdirs
CONFIG   += ordered

SUBDIRS = core-main.pro test/core-test.pro


#!win32 {
#    SUBDIRS += valgrind
#}

# Windows: Compile Qt Creator CDB extension if Debugging tools can be detected.
#win32 {
#    include(qtcreatorcdbext/cdb_detect.pri)
#    exists($$CDB_PATH):SUBDIRS += qtcreatorcdbext
#}
