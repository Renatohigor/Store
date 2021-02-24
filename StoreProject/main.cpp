#include "CadastroPessoa.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CadastroPessoa w;
    w.show();

    return a.exec();
}
