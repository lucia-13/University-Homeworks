#ifndef _RING_H
#define _RING_H
#include "Circle.h"
/*
 CH08-320142
 a6 p3.cpp
 Maria Lucia Fuentes
 m.fuentes@jacobs-university.de
 */

class Ring : public Circle {
	public:
		Ring(const char *n, double outer, double inner);
		~Ring();
		double calcArea() const;
        double calcPer() const;
	private:
		double innerradius;
};

#endif
