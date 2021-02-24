#ifndef CONTROLLERPURCHASE_H
#define CONTROLLERPURCHASE_H
#include "Purchase.h"
#include <vector>
using namespace std;

class ControllerPurchase
{
private:
    vector<Purchase> ptrPurchase;
public:
    ControllerPurchase();
    void remove();
    Purchase add(Purchase &ptr);
};

#endif // CONTROLLERPURCHASE_H
