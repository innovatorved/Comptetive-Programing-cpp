#include<bits/stdc++.h>

using namespace std;

int32_t main(){
    // find longest Arithmetic Subarray

    int n = 7;
    int arr[8] = {10,7,4,6,8,10,11};

    int max_diff = 0;

    int diff;
    int count = 2;      // Start with 2 if no difference are equal then subarray size is also true
    for(int i=1; i<n-1; i++){
        diff = arr[i] - arr[i-1]; // Store previos difference

        int curr_diff = arr[i+1] - arr[i]; // current difference

        if (diff == curr_diff){
            count += 1;
            //cout<<diff<<count<<endl;
        }
        else{
            count = 2;
        }

        max_diff = max(max_diff , count);  // max_diff store max difference

    }
    cout<<max_diff<<endl;

    return 0;
}