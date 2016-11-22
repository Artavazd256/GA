#include <iostream>
#include <GL/glut.h>
#include <cmath>
#include "GAva/src/GACircle.h"
#include "GAva/src/GAGameMode.h"


float T = 0;
float R = 190;
float MS = 1000./60;

GACircle SSS(0,100, 70);

void Render()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    glColor3f(0.0, 1.0, 0.0);
    //glBegin(GL_POINTS);
    //glBegin(GL_LINES);
    //glLineWidth(3);
    glBegin(GL_LINES);
    //glBegin(GL_LINE_LOOP);
    glVertex2f(0.0 , 0.0);
    glVertex2f(R*sin(T) , R*cos(T));
    glEnd();
    //SSS.Y += 1.3;
    SSS.isRotation = true;
    SSS.Rotation += 4;

    SSS.draw();
    glutSwapBuffers();
}




void Initialize()
{
    GAGameMode * GameMode = GAGameMode::GetInstance();
    glClearColor(0., 0.5, 0.5, 1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-GameMode->WIDTH/2, GameMode->WIDTH/2, GameMode->HEIGHT/2, -GameMode->HEIGHT/2, -5, 5);
    glMatrixMode(GL_MODELVIEW);

}

void Timer(int=0)
{
    glutPostRedisplay();
    glutTimerFunc(MS, Timer, MS);
}

void KeyBoard(unsigned char key, int x, int y)
{

    GAGameMode * GameMode = GAGameMode::GetInstance();
    switch (key) {
        case 'a':
            SSS.X-=1;
            break;
        case 'd':
            SSS.X+=1;
            break;
        case 'w':
            SSS.Y-=1;
            break;
        case 's':
            SSS.Y+=1;
            break;
        case 'b':
            SSS.Alpha-=0.1;
            break;
        case 'B':
            SSS.Alpha+=0.1;
            break;
        case ' ':
            SSS.X = x - (GameMode->WIDTH/2);
            SSS.Y = y - (GameMode->HEIGHT/2);
            break;
    }
    std::cout<<"key = " << key<< std::endl;
    std::cout<<"x = " << x <<std::endl;
    std::cout<<"y = " << y <<std::endl;
}

int main(int argc, char **argv)
{
    GAGameMode * GameMode = GAGameMode::GetInstance();
    GameMode->APPNAME = "My GA Game dev";
    GameMode->WIDTH = 500;
    GameMode->HEIGHT = 500;
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB| GLUT_DEPTH);
    glutInitWindowSize(GameMode->WIDTH, GameMode->HEIGHT);
    glutInitWindowPosition(300, 200);
    glutCreateWindow(GameMode->APPNAME);
    glutDisplayFunc(Render);
    Initialize();
    glutKeyboardFunc(KeyBoard);
    glutTimerFunc(MS, Timer, MS);
    //glutReshapeFunc(handleResize);
    //glutHideWindow();
    GameMode->MainLoop();
    glutMainLoop();
    return 0;
}
