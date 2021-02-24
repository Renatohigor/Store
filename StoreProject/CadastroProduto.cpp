#include "CadastroProduto.h"
#include "ui_CadastroProduto.h"
#include "Product.h"
#include "ControllerProduct.h"
#include <QDebug>

int idPro = -1;
CadastroProduto::CadastroProduto(QWidget *parent, ControllerProduct *passPro) :
    QMainWindow(parent),
    ui(new Ui::CadastroProduto)
{
    this->passPro = passPro;
    ui->setupUi(this);
    ui->label_produto->setEnabled(false);
    ui->pushButton_remover->setEnabled(false);
    ui->pushButton_salvar->setEnabled(false);

    QStringList titulo;
    ui->tableWidget_produto->setColumnCount(2);
    titulo << "ID" << "PRODUTO";
    ui->tableWidget_produto->setHorizontalHeaderLabels(titulo);
}

CadastroProduto::~CadastroProduto()
{
    delete ui;
}

void CadastroProduto::on_pushButton_add_clicked()
{
    QString pSaida;

    pSaida = ui->lineEdit_produto->text();

    ++idPro;

    Product produto(pSaida, idPro);
    passPro->add(produto);

    CadastroProduto p(this);
    p.setWindowTitle("Cadastro de Produto");
    ui->tableWidget_produto->insertRow(ui->tableWidget_produto->rowCount());
    int f = ui->tableWidget_produto->rowCount() - 1;

    ui->tableWidget_produto->setItem(f, ID, new QTableWidgetItem(QString::number(idPro)));
    ui->tableWidget_produto->setItem(f, PRODUTO, new QTableWidgetItem(pSaida));
    ui->tableWidget_produto->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->pushButton_salvar->setEnabled(true);
    ui->pushButton_remover->setEnabled(true);
    ui->lineEdit_produto->clear();
}

void CadastroProduto::on_pushButton_voltar_clicked()
{
    CadastroPessoa w;
    w.show();
    this->close();
}

void CadastroProduto::on_pushButton_salvar_clicked()
{
    ui->tableWidget_produto->setEnabled(false);
}

void CadastroProduto::on_pushButton_remover_clicked()
{

}
