#include<bits/stdc++.h>
using namespace std;

void PrintVector(vector<int> arr){
    cout<<" { ";
    for (int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<" } "<<endl;
}

void PowerSet(vector<int> nums ,vector<int>output , int index){
    if (index >= nums.size()){
        PrintVector(output);
        return;
    }

    // exclude
    PowerSet(nums , output  , index+1);

    // include index element
    int ele = nums[index];
    output.push_back(ele);
    PowerSet(nums , output  , index+1);
}

int main(){
    // find powerset : set of all Subset
    vector<int> nums = {1 , 2 , 3};
    vector<int>output;
    int index = 0;
    
    PowerSet(nums , output , index);

    return 0;


}