/********************************************************************************
** Form generated from reading UI file 'buscar.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCAR_H
#define UI_BUSCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_buscar
{
public:
    QTextEdit *ta_selloP;
    QTreeWidget *tw_selloP;
    QPushButton *bt_obs;
    QPushButton *bt_exp;

    void setupUi(QDialog *buscar)
    {
        if (buscar->objectName().isEmpty())
            buscar->setObjectName(QStringLiteral("buscar"));
        buscar->resize(843, 597);
        ta_selloP = new QTextEdit(buscar);
        ta_selloP->setObjectName(QStringLiteral("ta_selloP"));
        ta_selloP->setGeometry(QRect(370, 30, 441, 341));
        tw_selloP = new QTreeWidget(buscar);
        tw_selloP->setObjectName(QStringLiteral("tw_selloP"));
        tw_selloP->setGeometry(QRect(20, 30, 331, 481));
        QPalette palette;
        QBrush brush(QColor(170, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(159, 158, 158, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        tw_selloP->setPalette(palette);
        bt_obs = new QPushButton(buscar);
        bt_obs->setObjectName(QStringLiteral("bt_obs"));
        bt_obs->setGeometry(QRect(110, 540, 99, 27));
        bt_exp = new QPushButton(buscar);
        bt_exp->setObjectName(QStringLiteral("bt_exp"));
        bt_exp->setGeometry(QRect(490, 410, 161, 27));

        retranslateUi(buscar);

        QMetaObject::connectSlotsByName(buscar);
    } // setupUi

    void retranslateUi(QDialog *buscar)
    {
        buscar->setWindowTitle(QApplication::translate("buscar", "Dialog", 0));
        QTreeWidgetItem *___qtreewidgetitem = tw_selloP->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("buscar", "Analisis", 0));
        bt_obs->setText(QApplication::translate("buscar", "Observar ", 0));
        bt_exp->setText(QApplication::translate("buscar", "Exportar a Archivo", 0));
    } // retranslateUi

};

namespace Ui {
    class buscar: public Ui_buscar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCAR_H
