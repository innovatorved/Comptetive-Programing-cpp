#include<iostream>

using namespace std;

void PrintArray(int arr[] , int n){
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void BubbleSort(int arr[] , int n){
    if (n == 1 || n == 0){
        return;
    }
    for(int i=0; i<n-1; i++){
        if (arr[i] > arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }
    BubbleSort(arr , n-1);
}

int main(){
    int arr[8] = {7,8,1,2,4,77,5,2};
    int n = 8;

    cout<<"Before->  ";
    PrintArray(arr , n);
    cout<<endl;

    BubbleSort(arr , n);

    cout<<"After->   ";
    PrintArray(arr , n);
    cout<<endl;
    
    
    return 0;
}