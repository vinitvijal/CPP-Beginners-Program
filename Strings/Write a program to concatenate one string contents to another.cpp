#include <iostream>

using namespace std;

int main(){
    string a, b;
    cout << "Enter First String : ";
    getline(cin, a);

    cout << "Enter Second String : ";
    getline(cin, b);

    a = a + b;
    cout << "Concatenated String : " << a << endl;

}