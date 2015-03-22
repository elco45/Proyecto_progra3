#ifndef SELLO_H
#define SELLO_H
#include <QString>
#include <vector>
#include "hechizo.h"
using namespace std;

class sello{
    double costo;
    vector<hechizo*> spells;
public:
    sello();
    sello(double,vector<hechizo*>);
    sello(const sello&);
    QString toString()const;
    QString c_mana()const;
    double getCost()const;

};

#endif // SELLO_H
