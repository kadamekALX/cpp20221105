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

public slots:
    void przyciskWcisniety();
    void przycisk2Wcisniety();

private:
    QPushButton* przycisk;
    QPushButton* przycisk2;
    int licznik;
    int licznik2;
};
#endif // MYWIDGET_H
