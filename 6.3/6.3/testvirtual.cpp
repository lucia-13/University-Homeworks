/*
 CH08-320142
 a6 p4.cpp
 Maria Lucia Fuentes
 m.fuentes@jacobs-university.de
 */

#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

void fun(char *builtins[]){}
int main() {
    const int num_obj = 20;
    const char *color[4] ={ "RED", "GREEN","BLUE", "YELLOW"};
    fun(const_cast<char **>(color));
    int i = 0;
    int NUM;
    int randomNumber;  //variable where random number is saved
    int randomside1;
    int randomside2;
    int NUMcol;
    double NUMside1;
    double NUMside2;
    int  randomColor;
    double totalarea = 0;
    double totalper = 0;
    double area;
    double per;
    srand(static_cast<unsigned int>(time(0)));
    while( i < num_obj){
        randomside1 = rand();
        randomside2 = rand();
        randomNumber = rand();
        randomColor = rand();
        NUM = (randomNumber % 3);
        NUMcol = (randomColor % 4);
        NUMside1 = (randomside1 % 1000);
        NUMside2 = (randomside2 % 1000);
        if(NUM == 0){
           Square sqr(color[NUMcol], NUMside1);
           per = sqr.calcPer();
            area = sqr.calcArea();
        } else if (NUM == 1){
            Circle circ(color[NUMcol], NUMside1);
            per = circ.calcPer();
            area = circ.calcArea();
        } else if(NUM== 2){
            Ring ring(color[NUMcol], NUMside1, NUMside2 );
            per = ring.calcPer();
            area = ring.calcArea();
        } else{
            Rectangle rec(color[NUMcol], NUMside1, NUMside2);
            per = rec.calcPer();
            area = rec.calcArea();
        }
        i++;
        totalper = totalper + per;
        totalarea = totalarea + area;
        
    }
    cout<< "total eprimeter is:"" "<< totalper << endl;
    cout<< "toal area is:" " " << totalarea << endl;
    
    
    return 0;
    
}

