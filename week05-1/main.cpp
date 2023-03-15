#include <GL/glut.h>
float angle = 0;
void display()

{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glColor3f(0, 1, 0); ///綠色的
    glPushMatrix(); ///備份矩陣
        glTranslatef(0.8, 0, 0); ///最後是綠色的移動
        glRotatef(angle,0, 1, 0); ///旋轉angle角度
        glutSolidTeapot( 0.3 );
    glPopMatrix(); ///還原矩陣

    glColor3f(1, 0, 0); ///紅色的
    glPushMatrix(); ///備份矩陣
        glRotatef(angle, 0, 0, 1);
        glTranslatef(0.8, 0, 0); ///旋轉angle角度 ///最後是紅色的轉動
        glutSolidTeapot( 0.3 );
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
