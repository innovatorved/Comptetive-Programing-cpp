#include <iostream>

using namespace std;

void genrateAllSubset(char arr[] , int n){
    // total subset of a set s consist of total no. of element n is 2^n-1
    int totalSubset = (1<<n)-1; // find 2^n-1 by bit manipulation

    cout<<"No. of otal Subset is : "<<totalSubset<<endl;
    
    for (int i=0; i<= totalSubset; i++){
        for (int j=0; j<n; j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}



int main(){
    // Write a program to generate all possible subsets of a set.
    
    char arr[4] = {'a' , 'b' , 'c' , 'd'};
    genrateAllSubset(arr , 4);
    return 0;
}