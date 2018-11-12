


#include <Gl/gl.h>
#include <GL/glut.h>
#include <iostream>
#include <math.h>
using namespace std;

float xend,x,y,x1,y3,x2,y2,m,c,dx,dy,d,dE,dNE;
void myDisplay1(void)
{

    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    dx= x2-x1;
    dy= (y2-y3);
    m= dy/dx;
    c= y-m*x;
    if(dx > 0)
    {
        x=x1;
        y=y3;
        xend = x2;

    }
    if(dx < 0)
    {
        x=x2;
        y=y2;
        xend=x1;
    }
    glPointSize(20);
    glColor3ub(1,0,0);
    glBegin(GL_POINTS);

    while(x<xend)
    {
        x++;
        y=y+m;
        glVertex2i(x,trunc(y));

    }
    glEnd();


glFlush ();
}
void myDisplay2(void)
{

    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    dx= x2-x1;
    dy= (y2-y3);
    d=(2*dy) - dx;
    dE= 2 *dy;
    dNE = 2*(dy-dx);
 x=x1,y=y3, xend = x2;
    glBegin(GL_POINTS);
    glPointSize(5);
    glColor3ub(1,0,0);
    while(x<xend)
    {
          x++;
         if(d<0)
       {
           d=d+dE;
       }
        else
       {
          d=d+dNE;
           y++;
       }
    }
    glEnd();


glFlush ();
}

void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluOrtho2D(-320, 320.0, -240, 240);
}
int main(int argc, char** argv)
{
int choice;

    cout <<"Enter your choice:" <<endl;
    cout <<"1.DDA Algorithm"<<endl;
    cout <<"2.Bresenham"<<endl;
    cout <<"3.Exit" <<endl;
    cin >> choice;

    cout <<"Enter an Initial Point:-";
    cin >> x1 >> y3;
    cout << "Enter the final point:-";
    cin >> x2 >> y2;
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (200, 150);
glutCreateWindow ("Hello World");

switch(choice)
{
    case 1:
        glutDisplayFunc(myDisplay1);
        break;
    case 2:
        glutDisplayFunc(myDisplay2);
        break;
    case 3:
        return 0;
    default:
        cout <<"Wrong Input";
}

myInit ();
glutMainLoop();
}


