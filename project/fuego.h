#ifndef FUEGO_H
#define FUEGO_H
#include "hechizo.h"
#include <QString>

class fuego: public hechizo{
public:
    fuego();
    fuego(QString,int);
    fuego(const fuego&);
    virtual QString toString() const;
    virtual QString getElemento()const;
    virtual double costoMana()const;
};

#endif // FUEGO_H
