#include<iostream>

using namespace std;

int main(){

    // Floyd's Triangle
    int n;
    cout<<"N : ";
    cin>>n;

    int count = 1;
    for (int i = 0; i<=n; i++){
        for(int j = 0; j<=i; j++){
            cout<<count++<<" ";
        }
        cout<<endl;
    }

    return 0;
}