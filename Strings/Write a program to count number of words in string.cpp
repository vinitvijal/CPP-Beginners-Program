#include <iostream>

using namespace std;

int main(){
    
    string a;
    cout << "Enter Your String : ";
    getline(cin, a);
    int count = 0;
    
    for(int i = 0; i < a.length(); i++){
        if (a[i] == ' '){
            count++;
        }
    }
    cout << "Total No. Of Words In Your Strings : " << count + 1 << endl;
}