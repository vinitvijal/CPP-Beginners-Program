#include <iostream>
using namespace std;


int linearSearch(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){

    // Size of Array
    int n;
    cout << "Number of element in array : ";
    cin >> n;

    // Declaring a string
    int arr[n];
    cout << "Enter Your Elements : " << endl;

    // input the array

    for (int j = 0; j < n; j++){
        cin >> arr[j];
    }

    // Printing the Array

    for (int j = 0; j < n; j++){
        cout << arr[j] << ' ';
    }
    cout << endl;

    // Input Key to be searched

    int k;
    cout << "Enter the element to be searched : ";
    cin >> k;

    // Linear Search

    int result = linearSearch(arr, n, k);
    cout << "Index : "<< result << endl;

}
