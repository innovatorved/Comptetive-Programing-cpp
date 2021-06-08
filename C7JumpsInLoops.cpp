#include<iostream>

using namespace std;

int main(){

    int money = 3000;
    for(int date=1; date<30; date++ ){
        if (date%2==0){
            continue;
        }
        if (money==0){
            break;
        }
        money-=300;
        cout<<"Go ware ";
    }
    return 0;
}