#include <iostream>
#include <cstdlib>
#include "Critter.h"
/*
 CH08-320142
 a2 p7.cpp
 lucia fuentes
 m.fuentes@jacobs-university.de
 */
using namespace std;

int main(int argc, char** argv)
{
    Critter c;
    
    string name;
    int hunger;
    
    cout << endl << "Please enter data: " << endl;
    cout << "Name: ";
    // cin >> name; will not work if name contains
    // spaces
    getline(cin, name);
    c.setName(name);
    c.setName(name);
    cout << "Hunger: ";
    cin >> hunger;
    c.setHunger(hunger);
    
    cout << "You have created:" << endl;
    c.print();
    return 0;
}
