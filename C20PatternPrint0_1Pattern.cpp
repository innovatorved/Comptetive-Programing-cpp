#include<iostream>

using namespace std;

int main(){

    // 0-1 Pattern
    int n;
    cout<<"N : ";
    cin>>n;
    bool b = 1;
    for(int i = 1; i<=n; i++){
        for(int j = 1 ; j<=i; j++){
            cout<<" ";
            if(i%2!=0){
                if(j%2!=0){
                    cout<<b;
                }
                else{
                    cout<<!b;
                }
            }
            else{
                if(j%2==0){
                    cout<<b;
                }
                else{
                    cout<<!b;
                }
            }
        }
        cout<<endl;
    }

    // Secound Metheod
    cout<<"\n\n";
    for(int i = 1; i<=n; i++){
        for(int j = 1 ; j<=i; j++){
            // by diagraam we see thant 1 is one the place when row_nu + col_num == even else 0
            if((i+j)%2==0){
                cout<<" 1 ";
            }
            else{
                cout<<" 0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}