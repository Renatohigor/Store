#include "Person.h"

Person::Person()
{}

Person::Person(QString name, QString adress, QString number, int ID)
{
    this->name = name;
    this->ID = ID;
    this->adress = adress;
    this->number = number;
}

int Person::getID()
{
    return ID;
}

QString Person::getName() const
{
    return name;
}

QString Person::getAdress() const
{
    return adress;
}

QString Person::getNumber() const
{
    return number;
}

