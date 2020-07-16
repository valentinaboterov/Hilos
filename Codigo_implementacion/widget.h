#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget;
}
QT_END_NAMESPACE
class Hilo;
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_Iniciar_clicked();

    void on_Detener_clicked();

private:
    Ui::Widget *ui;
    Hilo *hilo1;
    Hilo *hilo2;
    Hilo *hilo3;

};
#endif // WIDGET_H
