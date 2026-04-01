QT += core gui widgets multimedia

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    LoginDialog.cpp \
    main.cpp \
    mainwindow.cpp \
    scr003.cpp

HEADERS += \
    LoginDialog.h \
    mainwindow.h \
    scr003.h

FORMS += \
    LoginDialog.ui \
    mainwindow.ui \
    scr003.ui

TRANSLATIONS += \
    demo2_1_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RC_ICONS = face.ico

RESOURCES += \
    Resource.qrc