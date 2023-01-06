#include <iostream>

using namespace std;

int main(){

    string a, b;
    cout << "Enter Your String : ";
    getline(cin, a);

    for(int i = a.length() - 1; i >= 0 ; i--){
        b = b + a[i];
    }


    if (a == b){
        cout << "It\'s Palindrome";
    } else {
        cout << "Not a Palindrome";
    }
}