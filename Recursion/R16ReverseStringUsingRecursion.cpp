#include<iostream>
using namespace std;

void reverseString(string &name , int s , int e ){
    if(s>e){
        return ;
    }
    swap(name[s] , name[e]);
    reverseString(name , s+1 , e-1);
}

int main(){
    string name = "Ved Prakash Gupta";
    int size = name.length();
    reverseString(name , 0 , size-1);
    cout<<name<<endl;
    return 0;
}