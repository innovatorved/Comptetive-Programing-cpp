#include<bits/stdc++.h>
using namespace std;

int kadans(int arr[] , int n){
    /*kadans Algoritm implementation*/
    int maxSum = INT_MIN;
    int curSum = 0;

    for(int i=0; i<n; i++){
        curSum += arr[i];
        if (curSum < 0){
            curSum = 0;
        }
        maxSum = max(maxSum , curSum);
    }
    return maxSum;
}

int32_t main(){
    // Maximum Circular SubArray Sum with Optimize Approch
    
    int n;
    cin>>n;
    int arr[n];
    int total=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        total += arr[i];
    }

    // cout<<kadans(arr , n);
    int unwrap = kadans(arr , n);
    int wrap;

    // Change the symbol of array element
    for(int x=0; x<n; x++){
        arr[x] = -arr[x];
    }

    int val = kadans(arr , n);
    wrap = total + val;
    // cout<<val<<" "<<total<<" ";
    cout<<max(wrap , unwrap);

    return 0;
}