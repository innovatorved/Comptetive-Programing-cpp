#include<iostream>
using namespace std;

class Hero{
    // roperties by default private
    int health;

    // public
    public : 
    char level;
};

int main(){
    Hero h1;
    // cout<<"Hero Health --> " <<h1.health<<endl; //health is private
    cout<<"Level --> "<<h1.level<<endl;
    
    return 0;
}