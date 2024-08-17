#include "mainwindow.h"
#include "ui_mainwindow.h"

extern int X;
extern int Y;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->In->setFont(QFont("宋体", 22));
    ui->Exit->setFont(QFont("宋体", 22));
    X = 0;
    Y = 0;

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::receiveLogin()
{
    this->show();
}

void MainWindow::on_In_clicked()
{
    this->close();
    //secondwidget *q_one = new secondwidget();
    //q_one->show();
}

void MainWindow::on_Exit_clicked()
{
    X = QRandomGenerator::global()->bounded(800);
    Y = QRandomGenerator::global()->bounded(600);
    ui->Exit->setGeometry(X,Y,200,100);
}

