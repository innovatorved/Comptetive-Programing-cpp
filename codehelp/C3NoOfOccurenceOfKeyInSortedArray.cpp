#include<iostream>
using namespace std;

int FirstOccurence(int arr[] , int n , int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    int res = -1;
    while (start <= end){
        if (arr[mid]==key){
            res = mid;
            end = mid-1;
        }
        else if (arr[mid]>key){
            end = mid-1;
        }
        else if (arr[mid]<key){
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return res;
}

int LastOccurence(int arr[] , int n , int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    int res = -1;
    while (start <= end){
        if (arr[mid]==key){
            res = mid;
            start = mid + 1;
        }
        else if (arr[mid]>key){
            end = mid-1;
        }
        else if (arr[mid]<key){
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return res;
}



int main(){

    int n , k;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>k;
    
    cout<<LastOccurence(arr , n , k) - FirstOccurence(arr , n , k) + 1<<endl;
    return 0;
}