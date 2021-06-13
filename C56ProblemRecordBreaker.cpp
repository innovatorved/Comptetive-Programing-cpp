#include<bits/stdc++.h>

using namespace std;

int32_t main(){
    // Recorrd Breaker
    /* 
        1. Strictly Greater than all previous Day
        2. Strictly greater than following value -> greater than next value

        Constraints :
        20 secounds
        1GB limit
        test case 1: 1<=N<=1000
        test case 2: 1<=N<=2*10^5

        our solution is O(n) or O(log n) or O(n^1/2)
    */
    int n;
    cin>>n;
    int arr[n];
    // int arr[8] = {1,2,0,7,2,0,2,2};
    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    // if only one no. is in array
    if (n == 1){
        cout<<"1"<<endl;
        return 0;
    }

    int max_ele =INT_MIN; // assign int minimum to max
    int recordBreakingDay = 0;  // Count record Breaking Day

    for(int i = 0; i<n; i++){
        max_ele = max(max_ele , arr[i]);
        if ( i!= n-1 && max_ele == arr[i] && arr[i] > arr[i+1]){
            recordBreakingDay += 1;
            // cout<<max_ele<<endl;
        }
        if(i==n-1 && max_ele == arr[i]){
            recordBreakingDay += 1;
            // cout<<max_ele<<endl;
        }
    }
    cout<<recordBreakingDay<<endl;
    return 0;

}