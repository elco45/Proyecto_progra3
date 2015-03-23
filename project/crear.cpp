#include "crear.h"
#include "ui_crear.h"
#include "hechizo.h"
#include "fuego.h"
#include "agua.h"
#include "tierra.h"
#include "sello.h"
#include <QString>
#include <vector>
#include <QMessageBox>
#include <QPalette>
using namespace std;

vector<hechizo*> tempH;
vector<sello*> tempS;
crear::crear(QWidget *parent,vector<selloP>* l_h,int contador1,int contador2) :
    QDialog(parent),
    ui(new Ui::crear)

{
    h_sello=new hiloSello(this,4);
    h_selloP=new hiloSelloP(this);
    connect(h_sello,SIGNAL(change(int)),this,SLOT(ochanged(int)));
    connect(h_selloP,SIGNAL(cambio()),this,SLOT(ocambio()));
    l_selloP=l_h;
    cont1=contador1;
    cont2=contador2;
    ui->setupUi(this);
    //background
    QPalette pal;
    pal.setBrush(this->backgroundRole(),QBrush(QImage("./images/back4.jpg")));
    this->setPalette(pal);
    /*setStyleSheet("QTableWidget {background-color: transparent;}"
                  "QHeaderView::section {background-color: transparent;}");*/
    QPalette pal1;
    pal1.setColor(foregroundRole(),Qt::red);
    ui->lb->setPalette(pal1);
    ui->label_4->setPalette(pal1);
    ui->label_5->setPalette(pal1);
}

crear::~crear(){
    delete ui;
}

void crear::ocambio(){
    double mana=0;
    for(int i=tempS.size()-2; i<tempS.size();i++){
        mana+=tempS.at(i)->getCost();
    }
    selloP* sp=NULL;
    sp=new selloP(mana,tempS);
    l_selloP->push_back(*sp);
    QMessageBox box;
    h_selloP->terminate();
    QPalette pal;
    pal.setBrush(this->backgroundRole(),QBrush(QImage("./images/back5.jpg")));
    this->setPalette(pal);

    box.information(0,"Exito!","Se ha agregado el analisis de un sello prohibido!");
    while(ui->tabla2->rowCount()>0){
        ui->tabla2->removeRow(0);
    }
    QPalette pal1;
    pal1.setBrush(this->backgroundRole(),QBrush(QImage("./images/back4.jpg")));
    this->setPalette(pal1);
    cont2=0;
    tempS.clear();
}

void crear::ochanged(int n){
    if(n==4){
        double mana=0;
        for(int i=tempH.size()-2; i<tempH.size();i++){
            mana+=tempH.at(i)->costoMana();
        }
        h_sello->terminate();
        ui->crearHechizos->setEnabled(true);
        while(ui->tabla1->rowCount()>0){
            ui->tabla1->removeRow(0);
        }

        //sellos prohibidos
        if(ui->tabla2->rowCount()==1){
            h_selloP->start();
        }
        ui->lb->setText("");
        ui->tf_nombre->setText("");
        ui->tf_potencia->setText("");
        sello* seal=NULL;
        seal=new sello(mana,tempH);
        QTableWidgetItem *item1=new QTableWidgetItem(seal->toString());
        QTableWidgetItem *item2=new QTableWidgetItem(seal->c_mana());
        ui->tabla2->insertRow(cont2);
        ui->tabla2->setItem(cont2,0,item1);
        ui->tabla2->setItem(cont2,1,item2);
        cont2++;
        tempS.push_back(seal);
        tempH.clear();

    }else{
        ui->lb->setText(QString::number(n));
    }
}

void crear::on_crearHechizos_clicked(){
    try{
        if(ui->tabla1->rowCount()!=1){
            QString nombre=ui->tf_nombre->text();
            bool esNum;
            int potencia=ui->tf_potencia->text().toInt(&esNum);
            if(!esNum||nombre==""){
                QMessageBox box;
                box.critical(0,"Error","Informacion invalida!");
            }else{
                hechizo* spell=NULL;
                if(ui->rb_fuego->isChecked()){
                    spell=new fuego(nombre,potencia);
                }else if(ui->rb_agua->isChecked()){
                    spell=new agua(nombre,potencia);
                }else if(ui->rb_tierra->isChecked()){
                    spell=new tierra(nombre,potencia);
                }
                tempH.push_back(spell);
                QTableWidgetItem *item1=new QTableWidgetItem(spell->toString());
                QTableWidgetItem *item2=new QTableWidgetItem(QString::number(spell->costoMana()));
                ui->tabla1->insertRow(cont1);
                ui->tabla1->setItem(cont1,0,item1);
                ui->tabla1->setItem(cont1,1,item2);
                ui->tf_nombre->setText("");
                ui->tf_potencia->setText("");
                cont1++;
            }
        }else{
            QString nombre=ui->tf_nombre->text();
            bool esNum;
            int potencia=ui->tf_potencia->text().toInt(&esNum);
            if(!esNum||nombre==""){
                QMessageBox box;
                box.critical(0,"Error","Informacion invalida!");
            }else{
                hechizo* spell=NULL;
                if(ui->rb_fuego->isChecked()){
                    spell=new fuego(nombre,potencia);
                }else if(ui->rb_agua->isChecked()){
                    spell=new agua(nombre,potencia);
                }else if(ui->rb_tierra->isChecked()){
                    spell=new tierra(nombre,potencia);
                }
                tempH.push_back(spell);
                QTableWidgetItem *item1=new QTableWidgetItem(spell->toString());
                QTableWidgetItem *item2=new QTableWidgetItem(QString::number(spell->costoMana()));
                ui->tabla1->insertRow(cont1);
                ui->tabla1->setItem(cont1,0,item1);
                ui->tabla1->setItem(cont1,1,item2);
                ui->tf_nombre->setText("");
                ui->tf_potencia->setText("");
                cont1=0;
                ui->crearHechizos->setEnabled(false);
                h_sello->start();
            }
        }
    }catch(exception & e){

    }
}
