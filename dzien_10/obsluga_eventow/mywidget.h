#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

class MyWidget : public QWidget
{
    Q_OBJECT

protected:
    void mousePressEvent(QMouseEvent* e) override;
    void paintEvent(QPaintEvent *event) override;

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

private:
    int x;
    int y;
};
#endif // MYWIDGET_H
