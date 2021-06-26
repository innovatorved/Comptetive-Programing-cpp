#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    //.................................................
    int max_ele = INT_MIN;
    int swap = 0;
    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if (a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swap++;
            }
        }
    }

    cout<<"Array is sorted in "<<swap<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;
    return 0;
}