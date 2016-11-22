//
// Created by artavazd on 11/18/16.
//
#include <vector>
#include "GAColor.h"

#ifndef GAVA_SPHERE_H
#define GAVA_SPHERE_H


class GACircle {
private:
    GAColor Color;
public:
    GACircle(int Y, int X, float R);
public:
    float R;
    int X;
    int Y;
    int Alpha;
    float Rotation = 0;
    bool isRotation = false;

public:
    void draw();

};


#endif //GAVA_SPHERE_H
