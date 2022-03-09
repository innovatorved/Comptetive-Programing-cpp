#include<iostream>

using namespace std;

bool isSorted(int arr[] , int size){
    if (size == 0 && size == 1){
        return 1;
    }
    if (arr[0] > arr[1]){
        return 0;
    }
    return isSorted(arr+1 , size-1);

}


int main(){
    int arr[5] = {2,4,7,9,13};
    int size = 5;
    
    bool ans = isSorted(arr , size);
    if(ans){
        cout<<"Array is Sorted"<<endl;
    }
    else{
        cout<<"Array is Unsorted"<<endl;
    }
    
    return 0;
}