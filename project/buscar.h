#ifndef BUSCAR_H
#define BUSCAR_H

#include <QDialog>
#include <QtCore>
#include <QTreeWidget>
#include <vector>
#include "hechizo.h"
#include "sellop.h"
#include <QTextEdit>
#include <QString>
using namespace std;

namespace Ui {
class buscar;
}

class buscar : public QDialog
{
    Q_OBJECT
    void addRoot(QString name);
    void addChild(QTreeWidgetItem *parent,QString name);
    void write(QString filename);
public:
    explicit buscar(QWidget *parent = 0,vector<selloP*>* =0);
    ~buscar();
    QTextEdit* getTa();
    QTreeWidget* getTree();
private slots:
    void on_bt_obs_clicked();

    void on_bt_exp_clicked();

    void on_tw_selloP_doubleClicked(const QModelIndex &index);

private:
    Ui::buscar *ui;
    vector<selloP*>* l_selloP;
};

#endif // BUSCAR_H
