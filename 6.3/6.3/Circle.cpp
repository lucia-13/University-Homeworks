#include <iostream>
#include <cmath>
#include "Circle.h"
/*
 CH08-320142
 a6 p3.cpp
 Maria Lucia Fuentes
 m.fuentes@jacobs-university.de
 */

Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

double Circle::calcArea() const {
	std::cout << "calcArea of Circle...";
	return radius * radius * M_PI;
}
double Circle::calcPer() const {
    std::cout << "calcPer of Circle...";
    return radius * 2 * M_PI;
}
