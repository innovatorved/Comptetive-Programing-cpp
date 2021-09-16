#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    // Matrix Searching in Sorted Matrix 
    int n , m;
    cin>>n>>m;
    bool flag = false;

    int mat1[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat1[i][j];
        }
    }
    // Search for 
    int num;
    cin>>num;
    // select {r , c} point
    int r=0 , c=m-1;
    while (c >= 0 && r<n){
        if (mat1[r][c] == num){
            cout<<"Element find";
            flag = true;
            break;
        }
        else if (mat1[r][c] > num){
            c = c-1;
        }
        else if (mat1[r][c] < num){
            r = r+1;
        }
    }
    if (flag == false){
        cout<<"Element Not Found";
    }
    return 0;
}