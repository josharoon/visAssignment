#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), uid(new Ui::MainWindow)
{
    uid->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete uid;
}

void MainWindow::setView(MainView* view)
{
    this->view = view;
}




void MainWindow::on_eyeXspin_2_valueChanged(double arg1)
{

    view->eye.x =arg1;
}

void MainWindow::on_eyeYspin_2_valueChanged(double arg1)
{
     view->eye.y =arg1;
}

void MainWindow::on_eyeZspin_2_valueChanged(double arg1)
{
     view->eye.z =arg1;
}

void MainWindow::on_LookAtZspin_2_valueChanged(double arg1)
{
    view->point.z =arg1;
}

void MainWindow::on_LookAtYspin_2_valueChanged(double arg1)
{
    view->point.y =arg1;
}

void MainWindow::on_LookAtXspin_2_valueChanged(double arg1)
{
    view->point.x =arg1;
}


void MainWindow::on_bX_valueChanged(double arg1)
{
  view->line[0]=arg1;
  view->calcLine();
}

void MainWindow::on_bY_valueChanged(double arg1)
{
   view->line[1]=arg1;
   view->calcLine();
}

void MainWindow::on_bZ_valueChanged(double arg1)
{
    view->line[2]=arg1;
    view->calcLine();
}



void MainWindow::on_MuYSpin_valueChanged(double arg1)
{
    view->Mu.y=arg1;
    view->calcLine();
    qDebug() << "p2.Y =" << view->line[3];
}

void MainWindow::on_dSpin_valueChanged(double arg1)
{
    view->d=arg1;
    view->calcLine();

}

void MainWindow::on_MuXSpin_valueChanged(double arg1)
{
    view->Mu.x=arg1;
    view->calcLine();

}

void MainWindow::on_MuZSpin_valueChanged(double arg1)
{
    view->Mu.z=arg1;
    view->calcLine();

}

void MainWindow::on_alphaSpinBox_valueChanged(double arg1)
{
    view->alpha=(arg1*3.14159265358979323846)/180.0;
    view->calcRot();

}

void MainWindow::setDefaults()
{
    qDebug() << "Setting default Values";
    uid->eyeXspin_2->setValue(0.0);
    uid->eyeYspin_2->setValue(0.0);
    uid->eyeZspin_2->setValue(2.0);

    uid->LookAtXspin_2->setValue(0.0);
    uid->LookAtYspin_2->setValue(0.0);
    uid->LookAtZspin_2->setValue(0.0);

    uid->dSpin->setValue(1.0);


    uid->bX->setValue(0.0);
    uid->bY->setValue(0.0);
    uid->bZ->setValue(0.0);

    uid->MuXSpin->setValue(0.0);
    uid->MuYSpin->setValue(1.0);
    uid->MuZSpin->setValue(0.0);
    uid->alphaSpinBox->setValue(0.0);
}

void MainWindow::on_Default_clicked()
{
    qDebug() << "defaults clicked ";
    setDefaults();



}
