#include "ControllerPerson.h"
#include <QDebug>
ControllerPerson::ControllerPerson()
{}

void ControllerPerson::add(Person &p)
{
    QString pessoa = QString::number(p.getID()) + ";" + p.getName() + ";" +
            p.getNumber() + ";" + p.getAdress();
    qDebug()<<pessoa;
    ptrPerson.push_back(pessoa);

}

std::vector<Person> ControllerPerson::listagem()
{
    std::vector<Person> ptrPer;

    int j = ptrPerson.size();
    for(int i = 0; i < j; i++)
    {
        QString str = ptrPerson[i];
        QStringList strList = str.split(';');
        Person saida(strList[1], strList[3], strList[2], strList[0].toInt());
        ptrPer.push_back(saida);
    }

    return ptrPer;
}

