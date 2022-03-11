#include<iostream>
using namespace std;

int power(int base , int pow){
    if (pow == 0){
        return 1;
    }
    if (pow == 1){
        return base;
    }

    int ans = power(base , pow/2);
    if (pow%2==0){
        return ans*ans;
    }
    else{
        return base*ans*ans;
    }
}

int main(){
    int base = 2;
    int pow = 7;

    cout<<base<<"^"<<pow<<"-->"<<power(base,pow)<<endl;
    return 0;
}