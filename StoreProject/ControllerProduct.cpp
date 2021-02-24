#include "ControllerProduct.h"
#include <QDebug>
#include <QStringList>
#include <iostream>
using namespace std;

void ControllerProduct::add(Product &pro)
{
    QString produto = QString::number(pro.getCode())  + ";" + pro.getName();
    ptrProduct.push_back(produto);
}

std::vector<Product> ControllerProduct::listar()
{
    std::vector<Product> ptr;

    int j = ptrProduct.size();
    for(int i = 0; i < j; i++)
    {
        QString str = ptrProduct[i];
        QStringList strList = str.split(';');
        Product saida(strList[1], strList[0].toLong());
        ptr.push_back(saida);
    }

    return ptr;
}
