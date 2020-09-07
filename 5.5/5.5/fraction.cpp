/*
 CH08-320142
 a6 p2.cpp
 MARIA LUCIA FUENTES
 m.fuentes@jacobs-university.de
 */
#include <iostream>
#include "fraction.h"

using namespace std;
Fraction::Fraction()
{
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);
    
    num = n / tmp_gcd;
    den = d / tmp_gcd;
}
void Fraction::setValue(int n,int d){
    int tmp_gcd = gcd(n, d);
    
    num = n / tmp_gcd;
    den = d / tmp_gcd;
    
}

int Fraction::gcd(int a, int b)
{
    int tmp_gcd = 1;
    
    // Implement GCD of two numbers;
    
    return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);
    
}
ostream& operator<<(ostream& os, const Fraction& dt){
    os << dt.num << '/' << dt.den<<endl;
    return os;
}
istream& operator>> (istream& is, Fraction& dt){
    int n,d;
    cout<<"Please enter the denominator and numerator"<<endl;
    is>>n>>d;
    dt.setValue(n,d);
    return is;
}
Fraction Fraction::operator*( Fraction &fra){
    int a=num,b=den;
    a*=fra.num;
    b*=fra.den;
    int g= gcd(a,b);
    if (g!=1)
    {
        a/=g;
        b/=g;
    }
    return Fraction(a,b);
}
Fraction operator+ (const Fraction& lhs, const Fraction& rhs) {
    Fraction tmp(lhs.num * rhs.den +rhs.num * lhs.den, lhs.den * rhs.den );
    return tmp;
}

Fraction operator/ ( Fraction& lhs,  Fraction& rhs) {
    Fraction tmp(lhs.num * rhs.den , lhs.den * rhs.num);
    return tmp;
}
Fraction operator- (const Fraction& lhs, const Fraction& rhs) {
    Fraction tmp(lhs.num * rhs.den - rhs.num * lhs.den, lhs.den * rhs.den);
    return tmp;
}
Fraction& Fraction::operator= (const Fraction &fraction)
{
    // do the copy
    num = fraction.num;
    den = fraction.den;
    
    // return the existing object so we can chain this operator
    return *this;
}
bool Fraction::operator<(const Fraction & fra) const
{
    int fraOne,fraTwo;
    
    fraOne = num * fra.den;
    fraTwo = den * fra.num;
    
    return (fraOne < fraTwo);
}

bool Fraction::operator>(const Fraction & fra) const
{
    float fraOne,fraTwo;
    
    fraOne = num * fra.den;
    fraTwo = den * fra.num;
    
    return (fraOne > fraTwo);
}

void Fraction::print()
{
    cout << *this;
}
