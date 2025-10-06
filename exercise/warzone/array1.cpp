#include <iostream>
using namespace std;

int main ( ) {
    int n = 4;
    int A[2][3] = {2,4,3,3,2,5};
    int B[3][5] = {3,2,5,7,4,2,4,6,3,2,3,3,2,5,4};
    int C[2][5];

    for (int i = 0; i <= 1; i++){
        for(int j = 0; j <= 2; j++){
           cout<<A[i][j]<<endl; 
        }
    }

    return 0;
}