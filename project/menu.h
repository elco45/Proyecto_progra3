#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include <vector>
#include "hechizo.h"
#include "sellop.h"
using namespace std;

namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = 0,vector<selloP*>* =0,int=0);
    ~menu();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::menu *ui;
    vector<selloP*>* l_selloP;
    int cont;
};

#endif // MENU_H
