/*CH08-320142
 a2 p3.cpp
 MARIA LUCIA FUENTES
 m.fuentes@gmail.com  */

    #include <iostream>
    using namespace std;
    void add_min(int *x, int n){
        int min = *(x);
        int i = 0;
        int a = 0;
        while (i<n) {
            if(x[i]<min){
                min = *(x + i);
            }
            i= i+ 1;
        }
        while(a<n){
            *(x+a)= *(x+a) + min;
            a = a + 1;
        }
       
    }

    void deallocate(int *p)
    {
        delete [] p;
    }

    int main() {
        int n;
        cin >> n;
        int *x = new int[n];
        for(int i = 0;  i<n; i++){  //inserting data
         cin >> *(x + i) ;
        }
        add_min(x, n);
        for(int b = 0;  b<n; b++){ //printing data after applying function add_min
            cout << *(x + b) <<endl;
        }
        deallocate(x);
        return 0;
    }
