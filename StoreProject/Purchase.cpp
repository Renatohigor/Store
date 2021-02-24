#include "Purchase.h"

Person Purchase::getPerson() const
{
    return person;
}

void Purchase::setPerson(const Person &value)
{
    person = value;
}

Product Purchase::getProduct() const
{
    return product;
}

void Purchase::setProduct(const Product &value)
{
    product = value;
}

Purchase::Purchase()
{

}
