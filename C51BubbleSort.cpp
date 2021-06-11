#include <iostream>

using namespace std;

int main(){
    // Bubble Sort
    cout<<"Enter the Length of Array : ";
    int n;
    cin>>n;
    int arr1[n];

    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }

    for(int x = 0; x<n; x++){
        for(int i = 0; i<n-x; i++){
            if(arr1[i] > arr1[i+1]){
                int temp = arr1[i+1];
                arr1[i+1] = arr1[i];
                arr1[i] = temp;
            }
        }
    }

    cout<<"\nSorted Array is : ";
    for(int i = 0; i<n; i++){
        cout<<arr1[i]<<" ";
    }
    
    return 0;
}