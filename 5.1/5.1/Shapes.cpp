// please refer to shapes.h for methods documentation

/*
 CH08-320142
 a5 p1.cpp
 Lucia Fuentes
 m.fuentes@jacobs-university.de
 */
#include <iostream>
#include "Shapes.h"
#include  <math.h>
using namespace std;
Shape::Shape() {
    name = "shape";
}
Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
    cout << name << endl;
}
CenteredShape::CenteredShape() : Shape(), x(0), y(0) {}
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
    x = nx;
    y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
CenteredShape(n,nx,ny)
{
    EdgesNumber = nl;
}
RegularPolygon::RegularPolygon(): CenteredShape(), EdgesNumber(3){};
Circle::Circle(): CenteredShape(), Radius(0){}
Circle::Circle(const string& n, double nx, double ny, double r) :
CenteredShape(n,nx,ny)
{
    Radius = r;
}


//HEXAGON CLASS DEFINITIONS FUCNTIONS
//CONSTRUCTOR- PARAMTERIC
Hexagon::Hexagon(const string& n, double nx, double ny, double s, string c): RegularPolygon(n,nx,ny,6){
    cout << "hexagon being created"<<endl;
    side = s;
    color = c;
}
//DEFAULT CONSTRUCTOR
Hexagon::Hexagon() : RegularPolygon(), side(0), color(" "){
    cout << "default constructor is being called" << endl;
}
//DECONSTRUCTOR
Hexagon::~Hexagon(void) {
    cout << "Object is being deleted" << endl;
}
// COPY CONSTRUCTOR
Hexagon::Hexagon(const Hexagon& h): RegularPolygon(h.name,h.x,h.y, 6){
    cout<< "copy constructor is being called" << endl;
    side = h.side;
    color = h.color;

}
//SETTTER SIDE
void Hexagon::setSide(double s){
    side = s;
}
//SETTER C OLOR
void Hexagon::setColor(string c){
    color = c;
    
}
//GETTER SIDE
double Hexagon::getSide(){
    return side;
}
//GETTER COLOR
string Hexagon::getColor(){
    return color;
}
//PERIMETER CALCULATION
double Hexagon::Perimeter(){
    double per;
    per = this->side * 6;
    return  per;
}
//AREA CALCULATION
double Hexagon::Area(){
    double area;
    area = ((3* sqrt(3))/(2)) * pow(this->side, 2);
    return area;
}
