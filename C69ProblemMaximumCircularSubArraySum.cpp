#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    // Maximum Circular SubArray Sum with Brute Force Approch
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // lets make kedans Algorithm
    int maxSum = INT_MIN;
    int cursum = 0;
    int start = 0;
    bool flag = false;

    for (int i=0; i<n; i++){
        if(start == i && flag == true){
            break;
        }


        cursum += arr[i];
        if (cursum<0){
            cursum = 0;
            start = i;
        }
        maxSum = max(maxSum , cursum);
        // cout<<"maxSum"<<maxSum<<" ";
        // cout<<"cursum"<<cursum<<" ";
        // cout<<"start"<<start<<" ";
        // cout<<i<<endl;
        flag = true;

        if(i==n-1){
            i=-1; // because in next iteration it is i++
        }
    }

    cout<<endl<<maxSum<<endl;
    return 0;
}