#include<bits/stdc++.h>

using namespace std;

int32_t main(){
    // Print SubArray Which Has Maximum Sum
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    // total subarray in size of N array id : N * (N + 1)/2.
    int t = (n *(n + 1))/2;
    // cout<<t;
    int start[t] , end[t] , sum[t]; // 3arrays

    int sum_ele = 0;
    int start_ele = 0;
    int end_ele = 0;

    // Max variable staore maximum sum value
    int max_value = INT_MIN;

    int index = -1;
    while(end_ele < n){
        index += 1;
        for(int i=start_ele; i<=end_ele; i++){
            sum_ele += arr[i];
        }

        // Save in to an Array
        start[index] = start_ele;
        end[index] = end_ele;
        sum[index] = sum_ele;

        // Assign max value
        max_value = max(max_value , sum_ele);

        end_ele += 1; 
        // cout<<sum_ele<<endl; // sum
        if(end_ele >= n){
            start_ele += 1;
            end_ele = start_ele;
        }
        sum_ele = 0;
    }
    /*
    for(int i = 0; i<t; i++){
        cout<<start[i]<<" ";
        cout<<end[i]<<" ";
        cout<<sum[i]<<endl;
    }
    cout<<max_value;
    */

    for(int i=0; i<t; i++){
        if(max_value == sum[i]){
            for(int j=start[i]; j<=end[i]; j++){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}