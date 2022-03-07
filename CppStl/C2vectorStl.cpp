#include<iostream>
#include<vector>

using namespace std;
int main(){

    // Initialize vector
    vector<int> v;
    cout<<"Capacity-->"<<v.capacity()<<endl;

    // Add element at back
    v.push_back(1);
    cout<<"Capacity-->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity-->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity-->"<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"Capacity-->"<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Capacity-->"<<v.capacity()<<endl;

    cout<<"<--Capacity Increases Dynamically-->"<<endl;

    cout<<"Size-->"<<v.size()<<endl;

    cout<<"Element at 2nd Index : "<<v.at(2)<<endl;

    cout<<"Front-->"<<v.front()<<endl;
    cout<<"Back-->"<<v.back()<<endl;

    // pop last elemnt 
    cout<<"Pop last element and Check size"<<endl;
    v.pop_back();
    cout<<"Size-->"<<v.size()<<endl;

    // clear the vector: only data were clear capacity same
    cout<<"Size : "<<v.size()<<" & capacity: "<<v.capacity()<<" before clear"<<endl;
    v.clear();
    cout<<"Size : "<<v.size()<<" & capacity: "<<v.capacity()<<" After clear"<<endl;

    return 0;
}