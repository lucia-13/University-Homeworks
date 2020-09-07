#include <iostream>
#include <cmath>
#include "Ring.h"
/*
 CH08-320142
 a6 p3.cpp
 Maria Lucia Fuentes
 m.fuentes@jacobs-university.de
 */

Ring::Ring(const char *n, double outer, double inner) 
					: Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
	std::cout << "calcArea of Ring...";
	return (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
}
double Ring::calcPer() const {
    std::cout << "calcPer of Ring...";
    return (Circle::calcArea());
}
