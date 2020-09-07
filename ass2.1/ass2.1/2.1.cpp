    /*
     CH08-320142
     a2 p1.cpp
     MARIA LUCIA FUENTES
     m.fuentes@jacobs-university.de
     */

    #include <iostream>
     #include <cmath>

    using namespace std;

    int myfirst(int param1[]){
        int i =0;
        int ret = -1;
        while(param1[i]){
            if((param1[i] % 2 != 0 ) && (param1[i] > 0)){
                ret = param1[i];
                break;  }
            i++;
        }
        return ret;
        }

    double myfirst(double param2[]){
        int a =0;
        double ret = -1;
        while(param2[a]){
            if((fmod(param2[a], 1) == 0 ) && (param2[a] > 0)){
                ret = param2[a];
                break;  }
            a++;
        }
        return ret;
    }
    char myfirst(char param3[]){
        int b =0;
        double ret = 0;
        while(param3[b]){
            if(param3[b]=='a' || param3[b]=='e' || param3[b]=='i' ||
               param3[b]=='o' || param3[b]=='u' || param3[b]=='A' ||
               param3[b]=='E' || param3[b]=='I' || param3[b]=='O' ||
               param3[b]=='U'){
                ret = param3[b];
                break;  }
            b++;
        }
        return ret;
        
    }

    int main() {
        int arr1[10] = {10,4,2,4,6,8,9,9,5,7};
        cout << "First non negative odd integer is:"<< " " <<  myfirst(arr1) << endl;
        double arr2[5] = {3.4, 2.4, 3.5, 1.4, 2.0};
        cout <<"First non fractional double is:"<<" "<< myfirst(arr2) << endl;
        char arr3[7] ={'C','B','D','A','B','a'};
        cout<< "First vowel is:"<<" "<< myfirst(arr3) << endl;
        return 0;
    }
