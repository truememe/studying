#include <QApplication>
#include <QWidget>
#include "Cursors.h"
#include "mybutton.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Cursors window;
    MyButton button(&window);

    button.show();

    window.resize(350,200);
    window.setWindowTitle("Simple example");
    window.setToolTip("QWidget");
    window.show();


    return app.exec();
}
