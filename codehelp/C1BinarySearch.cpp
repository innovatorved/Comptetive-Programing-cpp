#include<iostream>
using namespace std;

int BinarySearch(int arr[] , int size , int key){
    int start = 0;
    int end = size - 1;

    // int mid = (start + end) / 2;
    int mid = start + (end - start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key){
            start = mid + 1;
        }
        else if (arr[mid] > key){
            end = mid-1;
        }
        // mid = (start + end)/2;
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    /*
    [-find Mid]
    */

    int n;
    cin>>n;

    int arr1[n];

    for (int i=0; i<n; i++){
        cin>>arr1[i];
    }

    int key;
    cin>>key;

    cout<<BinarySearch(arr1 , n , key);

    return 0;
}