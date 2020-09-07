/*
 CH08-320142
 a4 p5.cpp
Lucia Fuentes
 m.fuentes@jacobs-university.de
 */
#include <iostream>

#include "Shapes.h"
using namespace std;

int main(int argc, char** argv) {
    

 

    Rectangle rec("Rectangle", 1,1,2.0, 2.5);
    Circle circ("Circle",0, 0 , 3.5 );
    Square sqr("Square", 0, 0, 4.0);
    RegularPolygon r("TRIANGLE", 1, 1, 3);
    
  
    circ.printName();
    cout << circ.area() << endl;
    cout << circ.perimeter() << endl;
    rec.printName();
    cout<< rec.area()<< endl;
    cout << rec.perimeter()<< endl;
    sqr.printName();
    cout<< sqr.area()<< endl;
    cout << sqr.perimeter()<< endl;
    
}
