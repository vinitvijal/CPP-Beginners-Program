#include <iostream>

using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,6};
    // Reverse The Array

    int end = 5, start = 0;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for(int i = 0; i < 6; i++){
        cout << arr[i] << ' ';
    }

    
}