#include "simplemenu.h"
#include "anothermenu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    AnotherMenu window;

    window.resize(350, 250);
    window.setWindowTitle("Another menu");
    window.show();

    return app.exec();
}
