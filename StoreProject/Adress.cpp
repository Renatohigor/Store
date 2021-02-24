#include "Adress.h"

int Adress::getID()
{
    return this->ID;
}

void Adress::setID(int ID)
{
    this->ID = ID;
}


QString Adress::getLogradouro() const
{
    return logradouro;
}

void Adress::setLogradouro(const QString &value)
{
    logradouro = value;
}

QString Adress::getCity() const
{
    return city;
}

void Adress::setCity(const QString &value)
{
    city = value;
}

QString Adress::getEstado() const
{
    return estado;
}

void Adress::setEstado(const QString &value)
{
    estado = value;
}

Adress::Adress()
{
    estado = "--";
    city = "--";
    logradouro = "--";
}
