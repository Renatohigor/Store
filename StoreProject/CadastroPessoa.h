#ifndef CADASTROPESSOA_H
#define CADASTROPESSOA_H
#include <QMainWindow>
#include "Person.h"
#include "ControllerPerson.h"
#include "ControllerProduct.h"

namespace Ui {
class CadastroPessoa;
}

class CadastroPessoa : public QMainWindow
{
    Q_OBJECT

public:
    explicit CadastroPessoa(QWidget *parent = 0);
    ~CadastroPessoa();

private slots:
    void on_pushButton_cadastrar_clicked();

    void on_actionProduto_triggered();

    void on_actionProdutos_triggered();

    void on_actionPessoas_triggered();

    void on_actionComprar_triggered();

    void on_pushButton_salvar_clicked();

    void on_pushButton_remover_clicked();

private:
    Ui::CadastroPessoa *ui;
    ControllerProduct *pro = new ControllerProduct();
    ControllerPerson *per = new ControllerPerson();

    enum Coluna
    {
        ID, NAME, NUMBER
    };
};

#endif // CADASTROPESSOA_H
