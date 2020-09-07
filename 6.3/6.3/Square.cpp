#include <iostream>
#include "Square.h"
/*
 CH08-320142
 a6 p4.cpp
 Maria Lucia Fuentes
 m.fuentes@jacobs-university.de
 */

Square::Square(const char *n, double s) : Area(n) {
    side = s;
    std:: cout << "Square constructor being called...\n";
}

Square::~Square(){
}

double Square::calcArea() const {
    std::cout << "calcArea of Square...";
    return side * side;
}
double Square::calcPer() const {
    std::cout << "calcPer of Square...";
    return side * 4;
}

