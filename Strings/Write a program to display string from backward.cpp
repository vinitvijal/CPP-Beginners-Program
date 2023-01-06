#include <iostream>

using namespace std;

int main(){
    string a;
    cout << "Enter Your String : ";
    getline(cin, a);

    for (int n = a.length() - 1; n >= 0; n--)
    {
        cout << a[n];
    }

    
    cout << endl;
}