#include "tierra.h"
#include "hechizo.h"
#include <QString>
using namespace std;

tierra::tierra(){
}

tierra::tierra(QString nombre,int potencia)
    :hechizo(nombre,potencia){
}

tierra::tierra(const tierra& other)
    :hechizo(other){

}

QString tierra::toString()const{
    QString ss="Tierra/"+hechizo::toString();
    return ss;
}

QString tierra::getElemento()const{
    QString ss="Tierra";
    return ss;
}

double tierra::costoMana()const{
    return (getPotencia()*1.2);
}
