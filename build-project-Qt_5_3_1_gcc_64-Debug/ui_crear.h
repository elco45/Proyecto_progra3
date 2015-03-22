/********************************************************************************
** Form generated from reading UI file 'crear.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREAR_H
#define UI_CREAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_crear
{
public:
    QLabel *label_2;
    QGroupBox *grupo1;
    QRadioButton *rb_fuego;
    QRadioButton *rb_agua;
    QRadioButton *rb_tierra;
    QLabel *label;
    QLineEdit *tf_nombre;
    QLabel *label_3;
    QLineEdit *tf_potencia;
    QPushButton *crearHechizos;
    QTableWidget *tabla1;
    QTableWidget *tabla2;
    QLabel *lb;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *crear)
    {
        if (crear->objectName().isEmpty())
            crear->setObjectName(QStringLiteral("crear"));
        crear->resize(628, 596);
        label_2 = new QLabel(crear);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 20, 231, 17));
        grupo1 = new QGroupBox(crear);
        grupo1->setObjectName(QStringLiteral("grupo1"));
        grupo1->setGeometry(QRect(20, 50, 231, 61));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Active, QPalette::Link, brush);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        grupo1->setPalette(palette);
        rb_fuego = new QRadioButton(grupo1);
        rb_fuego->setObjectName(QStringLiteral("rb_fuego"));
        rb_fuego->setGeometry(QRect(0, 30, 71, 22));
        rb_fuego->setAutoFillBackground(false);
        rb_fuego->setChecked(true);
        rb_agua = new QRadioButton(grupo1);
        rb_agua->setObjectName(QStringLiteral("rb_agua"));
        rb_agua->setGeometry(QRect(80, 30, 71, 22));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush2(QColor(76, 76, 76, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::NoRole, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::NoRole, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::NoRole, brush);
        rb_agua->setPalette(palette1);
        rb_tierra = new QRadioButton(grupo1);
        rb_tierra->setObjectName(QStringLiteral("rb_tierra"));
        rb_tierra->setGeometry(QRect(150, 30, 81, 22));
        QPalette palette2;
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush4(QColor(127, 127, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 170, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        rb_tierra->setPalette(palette2);
        label = new QLabel(crear);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 130, 67, 17));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush7(QColor(159, 158, 158, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        label->setPalette(palette3);
        tf_nombre = new QLineEdit(crear);
        tf_nombre->setObjectName(QStringLiteral("tf_nombre"));
        tf_nombre->setGeometry(QRect(120, 120, 201, 27));
        label_3 = new QLabel(crear);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 180, 67, 17));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        label_3->setPalette(palette4);
        tf_potencia = new QLineEdit(crear);
        tf_potencia->setObjectName(QStringLiteral("tf_potencia"));
        tf_potencia->setGeometry(QRect(120, 180, 201, 27));
        crearHechizos = new QPushButton(crear);
        crearHechizos->setObjectName(QStringLiteral("crearHechizos"));
        crearHechizos->setGeometry(QRect(400, 150, 99, 27));
        tabla1 = new QTableWidget(crear);
        if (tabla1->columnCount() < 2)
            tabla1->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabla1->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabla1->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tabla1->setObjectName(QStringLiteral("tabla1"));
        tabla1->setGeometry(QRect(40, 260, 551, 121));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        tabla1->setPalette(palette5);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        tabla1->setFont(font);
        tabla1->setAutoFillBackground(false);
        tabla1->setAutoScrollMargin(15);
        tabla1->horizontalHeader()->setCascadingSectionResizes(true);
        tabla1->horizontalHeader()->setDefaultSectionSize(270);
        tabla1->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tabla1->verticalHeader()->setDefaultSectionSize(30);
        tabla2 = new QTableWidget(crear);
        if (tabla2->columnCount() < 2)
            tabla2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabla2->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabla2->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        tabla2->setObjectName(QStringLiteral("tabla2"));
        tabla2->setGeometry(QRect(40, 460, 551, 111));
        QPalette palette6;
        QBrush brush8(QColor(170, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        tabla2->setPalette(palette6);
        tabla2->setFont(font);
        tabla2->setAutoScrollMargin(15);
        tabla2->horizontalHeader()->setCascadingSectionResizes(true);
        tabla2->horizontalHeader()->setDefaultSectionSize(270);
        tabla2->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tabla2->verticalHeader()->setDefaultSectionSize(30);
        lb = new QLabel(crear);
        lb->setObjectName(QStringLiteral("lb"));
        lb->setGeometry(QRect(590, 310, 67, 17));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        lb->setFont(font1);
        label_4 = new QLabel(crear);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 230, 231, 17));
        label_4->setFont(font1);
        label_5 = new QLabel(crear);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 420, 231, 17));
        label_5->setFont(font1);

        retranslateUi(crear);

        QMetaObject::connectSlotsByName(crear);
    } // setupUi

    void retranslateUi(QDialog *crear)
    {
        crear->setWindowTitle(QApplication::translate("crear", "Dialog", 0));
        label_2->setText(QApplication::translate("crear", "Sellos Prohibidos", 0));
        grupo1->setTitle(QApplication::translate("crear", " Elemento", 0));
        rb_fuego->setText(QApplication::translate("crear", "Fuego", 0));
        rb_agua->setText(QApplication::translate("crear", "Agua", 0));
        rb_tierra->setText(QApplication::translate("crear", "Tierra", 0));
        label->setText(QApplication::translate("crear", "Nombre", 0));
        label_3->setText(QApplication::translate("crear", "Potencia", 0));
        crearHechizos->setText(QApplication::translate("crear", "Crear", 0));
        QTableWidgetItem *___qtablewidgetitem = tabla1->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("crear", "Elemento/Nombre", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tabla1->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("crear", "Costo de Mana", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tabla2->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("crear", "Elementos", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tabla2->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("crear", "Costo de Mana", 0));
        lb->setText(QString());
        label_4->setText(QApplication::translate("crear", "Hechizos", 0));
        label_5->setText(QApplication::translate("crear", "Sellos", 0));
    } // retranslateUi

};

namespace Ui {
    class crear: public Ui_crear {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREAR_H
