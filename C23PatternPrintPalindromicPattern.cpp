#include<iostream>

using namespace std;

int main()
{
    // Palindromic Pattern
    int n;
    cout<<"N : ";
    cin>>n;

    for(int i = 1; i<=n; i++ ){
        for(int j = 1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int k = i; k>=1; k--){
            cout<<k<<" ";
        }
        for(int k = 2; k<=i; k++){
            cout<<k<<" ";
        }

        cout<<endl;
    }

    // Secound Metheod
    cout<<"\n\n";

    for(int i = 1; i<=n; i++){
        int j;
        for(j = 1; j<=n-i; j++){
            cout<<"  ";
        }
        int k = i;
        for(; j<=n; j++){
            cout<<k--<<" ";
        }
        int l = 2;
        for(;j<=n+i-1 ; j++){
            cout<<l++<<" ";
        }

        cout<<endl;
        
    }
    
}