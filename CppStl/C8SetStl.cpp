#include<iostream>
#include<set>

using namespace std;
int main(){

    set<int> s;

    s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(2);
    s.insert(2);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);

    for (auto i:s){
        // sorted set prind i order
        cout<<i<<" ";
    }
    cout<<endl;

    // erase
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for (auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Check 5 is Present -> "<<s.count(5)<<endl;

    cout<<"Check -5 is Present -> "<<s.count(-5)<<endl;

    // return iterator of 5
    set<int>::iterator it5 = s.find(5);
    for(auto it=it5; it!=s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    return 0;
}