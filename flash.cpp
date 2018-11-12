//assignment flash



#include<GL/gl.h>
#include<GL/glut.h>

void display(void)
{
/* clear all pixels */
glClear(GL_COLOR_BUFFER_BIT);

glColor3f(1.0, 1.0, 0.0);//(R,G,B);




glBegin(GL_TRIANGLES);

glVertex3i(300,100,0);
glVertex3i(600,400,0);
glVertex3i(400,400,0);
glEnd();


glBegin(GL_QUADS);
glVertex3i(500,400,0);
glVertex3i(700,700,0);
glVertex3i(500,700,0);
glVertex3i(300,400,0);


glEnd();
glBegin(GL_TRIANGLES);
glVertex3i(600,700,0);
glVertex3i(700,900,0);
glVertex3i(400,700,0);
glEnd();

glFlush();
}

void init(void)
{
/* select clearing (background) color */
glClearColor(0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1200.0, 0, 1200.0);
//glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1200, 1200);
glutInitWindowPosition(600, 100);
glutCreateWindow("hello");
init();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}

