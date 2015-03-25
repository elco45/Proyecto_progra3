#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu.h"
#include "hechizo.h"
#include "sellop.h"
#include <vector>
#include <QPixmap>
#include <QIcon>
#include <QPalette>
using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    l_s = new vector<selloP*>();
    contador1=1;
    contador2=1;
    ui->setupUi(this);
    QPixmap pix("./images/btn1.png");
    QIcon icon(pix);
    ui->pushButton->setIcon(icon);
    QPalette pal;
    pal.setBrush(this->backgroundRole(),QBrush(QImage("./images/ph1.jpg")));
    this->setPalette(pal);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    menu diag(NULL,l_s);
    diag.setModal(true);
    diag.exec();
}
