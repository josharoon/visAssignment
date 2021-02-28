#ifndef SCENE_H
#define SCENE_H

#include "C:/glm/glm/glm.hpp"
using glm::vec3;


class Scene
{
public:




    /**
      Load textures, initialize shaders, etc.
      */
    virtual void initScene() = 0;

    /**
      This is called prior to every frame.  Use this
      to update your animation.
      */
    virtual void update( float t ) = 0;

    /**
      Draw your scene.
      */
    virtual void render(vec3 eye ,vec3 point) = 0;

    /**
      Called when screen is resized
      */
    virtual void resize(int, int) = 0;

    virtual void setLineData(float line[6])= 0;

    virtual void setRot()= 0;

    virtual void setAlpha(float alpha)= 0;


};

#endif // SCENE_H
