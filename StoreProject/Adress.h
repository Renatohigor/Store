#ifndef ADRESS_H
#define ADRESS_H
#include <QString>

class Adress
{
private:
    QString logradouro;
    QString city;
    QString estado;
    int ID;
public:
    Adress();

    int getID();
    void setID(int ID);

    QString getLogradouro() const;
    void setLogradouro(const QString &value);

    QString getCity() const;
    void setCity(const QString &value);

    QString getEstado() const;
    void setEstado(const QString &value);
};

#endif // ADRESS_H
