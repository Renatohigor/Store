#ifndef LISTPESSOA_H
#define LISTPESSOA_H
#include "ControllerPerson.h"
#include <QMainWindow>

namespace Ui {
class ListPessoa;
}

class ListPessoa : public QMainWindow
{
    Q_OBJECT

public:
    explicit ListPessoa(QWidget *parent = 0, ControllerPerson * passList = nullptr);
    ~ListPessoa();

private slots:
    void on_pushButton_voltar_clicked();

    void on_pushButton_alterar_clicked();

    void on_pushButton_remover_clicked();

private:
    Ui::ListPessoa *ui;
    ControllerPerson *passList;
};

#endif // LISTPESSOA_H
