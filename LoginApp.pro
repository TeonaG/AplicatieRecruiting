QT       += core gui
QT+=network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Admin.cpp \
    Angajat.cpp \
    Angajator.cpp \
    CExceptie.cpp \
    ConnException.cpp \
    FactoryUser.cpp \
    ICV.cpp \
    IExceptie.cpp \
    ILocDeMunca.cpp \
    IRecenzie.cpp \
    IUser.cpp \
    LocDeMunca.cpp \
    LoginException.cpp \
    PSWException.cpp \
    Recenzie.cpp \
    User.cpp \
    alegerecont.cpp \
    cCV.cpp \
    client.cpp \
    cv_angajat.cpp \
    cv_de_modificat.cpp \
    filtru.cpp \
    inregistrareangajat.cpp \
    inregistrareangajator.cpp \
    main.cpp \
    mainwindow.cpp \
    paginapornire.cpp \
    parser.cpp \
    profiladmin.cpp \
    profilangajat.cpp \
    profilangajator.cpp \
    tipuri_autentificare.cpp

HEADERS += \
    Admin.h \
    Angajat.h \
    Angajator.h \
    CExceptie.h \
    ConnException.h \
    FactoryUser.h \
    ICV.h \
    IExceptie.h \
    ILocDeMunca.h \
    IRecenzie.h \
    IUser.h \
    LocDeMunca.h \
    LoginException.h \
    PSWException.h \
    Recenzie.h \
    User.h \
    alegerecont.h \
    cCV.h \
    client.h \
    cv_angajat.h \
    cv_de_modificat.h \
    filtru.h \
    inregistrareangajat.h \
    inregistrareangajator.h \
    mainwindow.h \
    paginapornire.h \
    parser.h \
    profiladmin.h \
    profilangajat.h \
    profilangajator.h \
    tipuri_autentificare.h

FORMS += \
    alegerecont.ui \
    cv_angajat.ui \
    cv_de_modificat.ui \
    filtru.ui \
    inregistrareangajat.ui \
    inregistrareangajator.ui \
    mainwindow.ui \
    paginapornire.ui \
    profiladmin.ui \
    profilangajat.ui \
    profilangajator.ui \
    tipuri_autentificare.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=
