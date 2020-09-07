/*
 CH08-320142
 a4 p5.cpp
 Lucia Fuentes
 m.fuentes@jacobs-university.de
 */
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {            // base class
private:                   // private access modifier: could also be protected
    std::string name;   // every shape will have a name
public:
    Shape(const std::string&);  // builds a shape with a name
    Shape();                    // empty shape
    Shape(const Shape&);// copy constructor
    void setName(std::string n); 
    std::string getName();
    void printName() const ;      // prints the name
};

class CenteredShape : public Shape {  // inherits from Shape
private:
    double x,y;  // the center of the shape
public:
    CenteredShape(const std::string&, double, double);  // usual three constructors
    CenteredShape();
    CenteredShape(const CenteredShape&);
    void setx(double nx);
    void setY(double ny);
    double gety();
    double getx();
    void move(double, double);    // moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
private:
    int EdgesNumber;
public:
    RegularPolygon(const std::string&, double nx, double ny , int edg);
    RegularPolygon();
    RegularPolygon(const RegularPolygon&);
    void setEdgesNumber(int edg);
    int getEdgesNumber();
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
private:
    double Radius;
public:
    Circle(const std::string&, double, double, double);
    Circle();
    Circle(const Circle&);
   void  setRadius(double rad);
    double getRadius();
    double perimeter();
    double area();
    
};

class Rectangle : public RegularPolygon {  // a Circle is a shape with a center and a radius
private:
    double nwidth, nheight;
public:
    Rectangle(const std::string& n, double nx, double ny, double nnwidth, double nnheight = 0.0);
    Rectangle(const Rectangle&);
    Rectangle();
    void setnwidth(double w);
    void setnheight(double h);
    double getnwidth();
    double getnheight();
    double perimeter();
    double area();
};
class Square : public RegularPolygon {
private:
    double nside;
public:
    Square(const std::string& n, double nx , double ny , double nnside);
    Square();
    Square(const Square&);
    void setnside(double s);
    double getnside();
    double perimeter();
    double area();
};
#endif
