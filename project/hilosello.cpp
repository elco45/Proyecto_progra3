#include "hilosello.h"
#include <QtCore>

hiloSello::hiloSello(QObject *parent,int num) :
    QThread(parent)
{
    n=num;
}

void hiloSello::run(){
    while(true){
        for(int i=1;i <=n;i++){
            emit change(i);
            this->sleep(1);
            if(i==n){
            this->terminate();
            }
        }
    }

}
