#include <iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    int sum, digit;
    int i=1;

    sum = number % 10;
    
    while(number != 0){
        number = number / 10;
        digit = number % 10;
        sum += digit;
        i = i + 1;
    }

    cout<<sum;

    return 0;
}