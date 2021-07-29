#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    // Input
    int i , j;
    cin>>i>>j;

    int arr[i][j]; // Intialize

    for(int x=0; x<i; x++){
        for(int y=0; y<j; y++){
            cin>>arr[x][y];
        }
    }


    int r_start = 0;
    int r_end = i-1;

    int c_start = 0;
    int c_end = j-1;

    while(r_start <= r_end && c_start <= c_end){

        for(int a = c_start; a <= c_end; a++){
            cout<<arr[r_start][a]<<" ";
        }
        r_start++;

        for(int b = r_start; b<= r_end; b++){
            cout<<arr[b][c_end]<<" ";
        }
        c_end--;

        for(int c= c_end; c >= c_start; c--){
            cout<<arr[r_end][c]<<" ";
        }
        r_end--;

        for(int d = r_end; d >= r_start; d--){
            cout<<arr[d][c_start]<<" ";
        }
        c_start++;

    }

    return 0;
}