#include<iostream>

using namespace std;

int main(){

    // Inverted Pattern
    int n;
    cout<<"N : ";
    cin>>n;

    for (int x = n; x>=1; x--){
        for(int y = 1; y<=x; y++){
            cout<<y<<" "; // print column Number
        }
        cout<<endl;

    }

    // Second Metheod
    cout<<"\n\n";
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}