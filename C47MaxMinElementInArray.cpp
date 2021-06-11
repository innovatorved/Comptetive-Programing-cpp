#include <iostream>
#include <climits>

using namespace std;

int main(){
    // Max Min Element in Array

    cout<<"Enter No. of element in Array : ";

    int n;
    cin>>n;
    int arr2[n];
    for(int i = 0; i < n; i++){
        cin>>arr2[i];
    }
    int max0 = INT_MIN;
    int min0 = INT_MAX;

    int max1 = INT_MIN;
    int min1 = INT_MAX;

    for (int i = 0; i<n; i++){
        if(arr2[i] > max0){
            max0 = arr2[i];
        }
        if(arr2[i] < min0){
            min0 = arr2[i];
        }
        // we also use maxmin function that returns greater and smaller values in comparishion of two elements
        max1=max(arr2[i] , max1);
        min1=min(arr2[i] , min1);
    }
    cout<<"Max Element is : "<<max0<<"&"<<max1<<endl;
    cout<<"Min Element is : "<<min0<<"&"<<min1<<endl;
}