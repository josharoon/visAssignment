#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainview.h"

namespace Ui {
class MainWindow;
}

//class MainView;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setView(MainView* view);


public:
    MainView* view;
    Ui::MainWindow *uid;

    void setDefaults();



private slots:
    void on_eyeYspin_2_valueChanged(double arg1);
    void on_eyeXspin_2_valueChanged(double arg1);
    void on_eyeZspin_2_valueChanged(double arg1);
    void on_LookAtZspin_2_valueChanged(double arg1);
    void on_LookAtYspin_2_valueChanged(double arg1);
    void on_LookAtXspin_2_valueChanged(double arg1);
    void on_bX_valueChanged(double arg1);
    void on_bY_valueChanged(double arg1);
    void on_bZ_valueChanged(double arg1);

    void on_MuYSpin_valueChanged(double arg1);
    void on_dSpin_valueChanged(double arg1);
    void on_MuXSpin_valueChanged(double arg1);
    void on_MuZSpin_valueChanged(double arg1);

    void on_alphaSpinBox_valueChanged(double arg1);

    void on_Default_clicked();
};

#endif // MAINWINDOW_H
