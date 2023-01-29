#include "przycisk.h"

#include <QMouseEvent>

void Przycisk::mousePressEvent(QMouseEvent *e)
{
//    if (e->button() == Qt::LeftButton)
//        setText("Lewy");
//    else if (e->button() == Qt::RightButton)
//        setText("Prawy");
    setText(QString::number(e->x()) + ", " + QString::number(e->y()));
    QPushButton::mousePressEvent(e);
}

void Przycisk::mouseReleaseEvent(QMouseEvent *e)
{
    setText("");
    QPushButton::mouseReleaseEvent(e);
}

Przycisk::Przycisk(QWidget* parent)
    : QPushButton{parent}
{

}

//napisz handler mousePressEvent, który przestawi tresc
// przycisku na współrzędne kliknięcia
