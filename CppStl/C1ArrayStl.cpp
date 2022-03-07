#include<iostream>
#include<array>

using namespace std;

int main(){
    // Initialize an Array
    array<int , 4> a = {1,2,3,4};
    
    cout<<"Check Array Size : "<<a.size()<<endl;

    cout<<"Print Element of An Array : ";
    for (int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Check Array is Empty or Not : "<<a.empty()<<endl;
    cout<<"Print Element at Specific Index , data at index 2 is : "<<a.at(2)<<endl;

    cout<<"Element at Front : "<<a.front()<<endl;
    cout<<"Element at Back : "<<a.back()<<endl;

    return 0;
}