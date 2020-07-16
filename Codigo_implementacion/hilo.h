#ifndef HILO_H
#define HILO_H

#include<QThread>
class Hilo:public QThread
{
    Q_OBJECT;
public:
    Hilo(int tiempo,QObject *parent=nullptr);
signals:
 void valorCambiado(int);
protected:
    //Redefinir el metodo run()
    void run() override;
private:
    int mTiempo; //milisegundos
};

#endif // HILO_H
