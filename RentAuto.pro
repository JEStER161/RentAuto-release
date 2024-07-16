QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cars_bd.cpp \
    catalog.cpp \
    firstwindow.cpp \
    login_for_admin.cpp \
    login_for_cars_bd.cpp \
    main.cpp \
    mainwindow.cpp \
    registration.cpp \
    users_bd.cpp

HEADERS += \
    cars_bd.h \
    catalog.h \
    firstwindow.h \
    login_for_admin.h \
    login_for_cars_bd.h \
    mainwindow.h \
    registration.h \
    users_bd.h

FORMS += \
    cars_bd.ui \
    catalog.ui \
    firstwindow.ui \
    login_for_admin.ui \
    login_for_cars_bd.ui \
    mainwindow.ui \
    registration.ui \
    users_bd.ui

macx:ICON = $${PWD}/icon.icns

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    recource.qrc
