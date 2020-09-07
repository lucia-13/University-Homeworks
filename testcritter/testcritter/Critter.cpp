#include <iostream>
#include "Critter.h"
/*
 CH08-320142
 a2 p7.cpp
 lucia fuentes
 m.fuentes@jacobs-university.de
 */
using namespace std;

void Critter::setName(string& newname) {
    name = newname;
}

void Critter::setHunger(int newhunger) {
    hunger = newhunger;
}
void Critter::setHotness(int newhotness) {
    hotness = newhotness;
}
void Critter::setAge(int newage){
    age = newage;
}
void Critter::print() {
    cout << "I am " << name << ". My hunger level is " << hunger << "." << hotness << age << endl;
}

int Critter::getHunger() {
    return hunger;
}
int Critter::getHotness() {
    return hotness;
}
int Critter::getAge() {
    return age;
}
