#include <iostream>
using namespace std;

int sum(int arr[], int s){
    int add = 0;
    for(int i = 0; i < s; i++){
        add += arr[i];
    }
    return add;
}

int main(){


    int size;

    cout << "Enter the number of elements in array : ";
    cin >> size;

    int arr[size];

    for(int i = 0;i < size; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int total = sum(arr, size);
    cout << "Sum of Array : " << total << endl;
    float avg = (float)total/(float)size;
    cout << "Average of Array : " << avg << endl;





}