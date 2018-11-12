

//computer graphics updated code in lab task 1
/*                           Lab task 1 window drawing */
#include <GL/gl.h>
#include <GL/glut.h>




void display(void)
{
/* clear all pixels */
glClear(GL_COLOR_BUFFER_BIT);

glColor3f(1.0, 1.0, 0.0);//(R,G,B)

//Draw a triangle using the line.

glBegin(GL_LINES);

glColor3f(1.0, 1.0, 1.0);
glVertex3i(0,300,0);
glVertex3i(600,300,0);

glVertex3i(300,0,0);
glVertex3i(300,600,0);


//glBegin(GL_LINE_STRIP);
//glBegin(GL_LINE_LOOP);
  //glPointSize(6);
  //glBegin(GL_POINTS);
  glEnd();



  glBegin(GL_LINES);

glColor3f(1.0, 1.0, 1.0);
glVertex3i(50,450,0);
glVertex3i(150,450,0);

glVertex3i(150,450,0);
glVertex3i(150,430,0);

glVertex3i(50,450,0);
glVertex3i(50,500,0);

glVertex3i(50,500,0);
glVertex3i(150,500,0);

glVertex3i(150,500,0);
glVertex3i(150,520,0);

glVertex3i(150,520,0);
glVertex3i(200,480,0);


glVertex3i(150,430,0);
glVertex3i(200,480,0);






//glBegin(GL_LINE_STRIP);
//glBegin(GL_LINE_LOOP);
  //glPointSize(6);
  //glBegin(GL_POINTS);
  glEnd();


glBegin(GL_LINES);
glColor3f(1.0, 1.0, 1.0);
//first quad s
glVertex3i(310,450,0);
glVertex3i(360,400,0);

glVertex3i(360,400,0);
glVertex3i(410,450,0);

glVertex3i(410,450,0);
glVertex3i(360,500,0);

glVertex3i(360,500,0);
glVertex3i(310,450,0);
//second quads

glVertex3i(410,500,0);
glVertex3i(460,450,0);

glVertex3i(460,450,0);
glVertex3i(510,500,0);

glVertex3i(510,500,0);
glVertex3i(460,550,0);

glVertex3i(460,550,0);
glVertex3i(410,500,0);


//third quad

glVertex3i(490,450,0);
glVertex3i(540,400,0);

glVertex3i(540,400,0);
glVertex3i(590,450,0);

glVertex3i(590,450,0);
glVertex3i(540,500,0);

glVertex3i(540,500,0);
glVertex3i(490,450,0);


glEnd();


glBegin(GL_LINES);
glColor3f(1.0, 1.0, 1.0);

glVertex3i(370,50,0);
glVertex3i(530,50,0);

glVertex3i(370,250,0);
glVertex3i(530,250,0);

glVertex3i(400,30,0);
glVertex3i(400,270,0);

glVertex3i(500,30,0);
glVertex3i(500,270,0);
//first line draw

glColor3f(1.0, 0.0, 0.0);

glVertex3i(400,200,0);
glVertex3i(500,200,0);

//second line draw
glColor3f(0.0, 0.0, 1.0);

glVertex3i(400,150,0);
glVertex3i(500,150,0);

//third line draw

glColor3f(1.0, 1.0, 0.0);
glVertex3i(400,100,0);
glVertex3i(500,100,0);


glEnd();





glBegin(GL_TRIANGLES);

    glColor3f(1.0, 0.0, 0.0);

    glVertex3i(100,50,0);
    glVertex3i(200,50,0);

    glVertex3i(150,150,0);

  //glColor3f(0.0, 1.0, 1.0);

    //glVertex3i(25, 70, 0);

    //glVertex3i(25, 70, 0);
    //glVertex3i(25, 70, 0);
    //glVertex3i(300, 200, 0);
    //glVertex3i(275, 70, 0)//glVertex3i(150, 130,0);
glEnd();

glBegin(GL_TRIANGLES);

    glColor3f(1.0, 0.0, 1.0);


    glVertex3i(100,250,0);
    glVertex3i(200,250,0);

    glVertex3i(150,150,0);

  //glColor3f(0.0, 1.0, 1.0);

    //glVertex3i(25, 70, 0);

    //glVertex3i(25, 70, 0);
    //glVertex3i(25, 70, 0);
    //glVertex3i(300, 200, 0);
    //glVertex3i(275, 70, 0)//glVertex3i(150, 130,0);
glEnd();
/*
glBegin(GL_POLYGON);


    glVertex3i(25, 70, 0);
    glVertex3i(275, 70, 0);
    glVertex3i(150, 200, 0);


glEnd();



glBegin(GL_QUADS);

glColor3f(1.0, 0.0, 1.0);
    glVertex3i(40, 460, 0);
    glVertex3i(100, 400, 0);
    glVertex3i(160, 460, 0);
    glVertex3i(100, 520, 0);


glEnd();

*/


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




