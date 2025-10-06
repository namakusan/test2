#include <iostream>
using namespace std;

int main(){
    int arraySize;
    cin>>arraySize;

    int* array = new int[arraySize];

    for(int i=0; i < arraySize; i++){
        cin>>array[i];
    }

    int total = 0;

    for(int x=0; x < arraySize; x++){
        total += array[x];
    }

    cout<<total;
}