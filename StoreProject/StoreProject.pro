#-------------------------------------------------
#
# Project created by QtCreator 2017-06-11T16:44:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = StoreProject
TEMPLATE = app


SOURCES += main.cpp\
        CadastroPessoa.cpp \
    Adress.cpp \
    Person.cpp \
    Product.cpp \
    Purchase.cpp \
    ControllerPurchase.cpp \
    ControllerProduct.cpp \
    ControllerPerson.cpp \
    ControllerAdress.cpp \
    CadastroProduto.cpp \
    ListPessoa.cpp \
    ListProduto.cpp \
    Compra.cpp

HEADERS  += CadastroPessoa.h \
    Adress.h \
    Person.h \
    Product.h \
    Purchase.h \
    ControllerPurchase.h \
    ControllerProduct.h \
    ControllerPerson.h \
    ControllerAdress.h \
    CadastroProduto.h \
    ListPessoa.h \
    ListProduto.h \
    Compra.h

FORMS    += CadastroPessoa.ui \
    CadastroProduto.ui \
    ListPessoa.ui \
    ListProduto.ui \
    Compra.ui
