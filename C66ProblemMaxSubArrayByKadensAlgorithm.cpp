#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    // kedans Algorithm
    int n;
    cin>>n;

    int arr1[n];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    int cur_sum = 0;
    int max_sum = 0;
    int neg = INT_MIN;
    bool flag = 0;
    bool flag_check = 0;


    for(int i=0; i<n; i++){
        cur_sum += arr1[i];

        if (cur_sum > max_sum){
            max_sum = cur_sum;
            // cout<<max_sum<<" ";
        }
        if (cur_sum < 0){
            neg = max(neg , cur_sum);
            cur_sum = 0;
            // cout<<neg<<" ";
        }
        if (arr1[i] == 0){
            flag = 1;
        }
        
        flag_check = 0;
    }
    if (max_sum==0){
        max_sum = neg;
        if(flag == true){
            max_sum = 0;
        }
    }
    
    cout<<max_sum<<endl;
    return 0;
}