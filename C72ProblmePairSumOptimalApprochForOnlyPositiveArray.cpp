#include<bits/stdc++.h>
using namespace std;

int32_t main(){

    // Pair Sum Problem    
    // try Optimal Approach
    /* 
        Check if there exists two elements in an array such that their sum 
        is equal to given k
    */

    int n;
    cin>>n;

    int arr[n];
    int maxele = INT_MIN;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        maxele = max(maxele , arr[i]);
    }
    // cout<<maxele<<endl;

    // make a bool array
    maxele = maxele+1;
    bool arr2[maxele];
    //fill with 0
    for (int i=0; i<maxele; i++){
        arr2[i] = false;
    }

    int k;
    cin>>k; // Sumpair element

    for(int i=0; i<n; i++){
        arr2[arr[i]] = true;

        int sub = k - arr[i];
        // cout<<sub<<endl;
        if (arr2[sub] == true && sub<maxele){
            cout<<sub<<" "<<arr[i]<<endl;
            cout<<"true"<<endl;
        }
    }

    return 0;
}