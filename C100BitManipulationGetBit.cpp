#include <iostream>

using namespace std;

// Bit manipulation get a Particular Bit
// we left shift the 1 by the position you want to find and then & with number
// if the output is not equsl to 0 then 1 bit is present at the place  
int getBit(int num  , int pos){ 
    cout<<(1<<pos)<<endl;
    return ((num & (1<<pos))); // left shift
}

int main(){
    // 5 : 0101
    // 2 : 0010
    // 7:0111
    // 4:0100

    cout<<getBit(1 , 0)<<endl;
    cout<<getBit(5 , 2)<<endl;
    return 0;
}