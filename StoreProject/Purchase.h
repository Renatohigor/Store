#ifndef PURCHASE_H
#define PURCHASE_H
#include <QString>
#include "Person.h"
#include "Product.h"

class Purchase
{
private:
    Person person;
    Product product;
public:
    Purchase();

    Person getPerson() const;
    void setPerson(const Person &value);
    Product getProduct() const;
    void setProduct(const Product &value);

    Product purchase(Person person, Product product);
    QString verificaCompra();
};


#endif // PURCHASE_H
