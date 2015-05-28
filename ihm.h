#ifndef IHM_H
#define IHM_H

#include <QWidget>

namespace Ui {
class Ihm;
}

class Ihm : public QWidget
{
    Q_OBJECT

public:
    explicit Ihm(QWidget *parent = 0);
    ~Ihm();

private:
    Ui::Ihm *ui;
};

#endif // IHM_H
