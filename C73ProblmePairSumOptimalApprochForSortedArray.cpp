#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    // Pair Sum Problem Optimal Approch
    // Use in Sorted Array
    int n;  // num
    cin>>n;

    int arr[n]; // Array
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k; // sum
    cin>>k;

    int low = 0;
    int high = n-1;
    int flag = false;

    while(low != high && low<high){
        if(arr[low] + arr[high] > k){
            high--;
        }
        else if(arr[low] + arr[high] < k){
            low++;
        }
        else{
            cout<<arr[low]<<" "<<arr[high]<<endl;
            flag = true;
            break;
        }
    }

    if (flag == true){
        cout<<"True";
    }

    return 0;
}