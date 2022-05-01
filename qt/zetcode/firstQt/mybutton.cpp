#include <QPushButton>
#include <QApplication>
#include "mybutton.h"

MyButton::MyButton(QWidget *parent) : QWidget(parent)
{
    auto *quitBtn = new QPushButton("Quit", parent);
    quitBtn->setGeometry(50, 160, 75, 30);

    connect(quitBtn, &QPushButton::clicked, QApplication::instance(), &QApplication::quit);
}
