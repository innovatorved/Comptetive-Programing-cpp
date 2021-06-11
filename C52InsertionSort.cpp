#include <iostream>

using namespace std;

int main(){
    // Insertion Sort
    cout<<"Enter the Length of Array : ";
    int n;
    cin>>n;
    int arr1[n];

    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }

    for(int i = 1; i<n; i++){
        int j = i-1;
        int current = arr1[i];

        while(j>=0 && arr1[j] > current){
            arr1[j+1] = arr1[j];
            j--;
        }
        arr1[j+1] = current;
    }
    

    cout<<"\nSorted Array is : ";
    for(int i = 0; i<n; i++){
        cout<<arr1[i]<<" ";
    }

    return 0;
}