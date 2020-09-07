#include <iostream>
#include <cstring>
#include "Area.h"
/*
 CH08-320142
 a6 p3.cpp
 Maria Lucia Fuentes
 m.fuentes@jacobs-university.de
 */

using namespace std;

Area::Area(const char* n) {
	strncpy(color, n, 10);
	cout << "Area constructor being called...\n";
}

Area::~Area() {
}

void Area::getColor() const {
	cout << "\n" << color << ": ";
}
