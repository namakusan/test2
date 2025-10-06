#include <iostream>
using namespace std;

int main(){
    int n, m, p;
    cin >> n;
    m = n;
    p = n;
    int A[n][m], B[m][p], C[n][p];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> A[i][j];
            //for debugging: cout << "A" << i << " " << j << endl;
            }
        }
    
    for(int j=0; j<m; j++){
        for(int k=0; k<p; k++){
            cin >> B[j][k];
            // for debugging: cout << "B" << j << " " << k << endl;
        }
    }

    // throwing out the trash (I HATE C++)
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            C[i][j] = 0;
        }
    }

    for(int i = 0; i < n; i++){ 
        for(int j = 0; j < p; j++){ 
            for(int k = 0; k < m; k++){ 
                C[i][j]  += A[i][k] * B[k][j];
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

}


