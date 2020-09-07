#include <iostream>
#include "Critter.h"
/*
 CH08-320142
 a3 p4.cpp
 LUCIA FUENTES
 m.fuentes@jacobs-university.de
 */
using namespace std;
double Critter::todoubl(int x){
    double a;
    a = (double)(x) /10.0;
    return a;
    
}
int Critter::toentero(double y){
    int intValue = (int)(y * 10);
    return intValue;
}

void Critter::setName(string newname) {
    name = newname;
}

void Critter::setHunger(int newhunger) {
    hunger = todoubl(newhunger);
}
//cosntructors definition
Critter::Critter(string newname, int newhunger, int newboredom, double newheight) {
  
    name = newname;
    height = newheight;
    hunger = todoubl(newhunger);
    boredom = newboredom;
    thirst = todoubl(newhunger);
     cout << "All 4 as parameters." << endl;
}
Critter::Critter(string newname) {
    
    name = newname;
    height = 10.0;
    hunger = 0.0;
    boredom = 0;
    thirst = hunger;
    cout << "Only name given, rest are parameters." << endl;
  
}
Critter::Critter() {
    
    name = "critter";
    height = 10.0;
    hunger = 0.0;
    boredom = 0;
    thirst = hunger;
    cout <<"zero parameters given, default state" << endl;
   
}
Critter::Critter(string newname, int newhunger, int newboredom, double newheight, double newthirst) {
    
    name = newname;
    height = newheight;
    hunger = todoubl(newhunger);
    boredom = newboredom;
    thirst = newthirst;
    cout << "All 5 as parameters." << endl;
}

//service methods
void Critter::print() {
    cout << "I am " << name << ". My hunger level is " " " << hunger <<" " "or" " "<< toentero(hunger) <<" " "my height is" " " << height <<
    " "" my boredome level is" << boredom <<  "." <<" " "my thirst level is:"<< thirst << endl;
}


int Critter::getHunger() {
    int hunga = toentero(hunger);
    return hunga ;
}
