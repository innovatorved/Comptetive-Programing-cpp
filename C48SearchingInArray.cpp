#include<iostream>

using namespace std;

int linearSearch(int arr1[] , int n , int key){
    /* Linear Searching in Array */
    for(int i = 0; i<n; i++){
        if(key == arr1[i]){
            return i;            
        }
    }
    return -1;
}

int main(){
    // Linear Searching in Array 
    // find element in Index And Print its position
    int n = 7;
    int arr1[7] = {1,8,7,6,55,2,4};

    int e;
    cout<<"Elements you want to Find : ";
    cin>>e;

    int l = linearSearch(arr1 , n , e);
    cout<<l;

    return 0;
}