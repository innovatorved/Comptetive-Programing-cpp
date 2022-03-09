#include<iostream>
using namespace std;

void printArray(int arr[] , int s , int e){
    cout<<"Size-->"<<e-s+1<<endl;
    for(int i=s; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool BinarySearch(int arr[] , int s , int e , int ele){

    if (s>e){
        return 0;
    }
    int mid = s + (e-s)/2;

    printArray(arr , s , e);

    if(arr[mid] == ele){
        return 1;
    }
    if(arr[mid] > ele){
        return BinarySearch(arr , s , mid-1 , ele);
    }
    if (arr[mid] < ele){
        return BinarySearch(arr , mid+1 , e , ele);
    }
    return 0;
}

int main(){
    
    int arr[7] = {2,5,6,7,9,15,21};
    int ele = 6;

    int res = BinarySearch(arr , 0 , 6 , ele);
    if(res){
        cout<<"Element found "<<ele<<endl;
    }
    else{
        cout<<"Element Not Found"<<endl;
    }
    
    return 0;
}