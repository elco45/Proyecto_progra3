#include "menu.h"
#include "ui_menu.h"
#include "crear.h"
#include "buscar.h"
#include <vector>
#include "hechizo.h"
#include "sellop.h"
#include <QTextEdit>
using namespace std;


menu::menu(QWidget *parent,vector<selloP*>* l_h,int contador1) :
    QDialog(parent),
    ui(new Ui::menu)
{
    l_selloP=l_h;
    cont=contador1;
    ui->setupUi(this);
    QPalette pal;
    pal.setBrush(this->backgroundRole(),QBrush(QImage("./images/back3.jpg")));
    this->setPalette(pal);
}

menu::~menu()
{
    delete ui;
}

void menu::on_pushButton_clicked()
{
    crear diag(NULL,l_selloP);
    diag.setModal(true);
    diag.exec();
}

void menu::on_pushButton_2_clicked()
{
    buscar diag(NULL,l_selloP);
    diag.setModal(true);
    diag.exec();
}


