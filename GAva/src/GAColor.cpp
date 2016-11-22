//
// Created by artavazd on 11/22/16.
//

#include "GAColor.h"

GAColor::GAColor(unsigned char R, unsigned char G, unsigned char B, float Alpha) : R(R), G(G), B(B), Alpha(Alpha) {

}

GAColor::GAColor()
{
    R = 0;
    G = 0;
    B = 0;
    Alpha = 255;
}
