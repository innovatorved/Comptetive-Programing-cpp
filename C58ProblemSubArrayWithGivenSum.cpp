#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    // find start and end of Subarray with given sum
    // two pointers approch
    int n ,s;
    cin>>n>>s;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int start = 0;
    int end = 0;
    int sum =  0;
    
    int i =0;
    // cout<<"yes";
    while(sum != s && end<=n){
        // cout<<sum<<endl;
        if (sum > s){
            start += 1;
            end = start;
            sum = 0;
        }
        sum = sum+arr[end];
        end += 1;
        // cout<<end<<endl;
        if (end>n){
            cout<<"Subarray not available";
            return 0;
        }
    }
    cout<<"Start : "<<start+1<<" & End : "<<end<<endl;
    return 0;
}