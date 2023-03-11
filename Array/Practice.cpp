#include <iostream>

using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }
    cout << "Printing is Done" << endl;
}


int main(){

    // int num[5] = {1,4,2,5,7};
    // // string str[5] = {"a","b"};

    // cout << num[1/3] << endl;
    // printArray(num, 5);

    // int arr[6]={11,12,13,14,15,16};
    // // Way 1
    // for(int i=0;i<6;i++)
    //     cout << arr[i] << " ";
    
    // cout << endl;
    // // Way 2

    // cout << "By Other Method:" << endl;
    // for(int i=0;i<6;i++)   
    //     cout << arr[1] << " ";
    
    // cout<<endl;





    int  arr[2][5] = {{1,2,3,5,7},{4,5,6,1,2}};


    for (int i = 0; i < 2 ; i++){
        for (int j = 0; j < 5; j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
  

  
    return 0;
}