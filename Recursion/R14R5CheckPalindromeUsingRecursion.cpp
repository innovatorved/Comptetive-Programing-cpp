#include<iostream>
using namespace std;

bool checkPalindrome(string name , int s , int e ){
    if(s>=e){
        return 1;
    }
    if (name[s] == name[e]){
        return checkPalindrome(name , s+1 , e-1);
    }
    else{
        return 0;
    }
    return 0;
}

int main(){
    string name = "abcddcba";
    int size = name.length();
    
    cout<<"isPalindrome--> "<<checkPalindrome(name , 0 , size-1)<<endl;
    return 0;
}