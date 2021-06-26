#include<bits/stdc++.h>
using namespace std;


int32_t main(){

    // Pair Sum Problem    
    // try Brute force Approach
    /* 
        Check if there exists two elements in an array such that their sum 
        is equal to given k
    */
    
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    bool flag = false; // set true when sum of pair is available

    for (int i=0; i<n-1; i++){
        int temp = arr[i];
        for (int j=i+1; j<n ;j++){
            if(k == temp + arr[j]){
                cout<<temp<<" "<<arr[j]<<endl;
                flag=true;
            }
        }
    }
    // printArray;
    if (flag==true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}