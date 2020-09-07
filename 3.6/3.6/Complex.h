#include <iostream>
using namespace std;
/*
 CH08-320142
 a3 p6.cpp
 LUCIA FUENTES
 m.fuentesjacobs-university.de
 */
class Complex
{
private:
    double real;
    double imag;
    
public:
     //constrcutor for parametric and default cases
     Complex(double r = 0.0, double i = 0.0);
    //destructor
     ~Complex();
    
    //setters
    void setComplex(void);
    void setReal(double newr);
    void setImag(double newimag);
    
    // getters
    double getReal();
    double getImag();

    //service methods
    Complex sum(const Complex& a);
    Complex sub(const Complex& b);
    Complex mult(const Complex& c);
    Complex conj(void);
    void printComplex(void);
};
