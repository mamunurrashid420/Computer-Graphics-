
#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
using namespace std ;
int x,y,input;
void takeInput ()
{
    cout<<"enter the number ";
    cin>>input;
    if (input < 0)
        {cout<<"enter positive number "<<endl;
    cin>>input ;
        }

}
void drawBorder ()
{
    glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 0.0, .0);
glPointSize(4.0);
glBegin(GL_POLYGON);
glVertex2i(59,460+1);
glVertex2i(59,460-(input*30)+2);
glVertex2i(60+(input*60)+2,460-(input*30)+2);
glVertex2i(60+(input*60)+2,460+1);
glEnd();
glFlush();


}
void myDisplay(void)
{
    //takeInput();
    drawBorder();
//glClear (GL_COLOR_BUFFER_BIT);
glColor3f (0.0, 0.0, 0.0);
glPointSize(4.0);
int x=0,y=0;
for(int i=1; i<=input; i++)
{
    for(int j=0; j<input; j++)
    {
        glBegin(GL_POLYGON);
            glVertex2i(60+x, 460-y);
            glVertex2i(60+x, 430-y);
            glVertex2i(90+x, 430-y);
            glVertex2i(90+x, 460-y);
        glEnd();
        x= x+60;
    }
    if(i%2==0)
    {
        x=0;
    }
    else
    {
        x=30;
    }
    y=y+30;
}
glFlush ();
}


void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 520.0);
}
main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (540, 380);
glutInitWindowPosition (100, 150);
glutCreateWindow ("Chase board");
glutDisplayFunc(myDisplay);
myInit ();
takeInput();
glutMainLoop();
}



