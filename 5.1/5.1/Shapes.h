
/*
 CH08-320142
 a5 p1.cpp
 Lucia Fuentes
 m.fuentes@jacobs-university.de
 */
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {            // base class
protected:                   // private access modifier: could also be protected
    std::string name;   // every shape will have a name
public:
    Shape(const std::string&);  // builds a shape with a name
    Shape();                    // empty shape
    Shape(const Shape&);        // copy constructor
    void printName() const ;      // prints the name
};

class CenteredShape : public Shape {  // inherits from Shape
protected:
    double x,y;  // the center of the shape
public:
    CenteredShape(const std::string&, double, double);  // usual three constructors
    CenteredShape();
    CenteredShape(const CenteredShape&);
    void move(double, double);    // moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
protected:
    int EdgesNumber;
public:
    RegularPolygon(const std::string&, double, double, int);
    RegularPolygon();
    RegularPolygon(const RegularPolygon&);
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
private:
    double Radius;
public:
    Circle(const std::string&, double, double, double);
    Circle();
    Circle(const Circle&);
};
class Hexagon :  public RegularPolygon {
   private:
    double side;
    std::string color;
 public:
    Hexagon(const std::string&, double, double, double, std::string);
    Hexagon();
    Hexagon(const Hexagon&);
    ~Hexagon();
    void setSide(double);
    void setColor(std::string);
    double getSide();
    std::string getColor();
    double Perimeter();
    double Area();
    
};
#endif
