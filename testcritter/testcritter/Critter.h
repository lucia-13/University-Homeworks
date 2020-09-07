#include <string> // defines standard C++ string class
/*
 CH08-320142
 a2 p7.cpp
 lucia fuentes
 m.fuentes@jacobs-university.de
 */
/* First C++ class */
class Critter
{
private:  // data members are private
    std::string name;
    int hunger;
    int boredom;
    double height;
    int hotness;
    int age;
    
public: // business logic methods are public
    // setter methods
    void setName(std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHotness(int hotness);
    void setAge(int age);
    // getter method
    int getHunger();
    // service method
    int getHotness();
    int getAge();
    void print();
};
