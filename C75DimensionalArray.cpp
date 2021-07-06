#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    // Start with 2 Dimensionl Array
    int n , m;
    cin>>n>>m;
    int arr[n][m];

    // Input an Array
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    // Output
    cout<<"2D Array is : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}