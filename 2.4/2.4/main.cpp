/*
 CH08-320142
 a2.p4.cpp
 Maria  Lucia Fuentes
 m.fuentes@jacobs-university.de
 */
    #include <iostream>
    using namespace std;
    void underscore(string a){  //function to replace vowels for underscores
        for (char& c: a)
        {
            if (c == 'a' || c =='e' || c =='i' || c == 'o' || c == 'u'){
                c = '_';
                
            }
        }
       cout << a << endl;
        
    }
    int main() {
        string a[15]   = {"computer", "television", "keyboard",
            "magazin", "book"}; //first 5 elements
        string inp;
        string end;
        string guess;
        int n = 4;
        while(n < 15){ // input of last 10 elements of string arrauy x
            cin >> inp;
            a[n] = inp;
            n++;
        }
        srand ( static_cast < unsigned int >( time (0) ) );
        string word;
        int tries = 0;
        
        while(true){  //runs till break
            if(tries == 0){
                int rNum = (rand() % 14) ; //chooses random number every time tries  equals 0
                word = a[rNum]; //assigns random position to array and assigns that to string variable word
                underscore(word); //prints random guessed element array with underscores
                
            }
            cout << "Enter guess:"<<endl;
            cin >> guess;
          if(guess == word){   // when user guesses word
              cout<< "number of tries:" <<" " << tries; //print number tries
              cout << " Correct guess, Do you wish to play again?"<<endl;
              cin >> end; //save answer
              if( end == "quit"){ //if user inputs quit
                  break; //exit loop
              }else{ //if user inpouts anythi g else
                    tries = 0; //restart tries
                  continue; //restart loop
                
              }
          }
            tries = tries +1; //increase tries by one every run
        }
        
        
        return 0;
    }
