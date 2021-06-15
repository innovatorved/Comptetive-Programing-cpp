#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    // Input an Array
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Print All Possible SubArray
    int start = 0 , end = 0;
    while (end<n){
        for(int i=start; i<=end; i++){
            cout<<arr[i]<<" ";
        }
        end += 1;
        if (end>=n){
            start += 1;
            end = start;
        }
        cout<<endl;
    }

    return 0;
}