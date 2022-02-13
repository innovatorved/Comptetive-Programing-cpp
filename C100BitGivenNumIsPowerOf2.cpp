#include <iostream>
using namespace std;

bool isPowerOf2(int num){
    // BCD num ... 32 16 8 4 2 1
    // these are the power of 2
    // by seeing these numbers we see that that the the & binary operation by n & n-1 is always  0 in case f numbers which is power of 2
    // we ignore case when number is 0
    // if num is 0 then easily return 0
    return (num && !(num&(num-1)));
}
int main(){
    // Write a Program to check gitven number ids Power of 2?

    // # 1 represent number is power of 2

    cout<<isPowerOf2(4)<<endl;
    cout<<isPowerOf2(0)<<endl;
    cout<<isPowerOf2(7)<<endl;

    return 0;
}