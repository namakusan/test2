#include <iostream>
using namespace std;

int main(){
    int length;
    cin>>length;

    for(int i = 1; i <= length; i++){
        for(int j = 1; j <= i; j++){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}