
/*
 CH08-320142
 a3 p5.cpp
LUCIA FUENTES
 m.fuentes@jacobs-university.de
 */
#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
 Naive string: the goal is to illustrate how copy constructors
 should be handled. See also charbuffer.cpp
 */

class NaiveString {
private:
    char *str;
public:
    NaiveString(const char*); //constructor 1
    NaiveString(const NaiveString&); //constructor 2
    ~NaiveString(); //destructor, for freeing memory
    void update(char, char);
    void print();
  
};

NaiveString::NaiveString(const char* t) { //constructor normal
    str = new char[strlen(t) + 1];
    strcpy(str, t);
        cout << "object is being created through constructor" << endl;
}

/*
 Copy constructor: creates a new instance of
 naive string starting from an existing one
 */


NaiveString::NaiveString(const NaiveString& src) { //copy constructor
    str = new char[strlen(src.str) + 1];
    strcpy(str, src.str);
    cout << "object is being created through copy constructor" << endl;
    // please note that we can access src.str even if it is private
    // as we are inside the NaiveString class
}
NaiveString::~NaiveString(void) { //destructor
    cout << "Freeing memory!" << endl;
    delete str;
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
    unsigned int i;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == oldchar)
            str[i] = newchar;
}

void NaiveString::print() {
    cout << str << endl;
}

void funcByVal(NaiveString s) {
    cout << "funcbyval() being called" << endl;
    s.update('B', 'C');
    s.print();
}
void funcByref(NaiveString& s){
    cout << "funcbyref() being called" << endl;
    s.update('B', 'C');
    s.print();
}

int main(int argc, char** argv)
{
    NaiveString a("aBcBdB");
    NaiveString b(a);
    NaiveString c("BBCBAdB");
    NaiveString d(c);
    a.print();
    cout << "About to call funcbyval()" << endl;
    funcByVal(a);
    funcByref(b);
    funcByVal(c);
    funcByref(d);
    a.print();
}
