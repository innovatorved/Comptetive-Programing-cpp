#include<bits/stdc++.h>
using namespace std;

void print(vector<int> v){
    for (int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> findNextSmallest(vector<int> v1 , int size){
    vector<int> ans(size);
    stack<int> s1;
    s1.push(-1);
    for (int i=size-1; i>=0; i--){
        int cur = v1[i];
        while(cur <= s1.top()){
            s1.pop();
        }
        ans[i] = s1.top();
        s1.push(cur);
    }
    return ans;
}

int main(){
    vector<int> a1;
    a1.push_back(13);
    a1.push_back(2);
    a1.push_back(4);
    a1.push_back(1);
    a1.push_back(12);
    a1.push_back(6);
    print(a1);

    // findNextSmallest
    print(findNextSmallest(a1 , a1.size()));

    return 0;
}