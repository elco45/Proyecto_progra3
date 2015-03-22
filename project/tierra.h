#ifndef TIERRA_H
#define TIERRA_H
#include "hechizo.h"
#include <QString>

class tierra:public hechizo{
public:
    tierra();
    tierra(QString,int);
    tierra(const tierra&);
    virtual QString toString() const;
    virtual QString getElemento()const;
    virtual double costoMana()const;
};
#endif // TIERRA_H
