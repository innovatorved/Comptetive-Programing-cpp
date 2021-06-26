#include<bits/stdc++.h>

using namespace std;

int32_t main(){
    // Max Subarray sum by Cummulativee Sum
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxSum = INT_MIN;
    int curSum = 0;
    int neg = INT_MIN;
    bool flag = false;

    for(int i=0; i<n; i++){
        curSum += arr[i];
        if (curSum < 0){
            curSum = 0;
        }
        maxSum = max(maxSum , curSum);

        // For negative Array
        neg = max(neg , arr[i]);
        // cout<<neg<<" ";
        if (arr[i] == 0){
            flag = true;
        }
    }
    
    if (flag != true && maxSum == 0){
        maxSum = neg;
    }

    cout<<maxSum<<endl;
    return 0;
}