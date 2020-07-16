#include "widget.h"
#include "ui_widget.h"
#include"hilo.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //Instanciamiento
    hilo1=new Hilo(10,this);
    hilo2=new Hilo(20,this);
    hilo3=new Hilo(40,this);
    //Inicialización elementos interfaz
    ui->progressBar->setValue(0);
    ui->dial->setValue(0);
    ui->lcdNumber->display(0);
    //Conexiones
    connect(hilo1,&Hilo::valorCambiado,ui->progressBar,&QProgressBar::setValue);
    connect(hilo2,&Hilo::valorCambiado,ui->dial,&QDial::setValue);
    connect(hilo3,SIGNAL(valorCambiado(int)),ui->lcdNumber,SLOT(display(int)));
}

Widget::~Widget()
{
    delete ui;
}

//Inicio y final ejecucuión según botones
void Widget::on_Iniciar_clicked()
{
    hilo1->start();
    hilo2->start();
    hilo3->start();
}

void Widget::on_Detener_clicked()
{
    hilo1->terminate();
    hilo2->terminate();
    hilo3->terminate();
}
