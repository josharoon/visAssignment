#ifndef MAINVIEW_H
#define MAINVIEW_H

#include "C:/glew-2.1.0/include/GL/glew.h"

#include <QGLWidget>
#include <QTimer>
#include "ui_uiinput.h"
#include "scene.h"

class MainView : public QGLWidget
{
    Q_OBJECT

private:
    QTimer *timer;
    Scene *scene;



public:
    MainView( const QGLFormat & format, QWidget *parent = 0 );
    vec3 eye = {0.0,0.0,2.0};// eye/camera co-ordinates
    vec3 point= {0.0,0.0,0.0}; // lookat point
    vec3 Mu = {0.0,1.0,0.0};
    float alpha;
    float line[6]={0.0,0.0,0.0,0.0,1.0,0.0}; //point representation of line
    float d=1.0; //Scalar multiplier for line length
    void calcLine();
    void calcRot();


protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);





private:
    //Ui::uiInput ui; // doesn't seem to do anthing.

public slots:
    void timerUpdate();
    void toggleAnimation();


};

#endif // MAINVIEW_H
