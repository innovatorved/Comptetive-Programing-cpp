#include<iostream>

using namespace std;

int main(){

    // Ternary Operator
    int a = 10;
    int b = 20;

    // excute first when true and execute second if false

    int c = a > b ? a : b;
    cout<<c<<endl;

    int d = a < b ? b-a : a - b; // always return  difference of both in positive
    // if a is greater return a-b & is b is greater return b-a
    cout<<d<<endl;

    return 0;
}