#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    // Smallest Positive Missing Number
    int n;
    cin>>n;

    int arr[n];
    int sum = 0;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        sum = max(sum , arr[i]);
    }

    // make a boolean array that store 1 in index if index number is present
    // boolean array of highest size of positive integer
    bool arr_index[sum];
    for(int i=0; i<sum+2; i++){
        arr_index[i] = false;
    }

    for(int i=0; i<n; i++){
        if(arr[i]>=0){
            arr_index[arr[i]] = true;
        }
    }

    // check for smallest integer
    for(int i=0; i<sum; i++){
        if(arr_index[i]==false){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}