#include <iostream>
#include "Rectangle.h"
/*
 CH08-320142
 a6 p3.cpp
 Maria Lucia Fuentes
 m.fuentes@jacobs-university.de
 */

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	std::cout << "calcArea of Rectangle...";
	return length*width;
}
double Rectangle::calcPer() const {
    std::cout << "calcPer of Rectangle...";
    return (length*2)+(width*2);
}
