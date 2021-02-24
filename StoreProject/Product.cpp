#include "Product.h"

Product::Product()
{}

Product::Product(QString name, long code)
{
    this->code = code;
    this->name = name;
}

QString Product::getName() const
{
    return name;
}

long Product::getCode() const
{
    return code;
}
