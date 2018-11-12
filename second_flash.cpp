
//first lab task flash



#include <GL/gl.h>
#include <GL/glut.h>


void display(void)
{
/* clear all pixels */
glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3i(350,0,0);
        glVertex3i(350,699,0);

    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0, 0.0, 1.0);
        glVertex3i(170,20,0);
        glVertex3i(300,150,0);

        glVertex3i(300,150,0);
        glVertex3i(250,150,0);

          glVertex3i(170,20,0);
          glVertex3i(240,130,0);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0, 0.0, 1.0);
        glVertex3i(240,130,0);
        glVertex3i(190,130,0);

        glVertex3i(190,130,0);
        glVertex3i(240,230,0);

         glVertex3i(240,230,0);
          glVertex3i(190,230,0);

           glVertex3i(190,230,0);
            glVertex3i(300,350,0);

            glVertex3i(300,350,0);
            glVertex3i(250,250,0);

            glVertex3i(250,250,0);
            glVertex3i(300,250,0);

            glVertex3i(300,250,0);
            glVertex3i(250,150,0);
    glEnd();
/*
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
        glVertex3i(450,350,0);*
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
  glEnd();*/
//flash squid
  glBegin(GL_TRIANGLES);

  glVertex3i(430,20,0);
  glVertex3i(550,150,0);
  glVertex3i(500,150,0);
  glEnd();

  glBegin(GL_QUADS);

  glVertex3i(490,130,0);
  glVertex3i(440,130,0);
  glVertex3i(500,250,0);
  glVertex3i(550,250,0);
  glEnd();

  glBegin(GL_TRIANGLES);

  glVertex3i(440,230,0);
  glVertex3i(550,350,0);
  glVertex3i(490,230,0);
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
gluOrtho2D(0.0, 700.0, 0, 700.0);
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
glutInitWindowSize(700, 700);
glutInitWindowPosition(300, 100);
glutCreateWindow("hello");
init();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}








