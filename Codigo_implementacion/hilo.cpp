#include "hilo.h"




Hilo::Hilo(int tiempo, QObject *parent):QThread(parent)
{
    mTiempo=tiempo;
}

void Hilo::run()
{
    int cont=0;
    while(1){
        //Reiniciar valor
        if(cont==100){
             cont=0;
        }
        //Se emite la señal.
        emit valorCambiado(cont);
        //Tiempo de espera
        msleep(mTiempo);
        ++cont;
    }

}
