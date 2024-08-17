#include "mainwindow.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <login.h>

int X = 0;
int Y = 0;
QString name;
QString birthday;
QString username;
QString gender;
QString personality;
QString hobbies;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "POLL_" + QLocale(locale).name();

        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    Login l;
    l.show();
    QObject::connect(&l, SIGNAL(show_mainwindow()), &w, SLOT(receiveLogin()));
    return a.exec();
}
