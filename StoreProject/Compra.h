#ifndef COMPRA_H
#define COMPRA_H

#include <QMainWindow>

namespace Ui {
class Compra;
}

class Compra : public QMainWindow
{
    Q_OBJECT

public:
    explicit Compra(QWidget *parent = 0);
    ~Compra();

private:
    Ui::Compra *ui;
};

#endif // COMPRA_H
