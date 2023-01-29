#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QPushButton>
#include <QWidget>

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

private:
};
#endif // MYWIDGET_H
