/*
 CH08-320142
 a1 p5.cpp
 MARIA LUCIA FUENTES
 m.fuentes@jacobs-university.de
 */

#include <iostream>
using namespace std;

int main() {
    char letter; //character read iteratively
    int n = 0; //initialization size char string
    char tot[n]; // string to be filled of n size
    while (true)  //repetes till break
    {
        cin >> letter; //scan char and saves to letter
        if (letter == 'q'){  //stops loop if lettter equals q
            break;
        }
        ++n; //increases by one each iteration, increasing size string
        tot[n] = letter; // saves iteration's letter to position n of string tot
     
    }
    
    cout << tot ; //prints string without last q and spaces
    return 0;
    
}
