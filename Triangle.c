//
// Created by cesar on 11/19/2019.
//

#include "Triangle.h"
#include <stdlib.h>

Shape* New_Triangle(double a, double b, double c, double h){

    Triangle* tr = malloc(sizeof(Triangle));
    tr->baseObj = New_Shape();
    tr->a = a;
    tr->b = b;
    tr->c = c;
    tr->h = h;
    ((Shape*)tr)->area = TriangleArea;
    ((Shape*)tr)->perimeter = TrianglePerimeter;
}

double TriangleArea(Shape * sh){
    return(((Triangle*)sh)->b *  ((Triangle*)sh)->h / 2);
}

double TrianglePerimeter(Shape * sh){
return(((Triangle*)sh)->a + ((Triangle*)sh)->b + ((Triangle*)sh)->c);
}
