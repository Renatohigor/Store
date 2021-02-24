#include "CadastroPessoa.h"
#include "ui_CadastroPessoa.h"
#include "Adress.h"
#include "Compra.h"
#include "ListProduto.h"
#include "ListPessoa.h"
#include "CadastroProduto.h"
#include "ControllerProduct.h"
#include "ControllerAdress.h"
#include "ControllerPurchase.h"

int idPess = -1, cont = 0;
CadastroPessoa::CadastroPessoa(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CadastroPessoa)
{
    ui->setupUi(this);
    ui->label_nome->setEnabled(false);
    ui->label_6->setEnabled(false);
    ui->label_logra->setEnabled(false);
    ui->label_city->setEnabled(false);
    ui->label_estado->setEnabled(false);
    ui->label_number->setEnabled(false);
    ui->pushButton_salvar->setEnabled(false);
    ui->pushButton_remover->setEnabled(false);

    QStringList titulos;
    ui->tableWidget_person->setColumnCount(3);
    titulos << "ID" << "NOME" << "TELEFONE";
    ui->tableWidget_person->setHorizontalHeaderLabels(titulos);
}

CadastroPessoa::~CadastroPessoa()
{
    delete ui;
}

void CadastroPessoa::on_pushButton_cadastrar_clicked()
{
    Adress ptr;
    QString nSaida, lSaida, cSaida, eSaida, numSaida;

    nSaida = ui->lineEdit_nome->text();

    lSaida = ui->lineEdit_logra->text();
    eSaida = ui->lineEdit_estado->text();
    cSaida = ui->lineEdit_city->text();

    numSaida = ui->lineEdit_number->text();

    ptr.setID(idPess);
    ptr.setLogradouro(lSaida);
    ptr.setCity(cSaida);
    ptr.setEstado(eSaida);

    ++idPess;
    Person pessoa(nSaida, ptr.getLogradouro(), numSaida, idPess);

    per->add(pessoa);

    CadastroPessoa p(this);
    p.setWindowTitle("Cadastro de Usuario");
    ui->tableWidget_person->insertRow(ui->tableWidget_person->rowCount());
    int f = ui->tableWidget_person->rowCount() - 1;

    ui->tableWidget_person->setItem(f, ID, new QTableWidgetItem(QString::number(idPess)));
    ui->tableWidget_person->setItem(f, NAME, new QTableWidgetItem(ui->lineEdit_nome->text()));
    ui->tableWidget_person->setItem(f, NUMBER, new QTableWidgetItem(ui->lineEdit_number->text()));
    ui->tableWidget_person->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->pushButton_salvar->setEnabled(true);
    ui->pushButton_remover->setEnabled(true);

    ui->lineEdit_nome->clear();
    ui->lineEdit_logra->clear();
    ui->lineEdit_city->clear();
    ui->lineEdit_estado->clear();
    ui->lineEdit_number->clear();
}

void CadastroPessoa::on_actionProduto_triggered()
{
    CadastroProduto *w;

    w = new CadastroProduto(0, pro);
    w->show();
}

void CadastroPessoa::on_actionProdutos_triggered()
{ 
    ListProduto *w;
    w = new ListProduto(0, pro);
    w->show();
    this->close();
}

void CadastroPessoa::on_actionPessoas_triggered()
{
    ListPessoa *w;
    w = new ListPessoa(0, per);
    w->show();
    this->close();
}

void CadastroPessoa::on_actionComprar_triggered()
{
    Compra *w;

    w = new Compra();
    w->show();
    this->close();
}

void CadastroPessoa::on_pushButton_salvar_clicked()
{
     ui->tableWidget_person->setEnabled(false);
}

void CadastroPessoa::on_pushButton_remover_clicked()
{
    ui->tableWidget_person->setEnabled(true);
}
