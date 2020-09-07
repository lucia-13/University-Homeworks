/*
 CH08-320142
 a3 p6.cpp
 LUCIA FUENTES
 m.fuentesjacobs-university.de
 */
#include <iostream>
#include <cstdlib>
#include "Complex.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // four instances of Complex
    Complex a, b, c, d;
    
    cout << "Setting first complex number " << endl;
    a.setComplex(); //setting one isntance complex
    cout << "Setting second complex number " << endl;
    b.setComplex(); //setting second instance complex
   
    //conjugate instance/object a
    cout << "Conjugate of a: " << endl;
    c = a.conj();
    c.printComplex();
   
   //sum isntacne a and b
    cout << "Sum of a and b : " << endl;
    d = a.sum(b);
    d.printComplex();
     //difference instance a - b
    cout << "Difference of a and b : " << endl;
    d= a.sub(b);
    d.printComplex();
    //multiplication instance a and b
    cout << "Product of a and b : " << endl;
    c = a.mult(b);
    c.printComplex();
    
    return  0;
}
