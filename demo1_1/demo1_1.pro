QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    change.cpp \
    create.cpp \
    date.cpp \
    employee.cpp \
    main.cpp \
    mainwindow.cpp \
    print_list.cpp \
    search.cpp \
    show_menu.cpp \
    student.cpp

HEADERS += \
    date.h \
    employee.h \
    head.h \
    mainwindow.h \
    student.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    demo1_1_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RC_ICONS = face.ico