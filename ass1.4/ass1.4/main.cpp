/*
 CH08-320142
 a1 p4.cpp
 Maria Lucia Fuentes
 m.fuentes@jacobs-university.de
 */

#include <iostream>
#include <string>
using namespace std;

int mycount(int a, int b){
    int diff = a -b;
    return diff;
}
int mycount( string s, char ch){
    int count = 0;
    int size = s.size();
    for (int i = 0; i < size; i++){
        if (s[i] == ch){
            count++;
        }
    }
    if(count == 0){
        return -1; }
    else{
            return count;
        }
    }


int main() {
    int a = 7;
    int b = 3;
    cout <<  mycount(a, b) << endl;
    cout << mycount("this is a string", 'i') << endl;
    return 0;
}

