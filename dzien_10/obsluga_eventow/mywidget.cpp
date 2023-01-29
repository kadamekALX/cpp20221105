#include "mywidget.h"
#include "przycisk.h"

#include <QMouseEvent>
#include <QPainter>

//zmodyfikuj MyWidget tak, aby mały czerwony kwadrat był rysowany na
//wspolrzednych ostatniego kliknięcia

void MyWidget::mousePressEvent(QMouseEvent *e)
{
    x = e->x();
    y = e->y();

    update(); // uwaga, trzeba przerysowac widget
}

void MyWidget::paintEvent(QPaintEvent *event)
{
    QPainter malarz{this};
    malarz.drawLine(100, 100, 400, 200);

    QBrush pedzel{Qt::red};
//    malarz.fillRect(100, 100, 100, 200, pedzel);
    malarz.fillRect(x - 10, y - 10, 20, 20, pedzel);
}

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    x = 0;
    y = 0;
    setFixedSize(500, 500);

//    Przycisk* p = new Przycisk{this};
//    p->resize(200, 100);
//    QPushButton* btn = new QPushButton{this};
//    btn->resize(200, 100);
//    btn->move(0, 100);
}

MyWidget::~MyWidget()
{
}

