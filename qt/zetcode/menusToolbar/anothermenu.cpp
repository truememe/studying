#include "anothermenu.h"
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QApplication>
#include <QStatusBar>
#include <QStyle>
#include <QToolBar>

AnotherMenu::AnotherMenu(QWidget *parent) : QMainWindow(parent)
{
    QPixmap newpix("new.png");
    QPixmap openpix("open.png");
    QPixmap quitpix("quit.png");
    QPixmap toolpix("tool.png");

    auto *newa = new QAction(newpix, "&New", this);
    auto *opena = new QAction(openpix, "&Open", this);
    auto *quita = new QAction(quitpix, "&Quit", this);
    quita->setShortcut(tr("CTRL+Q"));

    QMenu *file = menuBar()->addMenu("&File");
    file->addAction(newa);
    file->addAction(opena);
    file->addSeparator();
    file->addAction(quita);

//    viewst = new QAction("&View statusbar", this);
//    viewst->setCheckable(true);
//    viewst->setChecked(true);
    QToolBar *toolbar = addToolBar("main toolbar");
    viewst = toolbar->addAction(QIcon(toolpix), "Toggle statusbar");
    viewst->setCheckable(true);
    viewst->setChecked(true);


    statusBar();
    statusBar()->setToolTip("xddd");


    qApp->setAttribute(Qt::AA_DontShowIconsInMenus, false);

    connect(quita, &QAction::triggered, qApp, &QApplication::quit);
    connect(viewst, &QAction::triggered, this, &AnotherMenu::toggleStatusBar);
}

void AnotherMenu::toggleStatusBar()
{
    if (viewst->isChecked())
    {
        statusBar()->show();
    }
    else
    {
        statusBar()->hide();
    }
}
