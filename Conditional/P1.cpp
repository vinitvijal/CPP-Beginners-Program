#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "\nEnter a Character : ";
    a = cin.get();


    if(a>=49 and a<=57 ){
        cout << "its a digit";
    } else if (a>=65 and a<=90){
        cout << "Its a Uppercase";
    } else if (a>=97 and a<=122){
        cout << "Its a Lowercase";

    }
};