#ifndef PRZYCISK_H
#define PRZYCISK_H

#include <QPushButton>

class Przycisk : public QPushButton
{
    Q_OBJECT

protected:
    void mousePressEvent(QMouseEvent *e) override;
    void mouseReleaseEvent(QMouseEvent *e) override;

public:
    Przycisk(QWidget* parent = nullptr);
};

#endif // PRZYCISK_H
