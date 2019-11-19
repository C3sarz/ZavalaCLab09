//
// Created by cesar on 11/19/2019.
//
#include <stdlib.h>
#include "Square.h"

Shape * New_Square(double sideL){
    Square* sq = (Square*)malloc(sizeof(Square));
    sq->baseObj = New_Shape();
    sq->s = sideL;
    ((Shape*)sq)->derivedObj = sq;
    ((Shape*)sq)->area = SquareArea;
    ((Shape*)sq)->perimeter = SquarePerimeter;
    return sq;
}

double SquareArea(Shape * sh){
    double value = ((Square*)sh)->s * ((Square*)sh)->s;
    return (value);
}

double SquarePerimeter(Shape * sh){
    return (((Square*)sh)->s*4);
}
