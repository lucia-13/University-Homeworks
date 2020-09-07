#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"
/*
 CH08-320142
 a6 p3.cpp
 Maria Lucia Fuentes
 m.fuentes@jacobs-university.de
 */

class Circle : public Area {
	public:
		Circle(const char *n, double a);
		~Circle();
		double calcArea() const;
        double calcPer() const;
	private:
		double radius;
};

#endif
