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

int findTotalOccurence(int arr[] , int size , int ele){
    int s = 0;
    int e = size-1;
    int firstOcc = firstOccurence(arr , s , e , ele);
    int lastOcc = lastOccurence(arr , s , e , ele);
    if (firstOcc == -1 || lastOcc == -1){
        return -1;
    }
    int totalOcc = lastOcc-firstOcc+1;
    return totalOcc;
}

int main(){
    int arr[8] = {2,3,3,3,4,7,8,8};
    int size = 8;
    int ele = 3;

    cout<<"Total Occurence ---> "<<findTotalOccurence(arr , size , ele)<<endl;

}