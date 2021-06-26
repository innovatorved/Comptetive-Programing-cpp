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

    int cumArray[n+1];
    // Start with zero
    cumArray[0] = 0;
    for (int i = 1; i<=n; i++){
        cumArray[i] = cumArray[i-1] + arr[i-1];
    }

    int maxSum = INT_MIN;

    for(int i=1; i<=n; i++){
        int localSum = 0;
        for(int j=0; j<i; j++){
            localSum = cumArray[i]-cumArray[j];
            maxSum = max(maxSum , localSum);
        }
    }
    
    cout<<maxSum<<endl;
    return 0;
}