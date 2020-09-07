/*
 CH08-320142
 a1 p6.cpp
 Maria lucia fuentes
 m.fuentes@jacobs-university.de
 */
//guessing game (50-51)

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
   
    int tries= 0; 
    int ans;
    string name;
    srand ( static_cast < unsigned int >( time (0) ) );
    int randomNumber = (rand() % 3) + 1;
    cout << "What is yout name? Enter it\n";
    cin >> name;
    do{
        cout<< " can you guess the number? \n";
        cin >> ans;
        if(ans == randomNumber){
            cout << "Congratulstions, you must be a genius!!" << name << " " "you did it within" <<" "<< tries <<" " "tries" << endl;
            break;
        } else if(ans > randomNumber) {
            cout << "too high, keep guessing"<< endl;
        } else{
            cout << "too low, keep guessing"<<endl;
        }
        tries++;
        }while(ans != randomNumber);
    
    return 0;
}
