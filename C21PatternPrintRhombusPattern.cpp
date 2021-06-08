#include<iostream>
using namespace std;

int main(){

    // Rhombus Pattern
    int n;
    cout<<"N : ";
    cin>>n;

    for(int i = n; i>=1; i--){

        // 1st loop for space
        for(int j = 1; j<=i-1; j++){
            cout<<" ";
        }

        // 2nd loop for stars
        for(int sec = 1; sec<=n; sec++){
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;

}