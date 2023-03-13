#include <iostream>
using namespace std;


int binarySearch(int arr[], int n, int key){
    int low = 0;
    int high = n - 1;
    int mid = (low + high)/2;
   
   while (low <= high)
   {
        if (arr[mid] == key){
            return mid;
        }
        if (arr[mid] < key){
            low = mid + 1;
        }else{
            high = mid - 1;
        }

        mid = (low + high)/2;

   }

   return -1;

   

    
}

int main(){
    // int n;
    // cout << "Enter the size of array : ";
    // cin >> n;

    // int arr[n];
    // for(int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    
    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    int arr[8] = {10,20,30,40,50,60,70,80};

    int k;
    cout << "Enter the value to be searched : ";
    cin >> k;

    int res = binarySearch(arr, 8, k);
    cout << "Index : " << res << endl;
}