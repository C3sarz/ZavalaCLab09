//
// Created by cesar on 11/19/2019.
//

#ifndef ZAVALACLAB09_TRIANGLE_H
#define ZAVALACLAB09_TRIANGLE_H

#include "Shape.h"

typedef struct _triangle Triangle;

typedef struct _triangle {
    void* baseObj;
    double a;
    double b;
    double c;
    double  h;
} Triangle;

Shape* New_Triangle(double a, double b, double c, double h);
double TriangleArea(Shape * sh);
double TrianglePerimeter(Shape * sh);

#endif //ZAVALACLAB09_TRIANGLE_H
