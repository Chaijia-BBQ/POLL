#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

extern QString name;
extern QString birthday;
extern QString username;
extern QString gender;
extern QString personality;
extern QString hobbies;

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();


signals:
    void show_mainwindow();

private slots:
    void on_Login_Button_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
