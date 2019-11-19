//
// Created by cesar on 11/19/2019.
//

#ifndef ZAVALACLAB09_SQUARE_H
#define ZAVALACLAB09_SQUARE_H
#include "Shape.h"

typedef struct _square Square;

typedef struct _square {
    void* baseObj;
    double s;
} Square;

Shape* New_Square(double sideL);
double SquareArea(Shape * sh);
double SquarePerimeter(Shape * sh);

#endif //ZAVALACLAB09_SQUARE_H
