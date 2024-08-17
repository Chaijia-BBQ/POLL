#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->Login_Button->setFont(QFont("宋体", 36));
}

Login::~Login()
{
    delete ui;
}

void Login::on_Login_Button_clicked()
{
    name = ui->Name->text();
    birthday = ui->Birthday->text();
    username = ui->UserName->text();
    gender = ui->Gender->text();
    personality = ui->Personality->text();
    hobbies = ui->Hobbies->text();
    this->close();
    emit show_mainwindow();
}

