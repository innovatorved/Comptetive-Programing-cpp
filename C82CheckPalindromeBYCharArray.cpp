#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    /*
        Check Palindrome
    */

   int n; // total letter in word
   cin>>n;
   // Create  an char array 
   char arr1[n+1];

   // take input of World
   cin>>arr1;

    bool Check = 1;

    for(int i=0; i<n; i++){
        if (arr1[i] != arr1[n-1-i]){
            Check = 0;
            break;
        }
    }

    if (Check){
        cout<<"Word is Palindrome";
    }
    else{
        cout<<"Word is not a Palindrome";
    }
}