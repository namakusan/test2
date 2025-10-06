#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout<<"x="; cin>>x;
    cout<<"y="; cin>>y;

    if(x>y){
        cout<<"x>y";
    } else if(x<y){
        cout<<"x<y";
    } else if (x==y){
        cout<<"x=y";
    } else {return 0;}
}

#include <iostream>
using namespace std;

int main(){
    float number1, number2, number3;
    cout<<"Which is the largest number?"<<endl;
    cout<<" Insert number 1 = "; cin>>number1;
    cout<<" Insert number 2 = "; cin>>number2;
    cout<<" Insert number 3 = "; cin>>number3;

    float largestNumber, smallestNumber;

    if(number1 > number2 && number3){
        largestNumber = number1;
    } else if (number2 > number1 && number3){
        largestNumber = number2;
    } else {
        largestNumber = number3;
    }

    if(number1 < number2 && number3){
        smallestNumber = number1;
    } else if (number2 < number1 && number3) {
        smallestNumber = number2;
    } else {
        smallestNumber = number3;
    }

    if(number1 == number2 && number3){
        cout<<"All numbers are equal. With a maximum and minimum of "<<number1;
    } else {
        cout<<"Largest number is "<<largestNumber<<endl;
        cout<<"Smallest number is  "<<smallestNumber<<endl;
    }
    
    return 0;
}