#include<iostream>

using namespace std;

int main(){

    // Half Pyramiod Afteer 180 Rotation

    int n;
    cout<<"N : ";
    cin>>n;
    cout<<endl;

    for (int i = 1; i<=n; i++){
        for(int j = n; j>=1; j--){
            if(j<=i){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }

    // Secound Metheod
    cout<<"\n\n";
    for(int i=1; i <= n; i++){
        for(int j = 1; j<=n; j++){
            if(n-i>=j){
                cout<<"   ";
            }
            else{
                cout<<" * ";
            }
        }
        cout<<endl;
    }

    return 0;
}