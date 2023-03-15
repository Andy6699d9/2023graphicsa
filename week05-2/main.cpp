#include <GL/glut.h>
float angle = 0;
void display()

{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glColor3f(0, 1, 0); ///綠色的身體
    glPushMatrix(); ///備份矩陣
        glutSolidCube(0.5);

        glPushMatrix();
            glTranslatef(0.25, 0.25, 0);///(3)把整個東西，掛在右上角
            glRotatef(angle, 0, 0, 1);  ///(2)轉動
            glTranslatef(0.25, 0.25, 0);///(1)把旋轉中心，放到中心
///             glTranslatef(0.5, 0.5, 0.5);
            glColor3f(1, 0, 0); ///紅色的手臂
            glutSolidCube(0.5);
        glPopMatrix();
    glPopMatrix(); ///還原矩陣

    glutSwapBuffers();
    angle++; ///角度++

}

int main(int argc, char *argv[])

{

	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

	glutCreateWindow("GLUT Shapes");

	glutDisplayFunc(display);
        glutIdleFunc(display);

	 glutMainLoop();
}
