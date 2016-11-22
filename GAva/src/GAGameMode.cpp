//
// Created by artavazd on 11/23/16.
//

#include <GL/glut.h>
#include "GAGameMode.h"


void HandleResize(int w, int h) {
    GAGameMode * GameMode = GAGameMode::GetInstance();
    GameMode->HandleResize(w,h);
}

GAGameMode::GAGameMode() {
}

GAGameMode * GAGameMode::SiGAGameMode = nullptr;
GAGameMode * GAGameMode::GetInstance() {

    if(!SiGAGameMode) {
        SiGAGameMode = new GAGameMode;
    }
    return SiGAGameMode;
}

void GAGameMode::HandleResize(int w, int h) {
    HEIGHT = h;
    WIDTH = w;
    glViewport(0,0,WIDTH, HEIGHT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-WIDTH/2, WIDTH/2, HEIGHT/2, -HEIGHT/2, -5, 5);
}

void GAGameMode::MainLoop() {
    // set handle resize
    glutReshapeFunc(::HandleResize);
}


