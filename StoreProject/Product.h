#ifndef PRODUCT_H
#define PRODUCT_H
#include <QString>

class Product
{
private:
    long code;
    QString name;
public:
    Product();
    Product(QString name, long code);

    long getCode() const;
    QString getName() const;
};
#endif // PRODUCT_H
