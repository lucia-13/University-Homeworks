#ifndef _SQUARE_H
#define _SQUARE_H
#include "Area.h"
/*
 CH08-320142
 a6 p4.cpp
 Maria Lucia Fuentes
 m.fuentes@jacobs-university.de
 */

class Square : public Area {
public:
    Square(const char *n, double s);
    ~Square();
    double calcArea() const;
    double calcPer() const;
private:
    double side;
};

#endif

