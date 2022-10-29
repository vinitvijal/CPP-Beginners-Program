// Read Coordinates and Find Distance Between Them

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x1, x2, y1, y2;
    double distance;
    
    cout << "Enter 1st Coordinates as (x  y) : ";
    cin >> x1 >> y1;
    cout << "Enter 2nd Coordinates as (x  y) : ";
    cin >> x2 >> y2;

    distance = sqrt(pow((x2-x1),2) + pow((y2-y1), 2));
    cout << "Distance Between (" << x1 << ',' << y1 << ") and (" << x2 << ',' << y2 << ") : "  << distance ;

}
