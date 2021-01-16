#include "MyWindow.h"
 
MyWindow::MyWindow() : QWidget()
{
    setFixedSize(300, 150);
 
    // Construction of the button
    m_button = new QPushButton("Quit button !", this);
    m_button->setFont(QFont("Comic Sans MS", 14));
    m_button->move(110, 50);

    // Connection of the clic button to close the application
    QObject::connect(m_button, SIGNAL(clicked()), qApp, SLOT(quit())); // We can remove QObject behind connect because MyWindow is a QWidget which is a QObject

}
