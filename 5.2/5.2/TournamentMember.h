
#include <stdio.h>
#include <string>// defines standard C++ string class
#include <cstring>
/*
 CH08-320142
 a5 p4.cpp
 lucia fuentes
 m.fuentes@jacobs-university.de
 */



class TournamentMember
{
    
    
protected:  // data members are private
    char fname[31];
    char lname[31];
    char bday[11];
    double height;
    int idnum;
    static std::string location;
    
public: // business logic methods are public
    //constructors and desctructors declaration
    TournamentMember();
    ~TournamentMember();
    TournamentMember(const char*,const char*,const char*, double, int);
    TournamentMember(TournamentMember &t);
    
    // setter methods definition and declaration
    static void setLocation(std::string loc);
    
    inline void setFname(const char* newfname){
        strcpy(fname, newfname);
    }
    
    inline void setLname(const char* newlname){
        strcpy(lname, newlname);
    }
    
    inline void setBday(const char* newbday){
        strcpy(bday, newbday);
    }
    
    inline void setHeight(double newheight){
        height = newheight;
    }
    inline void setIdnum(int newidnum){
        idnum = newidnum;
    }
    // getter method
    inline std::string getLocation(){
        return location;
    }
    inline char* getFname(){
        return fname;
    }
    inline char* getLname(){
        return lname;
    }
    inline char* getBday(){
        return bday;
    }
    inline int getIdnum(){
        return idnum;
    }
    
    inline double getHeight(){
        return height;
    }
    
    
    // service method
    void print();
};

class Player: public TournamentMember{
private:
    int num;
    std::string position;
    int goals;
    std::string footed;
    
public:
    Player(const char* a,const char* b,const char* c, double d, int e, int newnum, std::string newposition, int newgoals, std::string newfooted ); //parametric cosntructor
    Player(); //default constructor
    Player(Player &p); //copy constructor
    ~Player(); //destructor
    
    //inline setters declaration and definition
    inline void setNum(int newnumb){
        num = newnumb;
    }
    inline  void setPosition(std::string newposition){
        position = newposition;
    }
    inline void setFooted(std::string newfooted){
        footed = newfooted;
    }
    
    //inline getters declaration and deifnition
    inline int getNum(){
        return num;
    }
    inline std::string getPosition(){
        return position;
    }
    inline int getGoals(){
        return goals;
    }
    inline std::string getFooted(){
        return footed;
    }
    
    //service method
    void print();
    void increaseGoals(int goalsdone);
};

class Referee: public TournamentMember{
protected:
    int yellowCardCount;
    Player *yellowCardList[50];
    int redCardCount;
    Player *redCardList[50];
    
public:
    Referee();
    bool addToYellowCardList(Player *p);
    bool addToRedCardList(Player *p);
};
