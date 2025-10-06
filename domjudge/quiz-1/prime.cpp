#include <iostream>
using namespace std;

int main(){
    int number;
    cin>>number;

    int modulo;
    bool prime = true;

    for(int i=2; i<number; i++){
        modulo = number%i;
        if(modulo==0){
            cout<<"Not prime";
            prime = false;
            break;
        }
    }

    if(prime == true){
        cout<<"Prime";
    }
    
    return 0;
}