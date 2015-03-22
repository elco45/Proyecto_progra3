#include "sello.h"
#include "hechizo.h"
#include <QString>
#include <vector>
using namespace std;

sello::sello()
{
}

sello::sello(double costo,vector<hechizo*> spells){
    this->costo=costo;
    this->spells=spells;
}

sello::sello(const sello& other)
    :costo(other.costo),spells(other.spells) {

}

QString sello::toString()const{
    QString ss="";
    for(int i=spells.size()-2; i<spells.size();i++){
        if(i==spells.size()-2){
            ss=spells.at(i)->getElemento();
        }else{
            ss+="/"+spells.at(i)->getElemento();
        }
    }
    return ss;
}

QString sello::c_mana()const{
    QString ss="";
    double mana=0;
    for(int i=spells.size()-2; i<spells.size();i++){
        mana+=spells.at(i)->costoMana();
    }
    ss=QString::number(mana);
    return ss;
}

double sello::getCost()const{
    return costo;
}
