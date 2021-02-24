#ifndef CONTROLLERPRODUCT_H
#define CONTROLLERPRODUCT_H
#include "Product.h"
#include <vector>

class ControllerProduct
{
private:
    std::vector<QString>  ptrProduct;
public:
    void add(Product &pro);
    void remove();
    std::vector<Product> listar();
};

#endif // CONTROLLERPRODUCT_H
