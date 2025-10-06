#include <iostream>
using namespace std;

int main(){
    int length;
    cin >> length;
    length = length-1;
    int arr[length];
    int evenAmount = 0;

    for(int i=0; i<=length; i++){
        cin >> arr[i];
        if(arr[i]%2 == 0){
            evenAmount = evenAmount + 1;
        }
    }

    cout << evenAmount;
}