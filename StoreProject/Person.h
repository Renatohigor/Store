#ifndef PERSON_H
#define PERSON_H
#include <QString>
#include "Adress.h"

class Person
{
private:
    QString name;
    QString adress;
    QString number;
    int ID;
public:
    Person();
    Person(QString name, QString adress, QString number, int ID);

    int getID();
    QString getName() const;
    QString getAdress() const;
    QString getNumber() const;
};

#endif // PERSON_H
