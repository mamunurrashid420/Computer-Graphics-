//lab task ship


 //second lab task in computer graphics
#include <GL/gl.h>
#include <GL/glut.h>


void display(void)
{
/* clear all pixels */
glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_POLYGON);
 glColor3f(1.0, 1.0, 1.0);
glVertex3i(0,0,0);
glVertex3i(0,600,0);

glVertex3i(600,600,0);
glVertex3i(600,0,0);
/*
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
        glVertex3i(450,350,0);
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
  glBegin(GL_POLYGON);
 glColor3f(0.0, 2.0, 0.0);
  //layer part
  glVertex3i(0,0,0);
  glVertex3i(0,50,0);

  glVertex3i(600,50,0);
  glVertex3i(600,0,0);
  glEnd();

  //shape 2

  glBegin(GL_POLYGON);
 glColor3f(0.0, 0.0, 0.0);

  glVertex3i(150,50,0);
  glVertex3i(70,130,0);

  glVertex3i(480,130,0);
  glVertex3i(400,50,0);
  glEnd();


  //third layer
  glBegin(GL_POLYGON);
glColor3f(0.4, 0.4, 0.4);
  glVertex3i(110,130,0);

glVertex3i(110,180,0);
glVertex3i(140,180,0);
glVertex3i(130,220,0);




glVertex3i(410,220,0);
glVertex3i(410,180,0);
glVertex3i(440,180,0);
glVertex3i(440,130,0);

glEnd();

glBegin(GL_POLYGON);
 glColor3f(0.0, 0.0, 0.0);
  glVertex3i(160,220,0);
  glVertex3i(160,260,0);
  glVertex3i(190,260,0);
  glVertex3i(190,220,0);




  glEnd();

  glBegin(GL_POLYGON);
 glColor3f(0.0, 1.0, 0.0);
  glVertex3i(160,260,0);
  glVertex3i(160,270,0);
  glVertex3i(190,270,0);
  glVertex3i(190,260,0);




  glEnd();

  glBegin(GL_POLYGON);
 glColor3f(0.0, 1.0, 0.0);
  glVertex3i(130,130,0);
  glVertex3i(130,170,0);
  glVertex3i(160,170,0);
  glVertex3i(160,130,0);




  glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 0.0);
  glVertex3i(230,220,0);
  glVertex3i(230,260,0);
  glVertex3i(260,260,0);
  glVertex3i(260,220,0);
  glEnd();
  glBegin(GL_POLYGON);
glColor3f(0.0, 1.0, 0.0);
  glVertex3i(230,260,0);
  glVertex3i(230,270,0);
  glVertex3i(260,270,0);
  glVertex3i(260,260,0);
  glEnd();


glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 0.0);
  glVertex3i(280,220,0);
  glVertex3i(280,260,0);
  glVertex3i(310,260,0);
  glVertex3i(310,220,0);
  glEnd();

  glBegin(GL_POLYGON);
glColor3f(0.0, 1.0, 0.0);
  glVertex3i(280,260,0);
  glVertex3i(280,270,0);
  glVertex3i(310,270,0);
  glVertex3i(310,260,0);
  glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 0.0);
  glVertex3i(340,220,0);
  glVertex3i(340,260,0);
  glVertex3i(370,260,0);
  glVertex3i(370,220,0);
  glEnd();
glBegin(GL_POLYGON);
  glColor3f(0.0, 1.0, 0.0);
  glVertex3i(340,260,0);
  glVertex3i(340,270,0);
  glVertex3i(370,270,0);
  glVertex3i(370,260,0);
  glEnd();
  glBegin(GL_POLYGON);
   glVertex3i(190,150,0);

        glVertex3i(190,170,0);


         glVertex3i(190,170,0);
        glVertex3i(250,170,0);

     glVertex3i(250,170,0);
        glVertex3i(250,150,0);

         glVertex3i(250,150,0);
          glVertex3i(190,150,0);
          glEnd();

          //2
          glBegin(GL_POLYGON);
   glVertex3i(270,150,0);

        glVertex3i(270,170,0);


         glVertex3i(270,170,0);
        glVertex3i(330,170,0);

     glVertex3i(330,170,0);
        glVertex3i(330,150,0);

         glVertex3i(330,150,0);
          glVertex3i(270,150,0);
          glEnd();
//3
/*
 glBegin(GL_POLYGON);
   glVertex3i(350,150,0);

        glVertex3i(270,170,0);


         glVertex3i(270,170,0);
        glVertex3i(330,170,0);

     glVertex3i(330,170,0);
        glVertex3i(330,150,0);

         glVertex3i(330,150,0);
          glVertex3i(270,150,0);
          glEnd();*/
  //third layer

  //line draw
   glBegin(GL_LINES);
        glColor3f(1.0, 0.0, 1.0);
        glVertex3i(150,100,0);
        glVertex3i(150,120,0);

         glVertex3i(150,120,0);
        glVertex3i(170,120,0);

     glVertex3i(170,120,0);
        glVertex3i(170,100,0);

        glVertex3i(170,100,0);
        glVertex3i(150,100,0);



        //second square

        glVertex3i(190,100,0);
        glVertex3i(190,120,0);

         glVertex3i(190,120,0);
        glVertex3i(210,120,0);

     glVertex3i(210,120,0);
        glVertex3i(210,100,0);

        glVertex3i(210,100,0);
        glVertex3i(190,100,0);
// third square
    glVertex3i(230,100,0);

        glVertex3i(230,120,0);


         glVertex3i(230,120,0);
        glVertex3i(250,120,0);

     glVertex3i(250,120,0);
        glVertex3i(250,100,0);

         glVertex3i(250,100,0);
          glVertex3i(230,100,0);
/*
        glVertex3i(210,100,0);
        glVertex3i(190,100,0);*/


        //4
         glVertex3i(270,100,0);

        glVertex3i(270,120,0);


         glVertex3i(270,120,0);
        glVertex3i(290,120,0);

     glVertex3i(290,120,0);
        glVertex3i(290,100,0);

         glVertex3i(290,100,0);
          glVertex3i(270,100,0);
          //5

          glVertex3i(310,100,0);

        glVertex3i(310,120,0);


         glVertex3i(310,120,0);
        glVertex3i(330,120,0);

     glVertex3i(330,120,0);
        glVertex3i(330,100,0);

         glVertex3i(330,100,0);
          glVertex3i(310,100,0);
          //6
          glVertex3i(350,100,0);

        glVertex3i(350,120,0);


         glVertex3i(350,120,0);
        glVertex3i(370,120,0);

     glVertex3i(370,120,0);
        glVertex3i(370,100,0);

         glVertex3i(370,100,0);
          glVertex3i(350,100,0);



          //area


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









