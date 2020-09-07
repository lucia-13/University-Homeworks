
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
        Hexagon h1;
        Hexagon h2;
        Hexagon h3(h2);
        h1.setSide(2.0);
        h2.setColor("yellow");
        h2.setSide(10.0);
        cout <<  h1.Perimeter() << endl;
        cout<<  h2.Perimeter() << endl;
        cout << h3.Perimeter() << endl;
        
        
        return 0;
    }

