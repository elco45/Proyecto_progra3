#ifndef CREAR_H
#define CREAR_H

#include <QDialog>
#include <vector>
#include "hechizo.h"
#include "sellop.h"
#include "hilosello.h"
#include "hilosellop.h"
using namespace std;

namespace Ui {
class crear;
}

class crear : public QDialog
{
    Q_OBJECT

public:
    explicit crear(QWidget *parent = 0,vector<selloP*>* =0,int =0,int =0);
    ~crear();
    hiloSello *h_sello;
    hiloSelloP *h_selloP;
private slots:
    void on_crearHechizos_clicked();

private:
    Ui::crear *ui;
    vector<selloP*>* l_selloP;
    int cont1;
    int cont2;
public slots:
    void ochanged(int);
    void ocambio();
};

#endif // CREAR_H
