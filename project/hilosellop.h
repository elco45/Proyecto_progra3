#ifndef HILOSELLOP_H
#define HILOSELLOP_H

#include <QThread>

class hiloSelloP : public QThread
{
    Q_OBJECT
public:
    explicit hiloSelloP(QObject *parent = 0);
    void run();
signals:
    void cambio();
};

#endif
