#include <iostream>

using namespace std;

int main(){

    int arr[6] = {1,2,3,4,5,6};

    int num = 5, i = 0;
    
    while(i<num){
        // int temp = arr[i];
        // arr[i] = arr[i+1];
        // arr[i+1] = temp;
        swap( arr[i], arr[i+1]);
        i += 2;
    }

     for(int i = 0; i < 6; i++){
        cout << arr[i] << ' ';
    }



    return 0;
}