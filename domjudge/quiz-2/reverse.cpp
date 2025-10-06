#include <iostream>
using namespace std;

int main () {
    int length;
    cin >> length; // length = 4 
    int arr[length]; // arr = 4
    int temp;

    for(int i = 0; i < length; i++){
        arr[i] = 0;
        cin >> arr[i]; //TAKING OUT THE TRASH
    }
    
    for(int j = length - 1; j >= length/2; j--){ // j = 3, j >= 2, j--
        temp = arr[j]; // temp = j[3]
        arr[j] = arr[length - 1 - j]; // j[3] = j [0], j[2] = j[1],
        arr[length - 1 - j] = temp; // 
    }


    for(int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }
}
