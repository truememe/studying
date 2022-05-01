#ifndef PLUSMINUS_H
#define PLUSMINUS_H

#include <QWidget>
#include <QLabel>

class plusminus : public QWidget
{
    Q_OBJECT
public:
    explicit plusminus(QWidget *parent = nullptr);

private:
    QLabel *lbl;

signals:


private slots:
    void OnPlus();
    void OnMinus();
};

#endif // PLUSMINUS_H
