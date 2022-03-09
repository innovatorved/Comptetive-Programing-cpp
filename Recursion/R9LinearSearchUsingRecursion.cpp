#include<iostream>
using namespace std;

void printArray(int arr[] , int size){
    cout<<"Size-->"<<size<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool LinearSearch(int arr[] , int size , int ele){
    printArray(arr , size);
    if (size == 0){
        return 0;
    }
    if (arr[0] == ele){
        return 1;
    }
    return LinearSearch(arr+1 , size-1 , ele);
}


int main(){
    int arr[8] = {1,8,7,2,4,22,14,0};
    int size = 8;

    int ele = 4;
    int res = LinearSearch(arr , size , ele);

    if(res){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Element Not Found"<<endl;
    }
    
    return 0;
}