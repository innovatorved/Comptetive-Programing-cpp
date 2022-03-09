#include<iostream>

using namespace std;

int ArraySum(int arr[] , int size){
    if (size == 0 ){
        return 0;
    }
    if (size == 1){
        return arr[0];
    }
    return arr[0] + ArraySum(arr+1 , size-1);
}

int main(){

    int arr[5] = {2,4,6,8,9};
    int size = 5;

    cout<<ArraySum(arr , size)<<endl;
    
    return 0;
}