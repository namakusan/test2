#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int a, b, GCD, LCM;
    cin >> a; cin >> b;

    for(int i = 1; i <= a; i++){
        if(a%i == 0 && b%i== 0){

            GCD = i;
        }
    }

    cout << GCD;
}
