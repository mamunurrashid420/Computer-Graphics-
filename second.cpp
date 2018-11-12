
 //second lab task in computer graphics



 ///************************************ DDA algorithm rules follow and bresenth algorithm apply
#include <GL/gl.h>
#include <GL/glut.h>


void display(void)
{
/* clear all pixels */
glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3i(300,0,0);
        glVertex3i(300,599,0);

    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0, 0.0, 1.0);
        glVertex3i(30,370,0);
        glVertex3i(270,370,0);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0, 0.0, 1.0);
        glVertex3i(30,370,0);
        glVertex3i(250,200,0);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0, 0.0, 1.0);
        glVertex3i(270,370,0);
        glVertex3i(50,200,0);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0, 0.0, 1.0);
        glVertex3i(50,200,0);
        glVertex3i(150,450,0);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0, 0.0, 1.0);
        glVertex3i(150,450,0);
        glVertex3i(250,200,0);
    glEnd();



    //polygone
    glBegin(GL_POLYGON);
        glColor3f(0.0, 2.0, 0.0);
        glVertex3i(380,170,0);
        glVertex3i(490,260,0);
        glVertex3i(450,370,0);/*

        glVertex3i(400,300,0);
        glVertex3i(500,300,0);
        glVertex3i(450,350,0);*/
    glEnd();
glBegin(GL_POLYGON);
  glColor3f(0.0, 2.0, 0.0);
  glVertex3i(350,300,0);
  glVertex3i(550,300,0);
  glVertex3i(450,230,0);
  glEnd();
  glBegin(GL_POLYGON);
  glVertex3i(490,260,0);
  glVertex3i(520,170,0);
  glVertex3i(450,230,0);
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
gluOrtho2D(0.0, 600.0, 0, 600.0);
//glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with “hello”
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(600, 600);
glutInitWindowPosition(300, 100);
glutCreateWindow("hello");
init();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}








