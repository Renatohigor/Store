#ifndef CONTROLLERPERSON_H
#define CONTROLLERPERSON_H
#include "Person.h"
#include <vector>

using namespace std;

class ControllerPerson
{
private:
    vector<QString>  ptrPerson;
public:
    ControllerPerson();

    void remove(int id, Person name);
    void add(Person &p);
    std::vector<Person> listagem();

};

#endif // CONTROLLERPERSON_H
