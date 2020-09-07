/*
 CH08-320142
 a4 p4.cpp
 Lucia Fuentes
 m.fuentes@jacobs-university.de
 */

#include <stdio.h>
#include <cstdlib>
#include "Creature.h"
using namespace std;
int main()
{
 
    char x;
    while(true){
        cin >> x;
        if (x == 'w' || x== '1' ||  x == '2'){
            dementor* a = new dementor;
            delete a;
            Wizard* b = new Wizard;
            delete b;
        } else if(x == 'q'){
            break;
        }
        
    }
    return 0;
}
