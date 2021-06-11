#include <iostream>

using namespace std;

int main(){
    // Selection Sort 
    cout<<"Enter the Length of Array : ";
    int n;
    cin>>n;
    int arr1[n];

    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }

    for(int x = 0; x<n-1; x++){
        for(int y = x; y<n; y++){
            if(arr1[x] > arr1[y]){
                int temp = arr1[y];
                arr1[y] = arr1[x];
                arr1[x] = temp;
            }
        }
    }
    cout<<"\nSorted Array is : ";
    for(int i = 0; i<n; i++){
        cout<<arr1[i]<<" ";
    }
    return 0;
}