#include<iostream>
using namespace std;

int firstOccurence(int arr[] , int s , int e , int ele){
    if(s>e){
        return -1;
    }
    int mid = s + (e-s)/2;

    if(arr[mid] == ele){
        int flag = mid;
        int checkfirst = firstOccurence(arr , s , mid-1 , ele);
        if (checkfirst == -1){
            return flag;
        }
        else{
            return checkfirst;
        }
    }

    if(arr[mid]>ele){
        return firstOccurence(arr , s , mid-1 , ele);
    }
    if(arr[mid]<ele){
        return firstOccurence(arr , mid+1 , e , ele);
    }
    return -1;
}

int lastOccurence(int arr[] , int s , int e , int ele){
    if(s>e){
        return -1;
    }
    int mid = s + (e-s)/2;

    if(arr[mid] == ele){
        int flag = mid;
        int checklast = lastOccurence(arr , mid+1 , e , ele);
        if (checklast == -1){
            return flag;
        }
        else{
            return checklast;
        }
    }

    if(arr[mid]>ele){
        return lastOccurence(arr , s , mid-1 , ele);
    }
    if(arr[mid]<ele){
        return lastOccurence(arr , mid+1 , e , ele);
    }
    return -1;
}

int main(){
    int arr[8] = {2,3,3,3,4,7,8,8};
    int size = 8;

    cout<<"First Occurence at index --> "<<firstOccurence(arr , 0 , 7 , 8)<<endl;
    cout<<"Last Occurence at index  --> "<<lastOccurence(arr , 0 , 7 , 8)<<endl;
}