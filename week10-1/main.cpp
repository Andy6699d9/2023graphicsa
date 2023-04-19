#include <GL/glut.h>
#include "glm.h"
GLMmodel * pmodel = NULL;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUfFER_BIT);
    if(pmodel==NULL){
        pmodel = glmReadOBJ("AL.obj");
        glmUnitize(pmodel);
        glmFaceNormals(pmodel);
        glmVertexNormals(pmodel,90);
    }
    glmDraw(pmodel, GLM MATERIAL);
    glutSwapBuffers();
}
int main(int argc,char** argv)
{
    glutInit(&argc, argv);

}
