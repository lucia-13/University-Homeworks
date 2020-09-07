#include <iostream>
#include "Complex.h"
/*
 CH08-320142
 a3 p6.cpp
 LUCIA FUENTES
 m.fuentesjacobs-university.de
 */
using namespace std;
//constructor that works as parametric and default

Complex::Complex(double r , double i){
    real = r;
    imag = i;
}
//destructor
Complex::~Complex(void){
    cout << "Object is being deleted" << endl;
}
//setters characteristics class Complex
void Complex::setReal(double newr){
    real = newr;
}
void Complex::setImag(double newimag) {
    imag = newimag;
}
//getters
double Complex::getReal() {
    return real;
}
double Complex::getImag() {
    return imag;
}
//setter for whole object
void Complex::setComplex(void)
{
    cout << "Enter the real and then imaginary part : ";
    cin >> this->real;
    cin >> this->imag;
}
//sum two complex objects
Complex Complex::sum(const Complex& a)
{
    Complex comp;
    comp.real = this->real + a.real;
    comp.imag = this->imag + a.imag;
    return comp;
}
//difference two complkex objects
Complex Complex::sub(const Complex& b)
{
    Complex comp;
    comp.real = this->real - b.real;
    comp.imag = this->imag - b.imag;
    return comp;
    }

//multiplication two complex objects
Complex Complex::mult(const Complex& c)
{
    Complex comp;
    comp.real = this->real * c.real - (this->imag *  c.imag);
    comp.imag = this->real * c.imag  + this->imag * c.real;
    return comp;
}
 //conjugate one complex object
Complex Complex::conj()
{
    Complex conj;
    conj.imag = this-> imag * -1 ;
    conj.real = this->real;
    return conj;
}
//print complex object in mathematical form
void Complex::printComplex(void)
{
    char symb;
    if((this->imag) >= 0){
        symb = '+';
    }else{
        symb = ' ';
    }
    
    cout <<  this->real << " "<< symb <<" "<< (this->imag) << "i" << endl;
    }
