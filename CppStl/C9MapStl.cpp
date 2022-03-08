#include<iostream>
#include<map>

// O(n) time Complexity

using namespace std;

int main(){
    map<int , string> m;
    m[1] = "Ved";
    m[2] = "Prakash";
    m[5] = "Gupta";

    m.insert({10 , "My Nsme"});

    // Before Erase Map
    for (auto i: m){
        cout<<i.first<<" ";
        cout<<i.second<<endl;
    }
    cout<<endl;

    cout<<"Check 10 is present -> "<<m.count(10)<<endl;

    // After Erase
    m.erase(5);
    for (auto i: m){
        cout<<i.first<<" ";
        cout<<i.second<<endl;
    }
    cout<<endl;

    return 0;
}