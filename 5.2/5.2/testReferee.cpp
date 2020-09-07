/*
 CH08-320142
 a5 p4.cpp
 lucia fuentes
 m.fuentes@jacobs-university.de
 */

#include <iostream>
#include <cstdlib>
#include "TournamentMember.h"

using namespace std;

int main(int argc, const char * argv[]) {
    Player *x = new Player;
    Player *y = new Player;
      Player *z = new Player;
     Referee u;
    cout<< u.addToYellowCardList(x) << endl;  //adds player x to yellowCradList, returns 1, as it is not there
    cout <<  u.addToYellowCardList(x) << endl; //tries to add again x to yelloyCradList, returns 0, as it is not there, and adds it to redCradList
    cout<< u.addToRedCardList(x) << endl; //tries to add x to redCardList, but it is already there, so it returns 0
    cout << u.addToRedCardList(y) << endl; //tries to add y to redCardList, returns 0, as it is not there
    cout << u.addToRedCardList(z) << endl; //tries to add z to redCards, succesful adding retuns 1
    cout << u.addToRedCardList(y) << endl; //returns 0, as it is already there, does nothing
    return 0;
    
    
    /* TournamentMember a("Mario", "Fuentes","1990-13-12",123.90, 191 ); //object a constructed prametically
    a.setLocation("mexico"); //changing value class variable static
    a.print();
    TournamentMember b; //creating object b through default construction
    cout << b.getBday()<< endl;  //printing birthday object b- should be default value
    b.setIdnum(900); //setting new value to Idnum, for object b
    b.setLocation("USA");  //changing location through b, but it will change for all
    b.print();
    a.print();
    TournamentMember c(a);  //creating object c, through copy of a
    c.setHeight(1.79); //changing height to 1.79
    c.setBday("1998-11-12"); //changing c bday
    c.print(); //printing c
    
    
    //for 5.3 or player
    cout<< "TEST FOR 5.2 OR FOR Player class"<<endl;
    Player aa("Maria", "smith","1997-10-12",179.90, 196, 16, "front", 0, "left-footed" ); //creation player parametric
    aa.setLocation("Bremen"); //setting location for all
    aa.print();
    Player bb; //default player bb
    //bb.setNum(13); //setting value num bb to 13
    bb.setPosition("back"); //changing position bb
    bb.print();
    Player cc(aa); //object through copy constructor
    cc.setNum(12); //changing num cc
    cc.increaseGoals(5); //increasing goals cc by 5
    cc.print(); */
    
}
