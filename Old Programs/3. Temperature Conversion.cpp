#include <iostream>

using namespace std;

int main(){
    int choice;
    float temp, countemp;

    cout << "Temperature Conversion Menu \n";
    cout <<"1. Celsius To Fehrenheit \n";
    cout <<"2. Fahrenheit To Celsius \n";
    cin >> choice;

    if (choice == 1){
        cout << "\n\nEnter Your Temperature In Celsius : ";
        cin >> temp;
        countemp = 1.8*temp + 32;
        cout << "The Temperature in Fehrenheit : " << countemp << " F \n\n";

    }

    else {
        cout << "\n\nEnter Your Temperature In Fehrenheit : ";
        cin >> temp;
        countemp = (temp - 32)/1.8;
        cout << "The Temperature in Celsius : " << countemp << " C \n\n";    
        }
    cout << "~~~ Thanks For Using Our Programming ~~~";

}