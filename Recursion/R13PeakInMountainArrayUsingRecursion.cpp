#include<iostream>
using namespace std;

int findPeakInMountainArray(int arr[] , int s , int e){
    if (s>e){
        return -1;
    }
    int mid = s + (e-s)/2;
    if(arr[mid] > arr[mid+1] && arr[mid]>arr[mid-1]){
        return mid;
    }
    if(arr[mid] < arr[mid+1]){
        return findPeakInMountainArray(arr , mid , e);
    }
    if(arr[mid] > arr[mid+1] && arr[mid]<arr[mid-1]){
        return findPeakInMountainArray(arr , s , mid);
    }
    return -1;
}

int main(){
    int arr[8] = {0,2,3,4,9,7,6,5};
    int size = 8;
    cout<<"peak-->"<<findPeakInMountainArray(arr , 0 ,7 )<<endl;
    return 0;
}