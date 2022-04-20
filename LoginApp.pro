QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    alegerecont.cpp \
    cv_angajat.cpp \
    inregistrareangajat.cpp \
    inregistrareangajator.cpp \
    main.cpp \
    mainwindow.cpp \
    paginapornire.cpp \
    profilangajat.cpp

HEADERS += \
    alegerecont.h \
    cv_angajat.h \
    inregistrareangajat.h \
    inregistrareangajator.h \
    mainwindow.h \
    paginapornire.h \
    profilangajat.h

FORMS += \
    alegerecont.ui \
    cv_angajat.ui \
    inregistrareangajat.ui \
    inregistrareangajator.ui \
    mainwindow.ui \
    paginapornire.ui \
    profilangajat.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=
