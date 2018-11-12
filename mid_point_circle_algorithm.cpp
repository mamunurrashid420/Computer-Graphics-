//mid point circle

#include <stdio.h>
#include <iostream>
#include <GL/glut.h>
using namespace std;

int pntX1, pntY1, r;

void plot(int x, int y)
{
	glBegin(GL_POINTS);
	glVertex2i(x+pntX1, y+pntY1);
	glEnd();
}


void myInit (void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}


void midPointCircleAlgo()
{
	int x = 0;
	int y = r;
	float decision = 5/4 - r;
	plot(x, y);

	while (y > x)
	{
		if (decision < 0)
		{
			x++;
			decision += 2*x+1;
		}
		else
		{
			y--;
			x++;
			decision += 2*(x-y)+1;
		}
		plot(x, y);
		plot(x, -y);
		plot(-x, y);
		plot(-x, -y);
		plot(y, x);
		plot(-y, x);
		plot(y, -x);
		plot(-y, -x);
	}

}



/*

#include <GL/gl.h>
#include <GL/glut.h>


void circleMidpoint(){
        int Xcenter = 300;
        int Ycenter = 200;
        int radius = 100;
        int x=0;
        int y=radius;
        int p = 1= radius;
        while(x<y){
            x++;
            if(p<0)
                p += 2*y+1;
            else{
                y--;
                p += 2*(x-y)+1;

            }
            glBegin(GL_POINTS);
            glVertex3i(Xcenter + x,Ycenter+y);
            glVertex3i(Xcenter -x, Ycenter+y);

            glVertex3i(Xcenter + x,Ycenter-y);
            glVertex3i(Xcenter -x, Ycenter-y);

            glVertex3i(Xcenter + y,Ycenter+x);
            glVertex3i(Xcenter -y, Ycenter+x);
            glVertex3i(Xcenter + y,Ycenter-x);
            glVertex3i(Xcenter -y, Ycenter-);
            glEnd();

        }
        glBegin(GL_POINTS);
        glVertex3i(Xcenter,Ycenter);
        glEnd();
}
*/
void display(void)
{
/* clear all pixels */
glClear(GL_COLOR_BUFFER_BIT);

glColor3f(1.0, 1.0, 0.0);//(R,G,B)
glPointSize(1.0);

	midPointCircleAlgo();

//Draw a triangle using the line.
/*
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
cout << "Enter the coordinates of the center:\n\n" << endl;

	cout << "X-coordinate   : "; cin >> pntX1;
	cout << "\nY-coordinate : "; cin >> pntY1;
	cout << "\nEnter radius : "; cin >> r;
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

