#ifndef CADASTROPRODUTO_H
#define CADASTROPRODUTO_H
#include "ControllerProduct.h"
#include <QMainWindow>
#include "CadastroPessoa.h"

namespace Ui {
class CadastroProduto;
}

class CadastroProduto : public QMainWindow
{
    Q_OBJECT

public:
    explicit CadastroProduto(QWidget *parent = 0, ControllerProduct *passPro = nullptr);
    ~CadastroProduto();

private slots:
    void on_pushButton_add_clicked();

    void on_pushButton_voltar_clicked();

    void on_pushButton_salvar_clicked();

    void on_pushButton_remover_clicked();

private:
    Ui::CadastroProduto *ui;
    ControllerProduct *passPro;

    enum Coluna
    {
        ID, PRODUTO
    };
};

#endif // CADASTROPRODUTO_H
