#include <iostream>
using namespace std;

int main(){
    int length;
    cin>>length;

    int prev2 = 0, prev1 = 1, curr;
    
    for(int i=0; i<length; i++){
        curr = prev1 + prev2;
        cout<<prev2<<" ";
        prev2 = prev1;
        prev1 = curr;
    }

    return 0;
}