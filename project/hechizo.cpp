#include "hechizo.h"
#include <QString>


hechizo::hechizo(){
}

hechizo::hechizo(QString nombre, int potencia){
    this->nombre=nombre;
    this->potencia=potencia;
}
hechizo::hechizo(const hechizo& other)
    :nombre(other.nombre),potencia(other.potencia){

}

QString hechizo::toString()const{
    QString ss=nombre;
    return ss;
}

QString hechizo::getElemento()const{
    QString ss="asd";
    return ss;
}

QString hechizo::getNombre()const{
    return nombre;
}

int hechizo::getPotencia()const{
    return potencia;
}

void hechizo::setNombre(QString nombre){
    this->nombre=nombre;
}

void hechizo::setPotencia(int potencia){
    this->potencia=potencia;
}

double hechizo::costoMana()const{
    return getPotencia();
}

