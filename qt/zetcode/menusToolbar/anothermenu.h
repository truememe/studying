#ifndef ANOTHERMENU_H
#define ANOTHERMENU_H

#include <QMainWindow>

class AnotherMenu : public QMainWindow
{
    Q_OBJECT
public:
    explicit AnotherMenu(QWidget *parent = nullptr);

private slots:
    void toggleStatusBar();

private:
    QAction *viewst;

signals:

};

#endif // ANOTHERMENU_H
