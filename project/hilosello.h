#ifndef HILOSELLO_H
#define HILOSELLO_H

#include <QThread>

class hiloSello : public QThread
{
    Q_OBJECT
public:
    explicit hiloSello(QObject *parent = 0, int num=0);
    void run();
signals:
    void change(int);
private:
    int n;
};

#endif // HILOSELLO_H
