TEMPLATE = lib

QT += core
QT += gui
QT += widgets
QT += opengl
QT += xml

TARGET = blok-display

DESTDIR = ../../modules/ep20

LIBS += -L$$(RRS_DEV_ROOT)/bin -ldisplay
LIBS += -L$$(RRS_DEV_ROOT)/bin -lCfgReader

INCLUDEPATH += ./include
INCLUDEPATH += $$(RRS_DEV_ROOT)/sdk/include
INCLUDEPATH += ../ep20/include

HEADERS += $$files(./include/*.h)
SOURCES += $$files(./src/*.cpp)
RESOURCES += $$files(./resources/*.qrc)
