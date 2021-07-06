#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    // Searching 2 Dimensionl Array
    int n , m;
    cin>>n>>m;
    int arr[n][m];

    // Input an Array
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int k;
    cin>>k; // element you want to find
    int flag = false;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (arr[i][j] == k){
                cout<<"Element find at index arr["<<i<<"]["<<j<<"]";
                flag = true;
                break;
            }

        }
    }
    if(flag==false)
        cout<<"Element Not Found"<<endl;

    return 0;
}