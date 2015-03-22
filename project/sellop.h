#ifndef SELLOP_H
#define SELLOP_H
#include <QString>
#include <vector>
#include "sello.h"
using namespace std;

class selloP{
    double costo;
    vector<sello*> sellos;
public:
    selloP();
    selloP(double,vector<sello*>);
    selloP(const selloP&);
    QString toString(int)const;
    QString c_mana()const;
    double getCost()const;
};

#endif // SELLOP_H
