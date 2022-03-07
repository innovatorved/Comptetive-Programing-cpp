#include<iostream>
#include<list>

using namespace std;

int main(){
    // Not randomial acces
    list<int> l;

    // copy: list<int> l2(l)
    // intialize by element (size , element)
    // list<int> l3(5,100);

    l.push_back(1);
    l.push_front(2);

    for(int ele:l){
        cout<<ele<<" ";
    }
    cout<<endl;

    cout<<"Size-->"<<l.size()<<endl;

    // Erase
    l.erase(l.begin());
    for(int ele:l){
        cout<<ele<<" ";
    }
    cout<<endl;

    // intialize by element (size , element)
    // list<int> l3(5,100);
    list<int> l3(5,100);
    for(int ele:l3){
        cout<<ele<<" ";
    }
    cout<<endl;


    return 0;
}