/*
 CH08-320142
 a4 p1.cpp
 MARIA LUCIA FUENTES
 m.fuentes@jacobs-university.de
 */
#include <iostream>
#include "Box.h"

using namespace std;
//setters defined
void Box::setDepth(int newdepth) {
    depth = newdepth;
}
void Box::setWidth(int newwidth){
    width = newwidth;
}
void Box::setHeight(int newheight) {
    height = newheight;
}
//getters defined
int Box::getDepth() {
    return depth;
}
int Box::getWidth() {
    return width;
}
int Box::getHeight() {
    return height;
}
// constructors and destructors defined

Box::Box(int h, int w, int d ) {
    cout << "Object is being created not emty " << endl;
    height = h;
    width = w;
    depth = d;
}
Box::Box(void) {
    cout << "Object is being created emty" << endl;
}
Box::~Box(void) {
    cout << "Object is being deleted" << endl;
}


//service methods defined
int Box::Area(){
    return depth * width * height;
}
void Box::print() {
    cout << "Ther width is " " " << width << "The depth " " "<< depth << "the height is" " " << height << endl;
}


