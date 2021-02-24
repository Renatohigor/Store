#ifndef LISTPRODUTO_H
#define LISTPRODUTO_H
#include "ControllerProduct.h"
#include <QMainWindow>

namespace Ui {
class ListProduto;
}

class ListProduto : public QMainWindow
{
    Q_OBJECT

public:
    explicit ListProduto(QWidget *parent = 0, ControllerProduct * passList = nullptr);
    ~ListProduto();

private slots:
    void on_pushButton_voltar_clicked();

    void on_pushButton_alterar_clicked();

    void on_pushButton_remover_clicked();

private:
    Ui::ListProduto *ui;
    ControllerProduct *passList;
};

#endif // LISTPRODUTO_H
