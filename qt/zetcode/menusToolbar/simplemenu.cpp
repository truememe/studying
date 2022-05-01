#include "simplemenu.h"
#include <QMenu>
#include <QMenuBar>
#include <QApplication>
#include <QAction>

SimpleMenu::SimpleMenu(QWidget *parent) : QMainWindow(parent)
{
    auto *quit = new QAction("&Quit", this);

    QMenu *file = menuBar()->addMenu("&File");
    file->addAction(quit);

    connect(quit, &QAction::triggered, qApp, QApplication::quit);
}
