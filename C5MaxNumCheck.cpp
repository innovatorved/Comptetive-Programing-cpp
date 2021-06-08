#include<iostream>

using namespace std;

int main(){

    int a,b,c;

    cin>>a>>b>>c;

    // print input
    // cout<<a<<b<<c;

    if (a>b){
        if(a>c){
            cout<<"A is Greater than B and C";
        }
        else{
            cout<<"C is Greater than B and A";
        }
    }
    else if(b>c){
        cout<<"B is Greater than A and C";
    }
    else{
        cout<<"C is Greater tha A and B";
    }

    return 0;
}