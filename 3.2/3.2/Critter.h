#include <string> // defines standard C++ string class
/*
 CH08-320142
 a3 p4.cpp
 LUCIA FUENTES
 m.fuentes@jacobs-university.de
 */
class Critter
{
private:  // data members are private
    std::string name;
    double hunger;
    int boredom;
    double height;
    double thirst;
    
public: // business logic methods are public
    // setter methods
    void setName(std::string newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    
    
    //declaration constuctors
    Critter(std::string newname, int newhunger, int newboredom, double newheight = 15);
    Critter();
    Critter(std::string newname);
    Critter(std::string newname, int newhunger, int newboredom, double newheight, double newthirst);
    // getter method
    int getHunger();
    // service method
    void print();
    double todoubl(int x);
    int toentero(double y);
};
