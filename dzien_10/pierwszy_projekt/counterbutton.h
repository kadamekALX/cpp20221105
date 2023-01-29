#ifndef COUNTERBUTTON_H
#define COUNTERBUTTON_H

#include <QPushButton>

class CounterButton : public QPushButton
{
    Q_OBJECT
public:
    CounterButton(QWidget* parent = nullptr);
public slots:
    void przyciskWcisniety();
private:
    int licznik;
};

#endif // COUNTERBUTTON_H
