/*
 CH08-320142
 a2 p2.cpp
 MARIA LUCIA FUENTES
 m.fuentes@jacobs-university.de
 */
#include <iostream>
using namespace std;
void swapping(int &a , int &b) {
    int help = a;
    a = b ;
    b = help ;
}
void swapping(double &x , double &y) {
    double h = x;
     x = y ;
     y = h ;
    
}
void swapping(const char *&str1, const char *&str2)
{
    const char *one = str1;
    str1 = str2;
    str2 = one;
}
int main(void) {
    int a = 5, b = 10;
    double x = 5.2, y = 10.7;
    const char *str1 = "One";
    const char *str2 = "Two";
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    return 0;
}
