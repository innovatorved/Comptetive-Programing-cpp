#include<iostream>
using namespace std;

void PrintArray(int arr[] , int s , int e){
    for (int i=s; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int *arr , int s , int e){
    // check how many element greater than pivot element
    // then place pivot element at its correct position
    // then swap the attributes if greater

    int pivot = arr[s];
    int pivotIndex = s;

    for (int i=s+1; i<=e; i++){
        if(pivot > arr[i]){
            pivotIndex += 1;
        }
    }

    // set pivot ele to pivot index
    swap(arr[s] , arr[pivotIndex]);

    // pivot element is setteled on correct position

    // sort both side of pivot
    int i = s;
    int j = e;


    while(i<=j){
        if(arr[i] > pivot && arr[j] < pivot){
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
        else if(arr[i] < pivot && arr[j] > pivot){
            i++;
            j--;
        }
        else if(arr[i] < pivot && arr[j] < pivot){
            i++;
        }
        else if(arr[i] > pivot && arr[j] > pivot){
            j--;
        }
        else{
            break;
        }
    }

    // cout<<"Steps->   ";
    // PrintArray(arr , s , e);
    // cout<<endl;

    return pivotIndex;

}

void quickSort(int arr[] , int s , int e){
    if (s >= e){
        return ;
    }
    int p = partition(arr , s , e);

    quickSort(arr , s , p);
    quickSort(arr , p+1 , e);
}

int main(){
    int arr[8] = {2,5,1,3,9,7,6,0};
    int size = 8;

    cout<<"Before->   ";
    PrintArray(arr , 0 , size-1);
    cout<<endl;

    quickSort(arr , 0 , size-1);


    cout<<"After->   ";
    PrintArray(arr , 0 , size-1);
    cout<<endl;

    return 0;
}