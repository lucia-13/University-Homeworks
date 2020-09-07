#include <iostream>
/*
 CH08-320142
 a4 p4.cpp
Lucia Fuentes
 m.fuentes@jacobs-university.de
 */
using namespace std;

class Creature{
public:
    Creature();
    ~Creature();
    void run() const;
    
protected:
    int distance;
};

class Wizard : public Creature {
public:
    Wizard();
    void hover() const;
    
private:
    int distFactor;
};



class Hippogriff : public Creature {
public:
    Hippogriff();
    void fly() const;
     void becute() const;
    
private:
    int cuteness;
    int heightfly;
    
};

class dementor : public Creature {
public:
    dementor();
    void bescary() const;
    void deathkiss() const;
    
private:
    int scarylevel;
    double percentagesoul;
    
};


