#include <QApplication>
#include <QTextEdit>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QTextEdit txt;

    txt.show();
    txt.setText("Petit message de test\nCa marche ?\tYEAHHHHHH");

    return app.exec();
}
