/*
 CH08-320142
 a1 p2.cpp
 Maria lucia Fuentes
 m.fuentes@jacobs-university.de
 */
#include <iostream>
using namespace std;

int main() {
    // insert code here...
    int nr;
    float val;
    string s;
    
    cin >> nr;
    cin >> val;
    cin >> s;
    
    for(int i = 1; i <= nr; i++){
    cout << val << " ";
    cout << s << endl;
    }
    return 0;
}
