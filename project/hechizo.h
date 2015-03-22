#ifndef HECHIZO_H
#define HECHIZO_H
#include <QString>

class hechizo{
    QString nombre;
    int potencia;
protected:
    QString getNombre()const;
    int getPotencia()const;
public:
    hechizo();
    hechizo(QString,int);
    hechizo(const hechizo&);
    virtual QString toString()const;
    virtual QString getElemento()const;
    void setNombre(QString);
    void setElemento(QString);
    void setPotencia(int);
    virtual double costoMana()const;
};

#endif // HECHIZO_H
