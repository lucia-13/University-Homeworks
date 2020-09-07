/*
 CH08-320142
 a4 p5.cpp
 Lucia Fuentes
 m.fuentes@jacobs-university.de
 */
#include <iostream>
#include "Shapes.h"
#include <math.h>
using namespace std;
//shape
Shape::Shape(const string& n) : name(n) { //constructor
}
Shape::Shape(){  //default constructor
    name = "shape";
}
Shape::Shape(const Shape& a){ //copy construxtor
    name = a.name;
}
void Shape::setName(const string newname){ //setter
    name = newname;
}
string Shape::getName(){  //getter
    return name;
}

void Shape::printName() const { //printer
    cout << name << endl;
}

//centeredshape

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
    x = nx;
    y = ny;
}
CenteredShape::CenteredShape(){
    x = 0;
    y = 0;
}
CenteredShape::CenteredShape(const CenteredShape& b){
    x = b.x;
    y = b.y;
}
void CenteredShape::setx(double nx){
    x = nx;
}
void CenteredShape::setY(double ny){
    y = ny;
}
double CenteredShape::gety(){
    return y;
}
double CenteredShape::getx(){
    return x;
}

//regularpolygon

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
CenteredShape(n,nx,ny)
{
    EdgesNumber = nl;
}
RegularPolygon::RegularPolygon()
{
    EdgesNumber = 0;
}
RegularPolygon::RegularPolygon(const RegularPolygon& e){
    EdgesNumber = e.EdgesNumber;
}
void RegularPolygon::setEdgesNumber(int edg){
    EdgesNumber = edg;
}
int RegularPolygon::getEdgesNumber(){
    return EdgesNumber;
}

//circle
Circle::Circle(const string& n, double nx, double ny, double r) :
CenteredShape(n,nx,ny)
{
    Radius = r;
}

Circle::Circle(){
    Radius = 0;
}
Circle::Circle(const Circle& c){
    Radius = c.Radius;
}
void  Circle::setRadius(double rad){
    Radius = rad;
}
double Circle::getRadius(){
    return Radius;
}
double Circle::perimeter(){
    double per = M_PI * Radius * 2;
    return per;
}
double Circle::area(){
    double ar = M_PI *Radius *Radius;
    return ar;
}
//Rectangle

Rectangle::Rectangle(const std::string& n, double nx, double ny, double nnwidth, double nnheight) : RegularPolygon(n,nx,ny, 0){
    nheight = nnheight;
    nwidth = nnheight;
}
Rectangle::Rectangle(){
    nheight = 0.0;
    nwidth = 0.0;
}
Rectangle::Rectangle(const Rectangle& s){
    nheight = s.nheight;
    nwidth = s.nwidth;
}
void Rectangle::setnwidth(double w){
    nwidth = w;
}
void Rectangle::setnheight(double h){
    nheight = h;
}
double Rectangle::getnwidth(){
    return nwidth;
}
double Rectangle::getnheight(){
    return  nheight;
}
double Rectangle::perimeter(){
    return (nwidth*2) + (nheight * 2);
}
double Rectangle::area(){
    return (nwidth * nheight);
}



// square
Square::Square(const std::string& n, double nx , double ny , double nnside) : RegularPolygon(n,nx,ny, 0){
    nside = nnside;
}
Square::Square(const Square& sq){
    nside = sq.nside;
}
void Square::setnside(double s){
    nside = s;
}

double Square::getnside(){
    return nside;
}

double Square::perimeter(){
    return (nside * 4);
}
double Square::area(){
    return (nside * nside);
}


