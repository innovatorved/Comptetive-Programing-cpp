#include <iostream>

using namespace std;

int main(){
    // Array
    int arr1[4] = {10,20,30,40};
    // cout<<arr1[3]<<endl;

    cout<<"Enter No. of element in Array : ";

    int n;
    cin>>n;
    int arr2[n];
    for(int i = 0; i < n; i++){
        cout<<"\nEnter Element at "<<i<<" Index : ";
        cin>>arr2[i];
    }
    cout<<"\nArray Elements is : ";
    for(int i = 0; i < n; i++){
        cout<<arr2[i]<<" ";
    }

    return 0;
}