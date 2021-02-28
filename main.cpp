#include <QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QMainWindow>
#include "mainview.h"
#include "ui_uiinput.h"
#include "uiinput.h"
#include <QGLFormat>
#include "mainwindow.h"
#include <QSpacerItem>
#include <QDebug>



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow *window = new MainWindow();
    // The main window
    QWidget* win = new QWidget(window);



    QGLFormat format;
    format.setVersion(4,0);
    format.setProfile(QGLFormat::CoreProfile);






    // The GL view

    MainView *glView = new MainView(format, window);
    window->setView(glView);

    QVBoxLayout *mainLayout = new QVBoxLayout(win);
    mainLayout->addWidget(glView);
    mainLayout->addWidget(window->centralWidget()->findChild<QWidget*>("ControlWidget"));
    window->setLayout(mainLayout);
    window->setCentralWidget(win);
    window->setFixedSize(850,850);
    window->show();

    window->setDefaults();
    return app.exec();


}

