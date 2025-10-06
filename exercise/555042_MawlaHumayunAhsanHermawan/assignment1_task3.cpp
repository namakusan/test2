#include <iostream>
using namespace std;

int main(){
    float total_spent;
    cout<<"Discount calculator."<<endl;
    cout<<" Total amount spent = "; cin>>total_spent;

    float total_due;
    if(total_spent>1000){
        total_due = total_spent * 85/100;
    } else if(total_spent>=501){
        total_due = total_spent * 90/100;
    } else if(total_spent>=100){
        total_due = total_spent * 95/100;
    } else {
        total_due = total_spent;
    }

    cout<<"Total due = "<<total_due;

    return 0;
}