#include "q_one.h"
#include "ui_q_one.h"

q_one::q_one(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::q_one)
{
    ui->setupUi(this);
}

q_one::~q_one()
{
    delete ui;
}
