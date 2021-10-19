#include<iostream>
#include<string>
using namespace std;

int main(){
    string intro = "My Name is Ved Gupta";

    // create Ved Gupta substring from intro
    string name = intro.substr(11 , intro.length()-1);
    cout<<name<<endl;
    
    return 0;
}