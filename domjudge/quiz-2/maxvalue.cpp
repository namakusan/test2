#include <iostream>
using namespace std;

int main () {
    int length;
    cin >> length;
    int arr[length];
    int max;

    for(int i = 0; i < length; i++){
        cin >> arr[i];
        if (arr[i] <= arr[i-1]){
            max = arr[i-1];
        }
    }

    cout << max;
}