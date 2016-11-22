//
// Created by artavazd on 11/22/16.
//

#ifndef GAVA_COLOR_H
#define GAVA_COLOR_H


class GAColor {
public:
    GAColor(unsigned char R, unsigned char G, unsigned char B, float Alpha);
    GAColor();
    unsigned char R;
    unsigned char G;
    unsigned char B;
    float Alpha = 1.;
};

#endif //GAVA_COLOR_H
