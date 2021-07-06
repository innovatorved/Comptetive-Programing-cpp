#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    // Spiral order Transversal
    int n , m;
    cin>>n>>m;
    int arr[n][m];

    // Input an Array
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int row_start = 0;
    int row_end = n-1;

    int col_start = 0;
    int col_end = m-1;

    while(row_start <= row_end && col_start <= col_end){

        // for Row Start
        for (int c=col_start; c<=col_end; c++){
            // print start col
            cout<<arr[row_start][c]<<" ";
        }
        row_start++;

        // for last col
        for(int r=row_start; r<=row_end; r++){
            cout<<arr[r][col_end]<<" ";
        }
        col_end--;

        //for last row
        for(int rlast=col_end; rlast>=col_start; rlast--){
            cout<<arr[row_end][rlast]<<" ";
        }
        row_end--;

        //for col start
        for(int clast=row_end; clast>=row_start; clast--){
            cout<<arr[clast][col_start]<<" ";
        }
        col_start++;
    }
    
    return 0;
}