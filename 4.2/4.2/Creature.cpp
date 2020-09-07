/*
 CH08-320142
 a4 p4.cpp
 Lucia Fuentes
 m.fuentes@jacobs-university.de
 */
#include <iostream>

#include "Creature.h"
using namespace std;

Creature::Creature(): distance(10)
{
    cout << "Creature is being created" <<endl;
    
}
Creature::~Creature(){
    cout << "Creature is being destroyed" <<endl;
    
}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

Wizard::Wizard() : distFactor(3){
    cout << "Wizard is being created" <<endl;
    
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Hippogriff::Hippogriff() : cuteness(100),heightfly(100){
     cout << "Hippogriff is being created" <<endl;
}

void Hippogriff::fly() const {
    cout << "flying at " << heightfly << " meters! for a distance of:" << distance << endl;
    
}
void Hippogriff::becute() const {
    Hippogriff h;
    cout << "being cute as always, at a level of"" "<<cuteness<<endl;
}

dementor::dementor(): scarylevel(7),percentagesoul(45.0){
    cout << "Dementor is being created" <<endl;
    
}
void dementor::deathkiss() const{
    cout << "sucking soul of victim at: " << percentagesoul << " ""%" "of soul sucking capabilities"<< endl;
    
}
void dementor::bescary() const{
    dementor w;
    w.distance = 40;
    cout << "running towards victim for: "" ";
    w.run() ;
    cout << " at scary level of:"" " << scarylevel << endl;
}
