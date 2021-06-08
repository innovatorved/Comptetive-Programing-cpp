#include<iostream>

using namespace std;

int main(){

    int start , end;
    cin>>start>>end;
    int i , y;
    for (i=start; i<=end; i++){
        for (y=2; y<=i-1; y++){
            if(i%y == 0){
                // non prime
                break;
            }
        }
        if(i == y){
            cout<<"Prime : "<<i<<endl;
        }
    }   
}