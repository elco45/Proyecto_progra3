#include "agua.h"
#include "hechizo.h"
#include <QString>
using namespace std;

agua::agua(){
}

agua::agua(QString nombre,int potencia)
    :hechizo(nombre,potencia){
}

agua::agua(const agua& other)
    :hechizo(other){

}

QString agua::toString()const{
    QString ss="Agua/"+hechizo::toString();
    return ss;
}

QString agua::getElemento()const{
    QString ss="Agua";
    return ss;
}

double agua::costoMana()const{
    return (getPotencia()*1.5);
}
