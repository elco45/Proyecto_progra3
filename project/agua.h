#ifndef AGUA_H
#define AGUA_H
#include "hechizo.h"
#include <QString>

class agua:public hechizo{
public:
    agua();
    agua(QString,int);
    agua(const agua&);
    virtual QString toString() const;
    virtual QString getElemento()const;
    virtual double costoMana()const;
};

#endif // AGUA_H
