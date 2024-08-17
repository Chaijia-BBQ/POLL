#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <q_one.h>
#include <QPushButton>
//#include <exit_button.h>
#include <QRandomGenerator>

extern int X;
extern int Y;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_In_clicked();
    void on_Exit_clicked();
    void receiveLogin();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
