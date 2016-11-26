//
// Created by artavazd on 11/26/16.
//

#include "GAVector2.h"

GAVector2::GAVector2() : X(0.), Y(0.) { }

GAVector2::GAVector2(float x, float y): X(x), Y(y) { }

GAVector2::GAVector2(float xy): X(xy), Y(xy) { }

GAVector2 GAVector2::operator+(const GAVector2 &obj) {
    float x = X + obj.X;
    float y = Y + obj.Y;
    return GAVector2(x, y);
}

GAVector2 GAVector2::operator-(const GAVector2 &obj) {
    float x = X - obj.X;
    float y = Y - obj.Y;
    return GAVector2(x, y);
}

GAVector2 GAVector2::operator*(const GAVector2 &obj) {
    float x = X * obj.X;
    float y = Y * obj.Y;
    return GAVector2(x, y);
}

GAVector2 GAVector2::operator/(const GAVector2 &obj) {
    float x = X / obj.X;
    float y = Y / obj.Y;
    return GAVector2(x, y);
}


