#include "Compra.h"
#include "ui_Compra.h"

Compra::Compra(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Compra)
{
    ui->setupUi(this);
}

Compra::~Compra()
{
    delete ui;
}
