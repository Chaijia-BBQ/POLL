#include "question.h"
#include "ui_question.h"
#include <QDebug>
#include <QFont>
#include <QMessageBox>
#include <findings.h>
#include <QPixmap>
#include <QIcon>


question::question(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::question)
{
    ui->setupUi(this);
    ui->A->setFont(QFont("宋体", 36));
    ui->B->setFont(QFont("宋体", 36));
    ui->C->setFont(QFont("宋体", 36));
    ui->A_2->setFont(QFont("宋体", 36));
    ui->B_2->setFont(QFont("宋体", 36));
    ui->C_2->setFont(QFont("宋体", 36));
    Q = 0;
    qDebug()<<"Q值："<<Q<<"\n";
    QFont font;
    font.setPointSize(22);
    ui->q_one->setFont(font);
    ui->q_two->setFont(font);
    ui->Submit->setFont(font);
}

question::~question()
{
    delete ui;
}

void question::question_change()
{
    Q++;
    qDebug()<<"Q值："<<Q<<"\n";
    switch (Q) {
    case 1:

        ui->q_one->setText("1. 当你看到镜子里的自己时，你认为：\n\
   A. 这是谁，这么帅/美？\n\
   B. 镜子里是不是有个猪头？\n\
   C. 我需要换个镜子了。");
        break;
    case 2:
        ui->q_two->setText("2. 如果你发现自己在猪圈里，你的第一个想法是：\n\
   A. 我是不是走错地方了？\n\
   B. 这里的食物看起来不错。\n\
   C. 我是不是变成了猪？");
        break;
    case 3:
        ui->q_one->setText("3. 当你饿了，你会选择：\n\
   A. 去找点好吃的。\n\
   B. 去拱地找吃的。\n\
   C. 去睡觉，忘记饥饿。");
        break;
    case 4:
        ui->q_two->setText("4. 如果你看到一块泥地，你的第一反应是：\n\
    A. 避开它，保持干净。\n\
    B. 跳进去，享受泥浴。\n\
    C. 思考泥地的地质成分。");
        break;
    case 5:
        ui->q_one->setText("5. 当你听到“猪队友”这个词时，你认为：\n\
    A. 这是在说一个不擅长团队合作的人。\n\
    B. 这是在说一个真正的猪。\n\
    C. 这是在叫我。");
        break;
    case 6:
        ui->q_two->setText("6. 如果你有机会选择变成任何动物，你会选择：\n\
    A. 变成一只鸟，自由飞翔。\n\
    B. 变成一只猪，享受生活。\n\
    C. 变成一只猫，慵懒自在。");
        break;
    case 7:
        ui->q_one->setText("7. 当你看到食物时，你的反应是：\n\
    A. 慢慢品尝，享受美味。\n\
    B. 立刻扑上去，大快朵颐。\n\
    C. 先拍照，再慢慢享用。");
        break;
    case 8:
        ui->q_two->setText("8. 如果你发现自己在睡觉时打呼，你会：\n\
    A. 感到尴尬，尝试改变睡姿。\n\
    B. 认为这是猪的天性，继续睡。\n\
    C. 完全不理会，继续打呼。");
        break;
    case 9:
        ui->q_one->setText("9. 当你看到有人在笑你，你认为：\n\
    A. 他们可能误解了什么。\n\
    B. 他们一定是在羡慕我的猪样。\n\
    C. 我一定是做了什么搞笑的事情。");
        break;
    case 10:
        ui->q_two->setText("10. 如果你有机会获得一种超能力，你希望是：\n\
     A. 飞行能力。\n\
     B. 变成隐形猪。\n\
     C. 瞬间移动到任何有美食的地方。");
        break;
    default:
        break;
    }

}

void question::on_A_clicked()
{
    question_change();
}


void question::on_B_clicked()
{
    question_change();
}


void question::on_C_clicked()
{
    question_change();
}


void question::on_A_2_clicked()
{
    question_change();
}


void question::on_B_2_clicked()
{
    question_change();
}


void question::on_C_2_clicked()
{
    question_change();
}


void question::on_Submit_clicked()
{
    if(Q<=10)
    {
        QMessageBox msgbox;
        //QIcon icon(":/ico/pig.jpg");
       // QIcon abb(":/path/to/myicon.png"); // 如果你的图标在Qt资源文件中
        //msgbox.setIcon(icon);

        msgbox.setWindowTitle("猪猪鉴定器提醒您");
        QPushButton *recognizeButton = msgbox.addButton(tr("我知道了"),QMessageBox::ActionRole);
        msgbox.setText(tr("请不要空题或漏题哟！"));
        msgbox.setIconPixmap(QPixmap(":/icon/pig.ico"));
        msgbox.exec();

        //QMessageBox::information(NULL, "猪猪鉴定器提醒您", "请不要空题或漏题哟！", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);



    }
    if(Q > 10)
    {
        this->close();
        Findings *f = new Findings();
        f->show();
    }
}

