/*
 CH08-320142
 a4 p1.cpp
 MARIA LUCIA FUENTES
 m.fuentes@jacobs-university.de
 */
#include <iostream>
#include <cstdlib>
#include "Box.h"

using namespace std;

int main(int argc, const char * argv[]) {
    int numb;
    int h;
    int w;
    int d;
    int sum = 0;
    cout << "enter number of boxes:" << endl;
    //scan number of bozes to create
    cin >> numb;
    //creates dynamically allocated array
    Box* a = NULL;
    a = new Box[numb];
   // sets properties to n box objects
    for (int i=0; i<numb; i++) {
        cin >> h >> w >> d;
        a[i].setHeight(h);
        a[i].setWidth(w);
        a[i].setDepth(d);
    }
    // calculates area of every element Box array and sums it to a global variable sum
    for (int x=0; x<numb; x++) {
       cout << a[x].Area() << endl;
        sum = sum + a[x].Area();
    }
    //prints sum
    cout << sum << endl ;
    return 0;
}
