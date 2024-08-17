#ifndef Q_ONE_H
#define Q_ONE_H

#include <QWidget>

namespace Ui {
class q_one;
}

class q_one : public QWidget
{
    Q_OBJECT

public:
    explicit q_one(QWidget *parent = nullptr);
    ~q_one();

private:
    Ui::q_one *ui;
};

#endif // Q_ONE_H
