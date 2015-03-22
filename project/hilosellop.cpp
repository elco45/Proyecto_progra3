#include "hilosellop.h"

hiloSelloP::hiloSelloP(QObject *parent) :
    QThread(parent)
{
}

void hiloSelloP::run(){
    while(true){
        emit cambio();
        this->sleep(2);
    }

}
