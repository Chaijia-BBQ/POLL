#ifndef FINDINGS_H
#define FINDINGS_H

#include <QWidget>
#include <login.h>

namespace Ui {
class Findings;
}

class Findings : public QWidget
{
    Q_OBJECT

public:
    explicit Findings(QWidget *parent = nullptr);
    ~Findings();

private:
    Ui::Findings *ui;
};

#endif // FINDINGS_H
