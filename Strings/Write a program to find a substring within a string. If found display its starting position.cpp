#include <iostream>

using namespace std;

int main(){
    
    string s1, s2;

    cout << "Enter String : ";
    getline(cin, s1);

    cout << "Enter Sub-String : ";
    getline(cin, s2);

    int l2 = s2.length();

    for (int a = 0; a <= s1.length(); a++){
        if (s1.substr(a, l2) == s2){
            cout << "Position of Sub-String : " << a << endl;
            return 0;
        };
    }
    cout << "Not a Sub-String" << endl;

}