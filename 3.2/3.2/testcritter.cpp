    #include <iostream>
    #include <cstdlib>
    #include "Critter.h"
    /*
     CH08-320142
     a3 p4.cpp
     LUCIA FUENTES
     m.fuentes@jacobs-university.de
     */

    using namespace std;

    int main(int argc, char** argv)
    {
 
       
        Critter c1;
        Critter c2("Jess");
        Critter c3("Jay", 2, 3, 5.5);
        Critter c4("pete", 2, 3);
        Critter c5("lucia", 2 ,3, 4.0, 3.5 );
        c1.setHunger(5);
        c2.setHunger(5);
        c3.setHunger(5);
        c4.setHunger(5);
        c1.print();
        c2.print();
        c3.print();
        c4.print();
        c5.print();
        
        return 0;
    }
