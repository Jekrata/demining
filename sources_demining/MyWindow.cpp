#include "MyWindow.h"
 
MyWindow::MyWindow() : QWidget()
{
    setFixedSize(300, 150);
 
    // Construction du bouton
    m_button = new QPushButton("Trying to show a button !", this);
 
    m_button->setFont(QFont("Comic Sans MS", 14));
    m_button->setCursor(Qt::PointingHandCursor);
    m_button->setIcon(QIcon("smile.png"));
    m_button->move(60, 50);
}
