#ifndef DEF_MYWINDOW
#define DEF_MYWINDOW
 
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>
#include <QProgressBar>
 
class MyWindow : public QWidget // On hérite de QWidget (IMPORTANT)
{
    public:
    MyWindow();
 
    private:
    QLCDNumber *m_lcd;
    QSlider *m_slider;
    QPushButton *m_button;
    QProgressBar *m_progressBar;
};
 
#endif
