#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Check 5 is present or Not --> "<<binary_search(v.begin() , v.end() , 5)<<endl;

    cout<<"Check 6 is present or Not --> "<<binary_search(v.begin() , v.end() , 6)<<endl;

    cout<<"Lower Bound--> "<<lower_bound(v.begin() , v.end() , 6) - v.begin()<<endl;
    cout<<"Upper Bound--> "<<upper_bound(v.begin() , v.end() , 4) - v.begin()<<endl;

    // find max , main and swap
    int a = 3;
    int b = 7;
    cout<<"Max-->"<<max(a,b)<<endl;
    cout<<"Min-->"<<min(a,b)<<endl;
    
    cout<<"Swap A and B Before and After "<<endl;
    cout<<"Befor Swap A is : "<<a<<" and B is : "<<b<<endl;
    swap(a,b);
    cout<<"After Swap A is : "<<a<<" and B is : "<<b<<endl;

    // reverse a string
    string name = "ved Prakash Gupta";
    reverse(name.begin() , name.end());
    cout<<"String-->"<<name<<endl;

    // rotate an vector : Dynamic Array
    cout<<"Before Rotation"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    rotate(v.begin() , v.begin()+1, v.end());
    cout<<"After Rotation"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    // Sort
    sort(v.begin() , v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;



    return 0;
}