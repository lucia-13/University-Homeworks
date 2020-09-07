
#include <iostream>
#include "Shapes.h"
#include  <math.h>
using namespace std;

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
    cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
    x = nx;
    y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
CenteredShape(n,nx,ny)
{
    EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) :
CenteredShape(n,nx,ny)
{
    Radius = r;
}
Hexagon::Hexagon(const string& n, double nx, double ny, int nl, double s, string c): RegularPolygon(n,nx,ny,nl){
    cout << "hexagon being created"<<endl;
    side = s;
    color = c;
}
Hexagon::Hexagon(void) {
    cout << "Object is being created" << endl;
}

Hexagon::~Hexagon(void) {
    cout << "Object is being deleted" << endl;
}

Hexagon::Hexagon(const Hexagon& h){
    side = h.side;
    color = h.color;
    
}
void Hexagon::setSide(double s){
    side = s;
}
void Hexagon::setColor(string c){
    color = c;
    
}
double Hexagon::getSide(){
    return side;
}
string Hexagon::getColor(){
    return color;
}
double Hexagon::Perimeter(){
    double per;
    per = this->side * 6;
    return  per;
}
double Hexagon::Area(){
    double area;
    area = ((3* sqrt(3))/(2)) * pow(this->side, 2);
    return area;
}
