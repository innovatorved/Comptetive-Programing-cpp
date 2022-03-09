#include<iostream>

using namespace std;

int powerFind(int base , int n){
    if (n==0){
        return 1;
    }
    return base*powerFind(base , n-1);
}
int main(){

    cout<<powerFind(4,3)<<endl;
    return 0;
}