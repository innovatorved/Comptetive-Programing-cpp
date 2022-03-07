// Doubly added queue

#include<iostream>
#include<deque>

using namespace std;

int main(){
    // Dynamic in Nature
    deque<int> d;

    // push back
    d.push_back(1);
    d.push_back(3);

    // push front
    d.push_front(2);
    d.push_front(4);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    // pop front
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Print 1st indedx element : "<<d.at(1)<<endl;

    cout<<"Front-->"<<d.front()<<endl;
    cout<<"Back-->"<<d.back()<<endl;

    cout<<"Check Empty-->"<<d.empty()<<endl;

    cout<<"Delete from Begin to Begin+1"<<endl;
    d.erase(d.begin() , d.begin()+1);
    cout<<"Size-->"<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
}