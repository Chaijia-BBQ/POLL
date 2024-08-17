#ifndef QUESTION_H
#define QUESTION_H

#include <QWidget>

namespace Ui {
class question;
}

class question : public QWidget
{
    Q_OBJECT

public:
    explicit question(QWidget *parent = nullptr);
    ~question();
    //Ui::question *ui;
    int Q;

signals:
    void q_change();

private slots:
    void on_A_clicked();

    void on_B_clicked();

    void on_C_clicked();

    void on_A_2_clicked();

    void on_B_2_clicked();

    void on_C_2_clicked();

    void question_change();

    void on_Submit_clicked();

private:
    Ui::question *ui;
};

#endif // QUESTION_H
