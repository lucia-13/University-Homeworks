/*
 CH08-320142
 a2 p5.cpp
 MARIAS LUCIA FUENTES
 m.fuentes@jacobs-university.de
 */

#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string s){
    bool a;
    if (s == string(s.rbegin(), s.rend())) {
        a = true;
    } else{
        a = false;
    }
    return a;
}
int main() {
    string s;
    while(true){
        cout << "Enter word to check, or stop to stop:" << endl;
        cin >> s;
        if(s != "stop"){
        cout << isPalindrome(s) << endl;
        } else{
            break;
        }
    }
    return 0;
}
