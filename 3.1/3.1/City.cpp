#include <iostream>
#include "City.h"

using namespace std;

void City::setName(const string& newname) {
    name = newname;
}
void City::setCitizens(int newcitizens) {
    citizens = newcitizens;
}
void City::setLocation(string& newlocation) {
    location = newlocation;
}
void City::setPOI(string& newPOI) {
    POI = newPOI;
}
string City::getName() {
    return name;
}
int City::getCitizens() {
    return citizens;
}
string City::getLocation() {
    return location;
}
string City::getPOI() {
    return POI;
}
void City::print() {
    cout << "Ther city is " " " << name << "The # of citizens is: " " "<< citizens << "the Location is" " " << location << "the POI is" " "<< POI << endl;
}


