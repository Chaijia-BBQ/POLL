#include "findings.h"
#include "ui_findings.h"
#include<QFont>

Findings::Findings(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Findings)
{
    ui->setupUi(this);
    QFont font;
    font.setPointSize(22);
    ui->Name->setFont(font);
    ui->Birthday->setFont(font);
    ui->UserName->setFont(font);
    ui->Gender->setFont(font);
    ui->Personality->setFont(font);
    ui->Hobbies->setFont(font);
    ui->Hobbies->setText(hobbies);
    ui->Name->setText(name);
    ui->Birthday->setText(birthday);
    ui->UserName->setText(username);
    ui->Gender->setText(gender);
    ui->Personality->setText(personality);
    ui->Hobbies->setText(hobbies);

}

Findings::~Findings()
{
    delete ui;
}
