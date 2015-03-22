#include "fuego.h"
#include "hechizo.h"
#include <QString>
using namespace std;

fuego::fuego(){
}

fuego::fuego(QString nombre,int potencia)
    :hechizo(nombre,potencia){
}

fuego::fuego(const fuego& other)
    :hechizo(other){

}

QString fuego::toString()const{
    QString ss="Fuego/"+hechizo::toString();
    return ss;
}

QString fuego::getElemento()const{
    QString ss="Fuego";
    return ss;
}

double fuego::costoMana()const{
    return (getPotencia()*2);
}
