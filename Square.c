//
// Created by cesar on 11/19/2019.
//
#include <stdlib.h>
#include "Square.h"

Shape * New_Square(double sideL){
    Square* sq = malloc(sizeof(Square));
    sq->baseObj = New_Shape();
    sq->s = sideL;
    ((Shape*)sq)->area = SquareArea;
    ((Shape*)sq)->perimeter = SquarePerimeter;
}

double SquareArea(Shape * sh){
    return (((Square*)sh)->s * ((Square*)sh)->s);
}

double SquarePerimeter(Shape * sh){
    return (((Square*)sh)->s*4);
}
