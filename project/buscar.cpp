#include "buscar.h"
#include "ui_buscar.h"
#include <vector>
#include "hechizo.h"
#include "sellop.h"
#include <QTextEdit>
#include <QTreeWidget>
#include <QString>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
using namespace std;

buscar::buscar(QWidget *parent,vector<selloP>* l_h) :
    QDialog(parent),
    ui(new Ui::buscar)
{
    l_selloP=l_h;
    ui->setupUi(this);
    QPalette pal;
    pal.setBrush(this->backgroundRole(),QBrush(QImage("./images/back1.jpg")));
    this->setPalette(pal);
    try{
        addRoot("Sellos Prohibidos");
    }catch(exception &e){

    }
}

buscar::~buscar()
{
    delete ui;
}

QTextEdit* buscar::getTa(){
    return ui->ta_selloP;
}

QTreeWidget* buscar::getTree(){
    return ui->tw_selloP;
}

void buscar::addRoot(QString name){
    QTreeWidgetItem *itm=new QTreeWidgetItem(ui->tw_selloP);
    itm->setText(0,name);
    QString temp;
    for(int i=0;i<l_selloP->size();i++){
        temp="Sello "+QString::number(i);
        addChild(itm,temp);
    }
}

void buscar::addChild(QTreeWidgetItem *parent,QString name){
    QTreeWidgetItem *itm=new QTreeWidgetItem();
    itm->setText(0,name);
    parent->addChild(itm);
}

void buscar::write(QString filename){
    QFile mFile(filename);
    QMessageBox box;
    QString texto=ui->ta_selloP->toPlainText();
    if(!mFile.open(QFile::WriteOnly|QFile::Text)){
        box.critical(0,"Error","No se pudo abrir archivo!");
        return;
    }
    QTextStream out(&mFile);
    out<<texto;
    mFile.flush();
    mFile.close();
}

void buscar::on_bt_obs_clicked(){
    try{
        int pos=ui->tw_selloP->currentIndex().row();
        ui->ta_selloP->setText(l_selloP->at(pos).toString(pos));
    }catch(exception &e){
        QMessageBox box;
        box.critical(0,"Error","No ha seleccionado ningun sello!");
    }
}

void buscar::on_bt_exp_clicked(){
    QString filename="./text/selloP.txt";
    write(filename);
    ui->ta_selloP->setText("");
    QMessageBox box;
    box.information(0,"Informacion","Se a agregado exitosamente!");
}
