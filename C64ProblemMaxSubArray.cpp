#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    // Find Maximum Sub Array in Array
    int n;
    cin>>n;

    int arr1[n];
    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }

    // ..............................0.
    int sum_subarray = 0;
    int max_subarray = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j = i; j<n; j++){
            for(int k = i; k<=j; k++){
                // cout<<arr1[k]<<" ";
                sum_subarray = sum_subarray + arr1[k];

            }
            // cout<<sum_subarray;
            max_subarray = max(max_subarray , sum_subarray);
            sum_subarray = 0;
            // cout<<endl;
        }
    }
    cout<<"Max Subarray Element : "<<max_subarray;
    return 0;
}