#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QPushButton;
class QProgressBar;
class QSlider;

class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = nullptr);

private:
    int m_counter;
    QPushButton *m_button;
    QPushButton *buttonInfo;
    QPushButton *buttonQuit;
    QProgressBar *progressBar;
    QSlider *slider;

signals:
    void counterReached();

private slots:
    void slotButtonClicked(bool checked);
};

#endif // WINDOW_H
