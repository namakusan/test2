#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Is this integer even or odd?"<<endl;
    cout<<" Insert integer = "; cin>>number;

    if(number%2 == 0){
        cout<<"This number is even.";
    } else {
        cout<<"This number is odd";
    }

    return 0;
}