#ifndef DEF_MYWINDOW
#define DEF_MYWINDOW
 
#include <QApplication>
#include <QWidget>
#include <QPushButton>
 
class MyWindow : public QWidget // On hérite de QWidget (IMPORTANT)
{
    public:
    MyWindow();
 
    private:
    QPushButton *m_button; 
};
 
#endif
