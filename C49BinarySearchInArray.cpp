#include<iostream>

using namespace std;


int BinarySearch(int arr[] , int n , int key){
    /* Used in Sorted Array */
    int startPosition = 0;
    int endPosition = n;
    while(startPosition <= endPosition){
        int midPosition = (startPosition + endPosition)/2; // store mid index
        // cout<<midPosition<<endl;

        if(arr[midPosition] == key){
            return midPosition;
        }
        else if(arr[midPosition] < key){
            startPosition = midPosition + 1;
        }
        else if(arr[midPosition] > key){
            endPosition = midPosition - 1;
        }
        // cout<<startPosition<<endPosition<<endl;
    }
    return -1;
}

int main(){
    // Binary Searching in Array 
    // find element in Index And Print its position
    int n = 7;
    int arr1[7] = { 1 , 2 , 5 , 11 , 13 , 45 , 99}; // Sorted Array

    int e;
    cout<<"Elements you want to Find : ";
    cin>>e;

    int l = BinarySearch(arr1 , n , e);
    cout<<l;

    return 0;
}