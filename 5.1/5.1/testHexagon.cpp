
/*
 CH08-320142
 a5 p1.cpp
 Lucia Fuentes
 m.fuentes@jacobs-university.de
 */
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "Shapes.h"
using namespace std;

int main()
{
    Hexagon h1;  //hexagon h1 created through default constructor
    Hexagon h2; //h2 is created through default constructor
    h1.setSide(2.0); //sets side of h1 to 2
    h2.setColor("yellow");  //sets color of h2 to yellow
    h2.setSide(10.0); ////sets side of h2 to 10
    Hexagon h3(h2);  // new object h3 that copiues properties h2
    cout <<  h1.Perimeter() << endl; //prints perimeter h1
    cout<<  h2.Perimeter() << endl; //prints p[erimteer h2
    cout << h3.Perimeter() << endl;  //prints perimiter h3
    cout <<  h1.Area() << endl; //prints AREA h1
    cout<<  h2.Area() << endl; //prints AREA h2
    cout << h3.Area() << endl;  //prints AREA h3
    

    return 0;
}
