/*
 CH08-320142
 a6 p2.cpp
 MARIA LUCIA FUENTES
 m.fuentes@jacobs-university.de
 */
#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    Fraction a;
    Fraction b;
    cin >> a;
    cin >> b;
    if(a > b){
        cout << a;
        
    }else {
        cout << b;
    }
    Fraction c = a + b;
    Fraction d = a - b;
    cout << c;
    cout << d;
    a = b;
    return 0;
}
