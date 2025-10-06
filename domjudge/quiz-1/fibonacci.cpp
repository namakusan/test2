#include <iostream>
using namespace std;

int main(){
    int length;
    cin>>length;
    int* arr = new int[length];

    arr[0]=0;
    arr[1]=1;

    if(length <= 1){
        cout << arr[length-1]<<" ";
    } else {
        cout<<arr[0]<<" "; cout<<arr[1]<<" ";
        for(int i=2; i<length; i++){
            arr[i] = arr[i-1] + arr[i-2];
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}