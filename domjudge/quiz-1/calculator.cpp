#include <iostream>
using namespace std;

int main(){
    int a, b;
    float result;
    string operation;

    cin>>a;
    cin>>operation;
    cin>>b;

    if(operation == "+"){
        result = a + b;
    }

    if(operation == "-"){
        result = a - b;
    }

    if(operation == "/"){
        result = a / b;
    }

    if(operation == "*"){
        result = a * b;
    }

    cout<<result;
    return 0;
}