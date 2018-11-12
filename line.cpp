//computer graphics user input using DDA algorithms

//******************************** line  circle algorithm
#include<iostream>
using namespace std;
#include<math.h>
#include<GL/gl.h>
#include <GL/glut.h>




int x1,x2;
double Y1,y2;
double slope;
void takePoints(){
    cout<<"enter your value x1:";
    cin>>x1;
    cout<<"enter your value Y1:";
    cin>>Y1;
    cout<<"enter your value x2:";
    cin>>x2;
    cout<<"enter your value y2:";
    cin>>y2;
}
void findslope(){
    int value1 = y2-Y1;
    int value2 = x2-x1;

    if(value1 == 0){
        slope=0;
    }
    else{
        slope =(double)value1/value2;

    }
    cout<<slope;
}
void drawLine(){
    findslope ();
    glBegin(GL_POINTS);
    glPointSize(5);
    for(int i=x1; i<=x2;i++){
        Y1 +=slope;
        glVertex3i(i,round (Y1),0);
    }
    glEnd();

}





void display(void)
{
/* clear all pixels */
glClear(GL_COLOR_BUFFER_BIT);

glColor3f(0.0, 1.0, 0.0);//(R,G,B)


drawLine();

//Draw a triangle using line.

//glBegin(GL_LINES);
//glBegin(GL_LINE_STRIP);
//glBegin(GL_LINE_LOOP);
//
//
//    glVertex3i(25, 70, 0);
//    glVertex3i(275, 70, 0);
//
//    //glVertex3i(25, 70, 0);
//    glVertex3i(150, 200, 0);
//    glVertex3i(25, 70, 0);
    //glVertex3i(150, 200, 0);
    //glVertex3i(275, 70, 0);

    //glVertex3i(150, 130,0);

//glEnd();
/*
glBegin(GL_POLYGON);


    glVertex3i(25, 70, 0);
    glVertex3i(275, 70, 0);
    glVertex3i(150, 200, 0);


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
gluOrtho2D(0.0, 300.0, 0, 300.0);
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
    takePoints();
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(300, 300);
glutInitWindowPosition(300, 100);
glutCreateWindow("hello");
init();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}

