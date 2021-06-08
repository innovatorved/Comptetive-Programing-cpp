#include<iostream>

using namespace std;

int main()
{
    // Number Pattern
    cout<<" N : ";
    int n;
    cin>>n;

    for(int i = 1; i<=n; i++){

        // Add space
        for(int j = 0; j<=n-i+1; j++){
            cout<<" ";
        }

        // Add number
        for(int j = 1; j<=i; j++){
            cout<<j<<" ";
        }

        /* Add space
        for(int j = 0; j<=n-i; j++){
            cout<<" ";
        }*/
        
        cout<<endl;
    }


}