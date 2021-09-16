#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n1=3 , n2=4 , n3=3;
    int arr1[3][4] = {{2,4,1,2},
                    {8,4,3,6},
                    {1,7,9,5}};

    int arr2[4][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9},
                     {4,5,6}};

    int arrOut[n1][n3]; //Output matrix
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            arrOut[i][j]=0;
        }
    }

    for(int row1=0; row1<n1; row1++){
        for(int col1=0; col1<n3; col1++){
            for(int k=0; k<n2; k++){
                arrOut[row1][col1] += arr1[row1][k] * arr2[k][col1];
            }
        }
    }

    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            cout<<arrOut[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}