#include<bits/stdc++.h>
using namespace std;


void SubSequences(string in_str ,string output , int index){
    if (index >= in_str.length()){
        cout<<output<<endl;
        return;
    }

    // exclude
    SubSequences(in_str , output  , index+1);

    // include index element
    char ele = in_str[index];
    string newoutput = output + ele;
    SubSequences(in_str , newoutput  , index+1);
}

int main(){
    // find SubSequences : set of all Subset
    string  in_str = "abc";
    string output;
    int index = 0;
    
    SubSequences(in_str , output , index);

    return 0;


}