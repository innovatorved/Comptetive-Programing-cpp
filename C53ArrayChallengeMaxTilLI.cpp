#include <iostream>
#include<climits>

using namespace std;
int main(){
    // Max Till I
    int n;
    cout<<"Number of Elements in Array : ";
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int max1 = INT_MIN;
    for(int i = 0; i<n; i++){
        max1 = max(max1 , arr[i]);
        cout<<"Maximum Element in "<<i<<" index : "<<max1<<endl;
    }

    return 0;
}