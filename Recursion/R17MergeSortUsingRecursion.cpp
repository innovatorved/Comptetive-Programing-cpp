#include<iostream>
using namespace std;

void PrintArray(int arr[] , int s , int e){
    for (int i=s; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void merge(int *arr , int start , int end){
    cout<<"Steps Unsorted->   ";
    PrintArray(arr , start , end);
    cout<<endl;

    int mid = start + (end - start)/2;

    int l1 = mid - start + 1;
    int l2 = end - mid;

    int *first = new int[l1];
    int *second = new int[l2];
    
    int mainArrayIndex = start;
    for (int i=0; i<l1; i++){
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<l2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = start;
    int index1 = 0;
    int index2 = 0;

    while(index1 < l1 && index2 < l2){
        if (first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < l1){
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < l2){
        arr[mainArrayIndex++] = second[index2++];
    }

    cout<<"StepsSorted->   ";
    PrintArray(arr , start , end);
    cout<<endl;
}

void MergeSort(int *arr , int start , int end){

    if (start >= end){
        return;
    }
    int mid = start + (end - start)/2;
    
    MergeSort(arr , start , mid);
    MergeSort(arr , mid+1 , end);

    merge(arr , start , end);

}

int main(){
    int arr[8] = {7,8,91,2,1,4,5,0};
    int n = 8;

    cout<<"Before->   ";
    PrintArray(arr , 0 , n-1);
    cout<<endl;

    MergeSort(arr , 0 , n-1);

    cout<<"After->   ";
    PrintArray(arr , 0 , n-1);
    cout<<endl;

    return 0;
}