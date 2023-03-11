#include <iostream>

using namespace std;

int main(){
    float radius, perimeter, area;
    const float pi = 3.1428;
    cout << "Enter Radius Of Your Circle : ";
    cin >> radius;
    area = pi * radius * radius;
    perimeter = 2 * pi * radius;
    cout << "\n\n";
    cout << "Area of Circle : " << area << "\n";
    cout << "Perimeter of Circle : " << perimeter << "\n\n";

}
