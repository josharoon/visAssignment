#ifndef SCENEBASIC_H
#define SCENEBASIC_H

#include "scene.h"
#include "C:/glew-2.1.0/include/GL/glew.h"
#include "glslprogram.h"
#include "C:/glm/glm/glm.hpp"

using glm::mat4;

class SceneBasic : public Scene
{
private:
    int width, height;
    GLuint vboHandles[2];
    GLuint vaoHandle;
    GLSLProgram prog;

    mat4 model;
    mat4 view;
    mat4 projection;
    mat4 tran1;
    mat4 tran2;
    mat4 rot;
    float rotData[16];
    float OneMinCosAlpha;
    float alpha=0.0;
    vec3 dNorm;


    float linedata[6];


    void readData(const char* fname);
    void CreateVBO();

    float positionData[114]; // +6 for line
    float colorData[114];

    float lineData[6]= {0.0,0.0,0.0,0.0,1.0,0.0};
    float color2Data[6]={1.0,0.0,0.0,0.0,0.0,1.0};

public:
    SceneBasic();
    void setMatrices(vec3 eye, vec3 point, mat4 rot);
    void createRotMatrix();
    void createTransMatrix();
    void setDnorm(vec3 d);
    void initScene();
    void render(vec3 eye, vec3 point);
    void resize(int, int);
    void update( float t );
    void setLineData(float line[6]);
    void setRot();
    void setAlpha(float alpha);
    void setDefaults();
    void printActiveUniforms(GLuint programHandle);
    void printActiveAttribs(GLuint programHandle);
};

#endif // SCENEBASIC_H
