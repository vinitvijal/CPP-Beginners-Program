#include <iostream>

using namespace std;

int main(){
    string a, b;
    
    cout  << "Enter First String : ";
    getline(cin, a);

    cout << "Enter Second String : ";
    getline(cin, b);

    if(a == b)
    {
        cout << "Exact Same Strings...";
    }
    else
    {
        cout << "Different..";
    }

    
}