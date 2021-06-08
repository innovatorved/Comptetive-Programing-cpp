#include<iostream>

using namespace std;

int main(){

    // Main Block
    int sav;
    cin>>sav;
    if(sav>5000){
        cout<<"Saving is Greater than 5000 ";
    }
    else if(sav>2000){
        cout<<"Saving is Greater than 2000 but less than 5000 ";
    }
    else{
        cout<<"Saving is less than 2000 & ";
        if(sav!=0){
            cout<<"Saving not equal to zero ";
        }
        else{
            cout<<"Saving is zero";
        }
    }


    return 0;
}