//
// Created by artavazd on 11/18/16.
//
#include <iostream>
#include "GACircle.h"
#include <GL/glut.h>
#include <math.h>

GACircle::GACircle(int Y, int X, float R) : Y(Y), X(X), R(R) {
    Color.R = 100;
    Color.G = 100;
    Color.B = 100;
    Color.Alpha = 255;
}


void GACircle::draw() {
    if(isRotation) {
        glPushMatrix();
	glTranslatef(X, Y, 0);
        glRotatef(Rotation, 0, 0, 1000);
	    glTranslatef(-X, -Y, 0);
    }
    glEnable(GL_ALPHA);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glBegin(GL_TRIANGLE_FAN);
        glColor4ub(Color.R, Color.G, Color.B, Color.Alpha);
        for( float i = 0.; i < M_PI*2; i+=M_PI/40) {
            glVertex2d(X+R*sin(i), Y+R*cos(i));
        }
        glDisable(GL_BLEND);
        glDisable(GL_ALPHA);
    glEnd();
    if(isRotation) {
        glPopMatrix();
    }
}

