#include "ListPessoa.h"
#include "ui_ListPessoa.h"
#include "CadastroPessoa.h"

ListPessoa::ListPessoa(QWidget *parent, ControllerPerson *passList) :
    QMainWindow(parent),
    ui(new Ui::ListPessoa)
{
    ui->setupUi(this);
    this->passList = passList;

    vector<Person> ptrView = passList->listagem();

    QString saida;
    int j = ptrView.size();

    for(int i = 0; i < j; i++)
    {
        Person pro = ptrView[i];
        saida = "ID -> " + QString::number(pro.getID())+ " PESSOA -> " + pro.getName() +
                " ENDEREÇO -> " + pro.getAdress() + " NUMBER TELEFONE -> " + pro.getNumber();
        ui->listWidget_pessoa->addItem(saida);
    }
}

ListPessoa::~ListPessoa()
{
    delete ui;
}

void ListPessoa::on_pushButton_voltar_clicked()
{
    CadastroPessoa *w;
    w = new CadastroPessoa();
    w->show();
    //this->close();
}

void ListPessoa::on_pushButton_alterar_clicked()
{

}

void ListPessoa::on_pushButton_remover_clicked()
{

}
