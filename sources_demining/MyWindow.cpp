#include "MyWindow.h"
 
MyWindow::MyWindow() : QWidget()
{
    setFixedSize(600, 300);
 
    // Construction of the quit button
    m_button = new QPushButton("Quit button !", this);
    m_button->setFont(QFont("Comic Sans MS", 14));
    m_button->move(0, 0);

    // Construction of the QLCDNumber button
    m_lcd = new QLCDNumber(this);
    m_lcd->setSegmentStyle(QLCDNumber::Flat);
    m_lcd->move(270, 150);

    // Construction of the QProgressBar (variant)
    m_progressBar = new QProgressBar(this);
    m_progressBar->setGeometry(220, 200, 150, 20);

    // Construction of the QSlider button
    m_slider = new QSlider(Qt::Horizontal, this);
    m_slider->setGeometry(220, 100, 150, 20);

    // Connection of the clic button to close the application
    QObject::connect(m_button, SIGNAL(clicked()), qApp, SLOT(quit())); // We can remove QObject behind connect because MyWindow is a QWidget which is a QObject
    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_lcd, SLOT(display(int))) ;
    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_progressBar, SLOT(setValue(int)));
}
