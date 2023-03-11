#include <iostream>

using namespace std;

int main(){
    string s1, s2;
    cout << "Enter Your String : ";
    getline(cin, s1);

    for(int i = s1.length() - 1; i >= 0; i--){
        s2 += s1[i];
    }
    cout  << "Reversed String : " << s2 << endl;
}