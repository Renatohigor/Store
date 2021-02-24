#include "ListProduto.h"
#include "ui_ListProduto.h"
#include "CadastroPessoa.h"
#include <QDebug>

ListProduto::ListProduto(QWidget *parent, ControllerProduct * passList) :
    QMainWindow(parent),
    ui(new Ui::ListProduto)
{
    ui->setupUi(this);
    vector<Product> ptrView = passList->listar();

    QString saida;
    int j = ptrView.size();

    for(int i = 0; i < j; i++)
    {
        Product pro = ptrView[i];
        saida = "ID -> " + QString::number(pro.getCode())+ "  PRODUTO -> " + pro.getName();
        ui->listWidget_produto->addItem(saida);
    }
}

ListProduto::~ListProduto()
{
    delete ui;
}

void ListProduto::on_pushButton_voltar_clicked()
{
    CadastroPessoa *cP;
    cP = new CadastroPessoa();
    cP->show();
    //this->close();
}

void ListProduto::on_pushButton_alterar_clicked()
{

}

void ListProduto::on_pushButton_remover_clicked()
{

}
