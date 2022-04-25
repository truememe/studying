#include "window.h"
#include <QApplication>
#include <QPushButton>
#include <QProgressBar>
#include <QSlider>

Window::Window(QWidget *parent) : QWidget(parent)
{

    setFixedSize(200,150);

    m_button = new QPushButton("Quit", this);
    m_button->setGeometry(10, 70, 180, 30);
    m_button->setCheckable(true);
    m_counter = 0;

    progressBar = new QProgressBar(this);
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setGeometry(10, 10, 180, 30);

    slider = new QSlider(this);
    slider->setOrientation(Qt::Horizontal);
    slider->setRange(0, 100);
    slider->setValue(0);
    slider->setGeometry(10, 40, 180, 30);

    buttonInfo = new QPushButton(this);
    buttonInfo->setGeometry(10, 110, 60, 30);
    buttonInfo->setText("Info");

    buttonQuit = new QPushButton(this);
    buttonQuit->setGeometry(130, 110, 60, 30);
    buttonQuit->setText("Quit");


    QObject::connect(slider, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));
    connect(m_button, SIGNAL(clicked(bool)), this, SLOT(slotButtonClicked(bool)));
    connect(this, SIGNAL(counterReached()), QApplication::instance(), SLOT(quit()));
    connect(buttonQuit, SIGNAL(clicked(bool)), QApplication::instance(), SLOT(quit()));
    connect(buttonInfo, SIGNAL(clicked(bool)), QGuiApplication::instance(), SLOT(QApplication::aboutQt()));
}

void Window::slotButtonClicked(bool checked)
{
    if(checked)
    {
        m_button->setText("Checked!");
    }
    else
    {
        m_button->setText("Hello!");
    }

    m_counter++;
    if(m_counter == 10)
    {
        emit counterReached();
    }
}
