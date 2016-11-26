//
// Created by artavazd on 11/26/16.
//

#ifndef GAVA_GAVECTOR2_H
#define GAVA_GAVECTOR2_H


class GAVector2 {

public:
    GAVector2();
    GAVector2(float x, float y);
    GAVector2(float xy);
    GAVector2 operator+(const GAVector2 &obj);
    GAVector2 operator-(const GAVector2 &obj);
    GAVector2 operator*(const GAVector2 &obj);
    GAVector2 operator/(const GAVector2 &obj);
    float X;
    float Y;
};


#endif //GAVA_GAVECTOR2_H
