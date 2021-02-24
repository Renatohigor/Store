#ifndef CONTROLLERADRESS_H
#define CONTROLLERADRESS_H
#include "Adress.h"
#include <vector>
using namespace std;

class ControllerAdress
{
private:
    vector<QString> ptrAdress;
public:
    ControllerAdress();
    void remove();
    void add(Adress &ptr);
};

#endif // CONTROLLERADRESS_H
