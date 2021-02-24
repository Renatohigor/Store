#include "ControllerAdress.h"

ControllerAdress::ControllerAdress()
{}

void ControllerAdress::add(Adress &ptr)
{
    QString adress = QString::number(ptr.getID()) + ";" + ptr.getLogradouro();
    adress += ptr.getCity() + ";" + ptr.getEstado();
    ptrAdress.push_back(adress);
}
