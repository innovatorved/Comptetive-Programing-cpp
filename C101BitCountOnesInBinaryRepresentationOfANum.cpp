#include <iostream>

using namespace std;

int countOne(int num){
    int times = 0;
    while (num != 0){
        num = num & (num-1);
        times ++ ;
    }
    return times;
}

int main(){
    // Write a program to count the number of ones in binary representation of a number.

    cout<<countOne(15)<<endl;
    cout<<countOne(19)<<endl;
    return 0;
}