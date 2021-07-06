#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n = 8;
    int arr[8] = {2,4,5,8,9,17,21,22};    // Sorted Array

    int k = 6; // Pair Sum you want to find

    int tempSum = 0;
    int low = 0; int high = n-1;

    bool flag = false;
    while (tempSum!=k && low<high){
        if (arr[low] + arr[high] > k){
            high--;
        }
        else if (arr[low] + arr[high] < k){
            low ++;
        }
        else{
            flag = true;
            break;
        }
    }
    cout<<flag<<endl;
}