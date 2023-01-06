#include <iostream> 
using namespace std;

int main(){

    string a;
    
    cout << "Enter Your String : ";
    getline(cin, a);
    
    cout << "Length of the Your String : " << a.length() << endl;

    return 0;
}