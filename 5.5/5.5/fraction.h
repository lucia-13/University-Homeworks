/*
 CH08-320142
 a6 p2.cpp
 MARIA LUCIA FUENTES
 m.fuentes@jacobs-university.de
 */
#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {
    
private:                        // internal implementation is hidden
    int num;                    // numerator
    int den;                    // denominator
    
    int gcd(int a, int b);        // calculates the gcd of a and b
    int lcm(int a, int b);
    
public:
    Fraction();                    // empty constructor
    Fraction(int, int = 1);     // constructor taking values for fractions and
    void setValue(int n,int d);
    // integers. Denominator by default is 1
    void print();// prints it to the screen
    friend std::ostream& operator<<(std::ostream& os, const Fraction& dt);
    friend std::istream& operator>> (std::istream& is,  Fraction& dt);
    Fraction operator*(Fraction &fra);
    Fraction& operator= (const Fraction &fraction);
    Fraction   friend operator/ (Fraction& lhs, Fraction& rhs);
    Fraction  friend operator+ (const Fraction&, const Fraction& );
    Fraction  friend operator- (const Fraction&, const Fraction& );
    bool operator<(const Fraction & fra) const;
    bool operator>(const Fraction & fra) const;
    
};


#endif /* FRACTION_H_ */
