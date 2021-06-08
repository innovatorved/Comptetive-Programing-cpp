#include<iostream>

using namespace std;

int main(){

    // Butterfly Pattern
    int n;
    cout<<"N : ";
    cin>>n;

    /*
        * = no. of row ( print each side )
        space = 2*n - 2* row_num
        row = i
    */

    for(int i = 1; i<=n; i++){
        
        // print in start
        for(int j = 1; j <= i; j++){
            cout<<" * ";
        }

        // Print Space
        int space = 2*n - 2*i;
        for(int j = 1; j<=space; j++){
            cout<<"   ";
        }

        // print in last
        for(int j = 1; j <= i; j++){
            cout<<" * ";
        }
        cout<<endl;
    }

    // Print in reverse
    for(int i = n; i>=1; i--){
        
        // print in start
        for(int j = 1; j <= i; j++){
            cout<<" * ";
        }

        // Print Space
        int space = 2*n - 2*i;
        for(int j = 1; j<=space; j++){
            cout<<"   ";
        }

        // print in last
        for(int j = 1; j <= i; j++){
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;
}