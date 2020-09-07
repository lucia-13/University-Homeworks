#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Area.h"
/*
 CH08-320142
 a6 p3.cpp
 Maria Lucia Fuentes
 m.fuentes@jacobs-university.de
 */

class Rectangle : public Area {
	public:
		Rectangle(const char *n, double a, double b);
		~Rectangle();
		double calcArea() const;
        double calcPer() const;
	private:
		double length;
		double width;
};

#endif
