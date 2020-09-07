/*
 CH08-320142
 a5 p4.cpp
 lucia fuentes
 m.fuentes@jacobs-university.de
 */

#include <cstdlib>
#include <stdio.h>
#include <string>
#include <cstring>
#include <iostream>
#include <string>
#include "TournamentMember.h"


using namespace std;

string TournamentMember::location;
//constructors and destructor
//destructor
TournamentMember::~TournamentMember(){
    cout << "destruction of object called"<<endl;
}

//default constructor
TournamentMember::TournamentMember(){
    cout << " default constructor called"<<endl;
    strcpy(fname, (char *)"name");
    strcpy(lname, (char *)"lastname");
    strcpy(bday, (char *)"1990-01-01");
    height = 0.0;
    idnum = 0;
}
//parametric constructor
TournamentMember::TournamentMember(const char* a ,const char* b ,const char* c, double d , int e){
    cout << " parametric constructor called"<<endl;
    strcpy(fname,a);
    strcpy(lname,b);
    strcpy((char *)bday,c);
    height =  d;
    idnum = e;
}
//copy constructor
TournamentMember::TournamentMember(TournamentMember &t){
    cout << " copy constructor called"<<endl;
    strcpy(fname, t.getFname());
    strcpy(lname, t.getLname());
    strcpy(bday, t.getBday());
    height = t.getHeight();
    idnum = t.getIdnum();
}

//setters -- only location s=defined here, as it is noit inline
void TournamentMember::setLocation(string loc){
    location = loc;
}
/* getters are defined in header file as :
 We usually put the inline function in the header file,
 so the compiler can see the definition while compiling the code that uses the function.
 That way it works with all compilers. */





//service methods
void TournamentMember::print(){
    cout << "The name is:"" "<< fname << " ""and the last name" " " << lname <<
    " " " born on:" " " << bday << " " "The height is:" " " << height <<
    " ""The id number is:" << idnum << endl;
    cout << "The location is:" " "<< location << endl;
}


//mathsods for class Player
//default definiton
Player::Player() : TournamentMember(), num(0), position(" "), goals(0), footed("right-footed"){
    
    cout << "default constructor is being called" << endl;
}
//parametric definiton
Player::Player(const char* a ,const char* b ,const char* c, double d , int e, int newnum, string newposition, int newgoals, string newfooted): TournamentMember( a, b , c, d , e){
    cout << "parametric constructor is being called" << endl;
    num = newnum;
    position = newposition;
    goals = newgoals;
    footed = newfooted;
}
//copy definiton
Player::Player(Player &p): TournamentMember(p.fname, p.lname, p.bday, p.height,p.idnum){
    cout << "copy constructor is being called" << endl;
    num = p.getNum();
    position = p.getPosition();
    goals = p.getGoals();
    footed = p.getFooted();
}
//destructor  definition
Player::~Player(){
    cout << "Object player is being deleted" << endl;
}

//service methos
//print for Player
void Player::print(){
    cout << "The name is:"" "<< fname << " ""and the last name" " " << lname <<
    " " " born on:" " " << bday << " " "The height is:" " " << height <<
    " ""The id number is:" << idnum << endl;
    cout<<"the numberof the player is:" " "<<num << " ""the position of the player is" " "<< position <<
    " ""the goals of the player are:"" "<<goals << " ""the foot of the plasyer is:"" "<<footed<<endl;
    cout << "The location is:" " "<< location << endl;
}
//increasing goals by goalsdone
void Player::increaseGoals(int goalsdone){
    goals = goals + goalsdone;
}

//Referee methods
//constructor default referee
Referee::Referee(){
    cout <<" referee created"<<endl;
    
}
//method that returns 1 if player was added to yellowcardList, and 0 if  player was added to redCardList
bool Referee::addToYellowCardList(Player *p){
    bool x;
    for(int i = 0; i < 50; i++){ //loop to check if p exists in array yellow cradlist
        if(this->yellowCardList[i] == p){ //checks if p is equal to elemnt i of array yellowCradList
            x = 0; //if it exists then x becomes 0
            delete this->yellowCardList[i];
            yellowCardCount -= 1;
            this->redCardList[redCardCount] = p;
            redCardCount += 1;
             break;
        } else{
            x = 1;
        }
    }
    if(x == 1){ //if p was not found in yellow card list
        
        this->yellowCardList[yellowCardCount] = p; //object p added to array
        yellowCardCount += 1;
    }
    return x;
}
//mehtos that returns 0 if object p was found on redCradList array, and 1 if it was not found, and it was added to redCardCount array
bool Referee::addToRedCardList(Player *p){
    bool y;
    for(int i = 0; i < 50; i++){
        if(this->redCardList[i] == p){
            y = 0;
            break;
        } else{
            y = 1;
        }
    }
    if(y == 1){
        this->redCardList[redCardCount] = p;
        redCardCount += 1;
    }
    return y;
}


