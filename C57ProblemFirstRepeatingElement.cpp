#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    // First Repeating Element
    int n;
    cin>>n;
    int arr[n];
    int maxe = INT_MIN;   // max element in array
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        maxe = max(maxe , arr[i]);
    }
    // cout<<maxe<<endl;
    // Array for storing index in value
    const int N = maxe + 2; // constant never change
    int indx_arr[N]; 
    int repeat_lowerIndex = INT_MAX; // MAx Index

    // Store minimum element in index Array
    for(int i = 0; i<N; i++){
        indx_arr[i] = -1;  // we store index in indx_arr index start with 0 so we put -1
    }

    for(int i = 0; i<n; i++){
        if (indx_arr[arr[i]] != -1){
            repeat_lowerIndex = min(indx_arr[arr[i]] , repeat_lowerIndex); // Save index of repeated
        }
        else{
            indx_arr[arr[i]] = i; // store index on position element as a index
        }
    }
    cout<<arr[repeat_lowerIndex]<<endl;
    return 0;
}