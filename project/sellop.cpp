#include "sellop.h"
#include "sello.h"
#include <QString>
#include <vector>
using namespace std;

selloP::selloP(){
}

selloP::selloP(double costo,vector<sello*> sellos){
    this->costo=costo;
    this->sellos=sellos;
}

selloP::selloP(const selloP& other)
    :costo(other.costo),sellos(other.sellos) {

}

QString selloP::toString(int cont)const{
    double cost=0;
    for(int i=0;i<sellos.size();i++){
        cost+=sellos.at(i)->getCost();
    }
    QString ss="\tSello Prohibido "+QString::number(cont)+"\n";
    ss+="Sello #1:\n";
    ss+="Elementos:\n";
    ss+="\t"+sellos.at(cont)->toString()+"\n";
    ss+="Costo de Mana:\n";
    ss+="\t"+QString::number(sellos.at(cont)->getCost())+"mp\n";
    ss+="Sello #2:\n";
    ss+="Elementos:\n";
    ss+="\t"+sellos.at(1)->toString()+"\n";
    ss+="Costo de Mana:\n";
    ss+="\t"+QString::number(sellos.at(1)->getCost())+"mp\n\n";
    ss+="Total Costo de Mana para el Sello Prohibido: "+QString::number(cost);
    return ss;
}

QString selloP::c_mana()const{
    QString ss="";
    double mana=0;
    for(int i=sellos.size()-2; i<sellos.size();i++){
        mana+=sellos.at(i)->getCost();
    }
    ss=QString::number(mana);
    return ss;
}

double selloP::getCost()const{
    return costo;
}
