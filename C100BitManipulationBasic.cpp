#include <iostream>

using namespace std;

// Bit manipulation get a Particular Bit
// we left shift the 1 by the position you want to find and then & with number
// if the output is not equsl to 0 then 1 bit is present at the place  
int getBit(int num  , int pos){ 
    return ((num & (1<<pos)) != 0); // left shift
}

// Set bit at a position
// logic is we dimply use Or operator num and secound value is position
int setBit(int num , int pos){
    return (num)|(1<<pos);
}

// int clear bit set to0
int clearBit(int num , int pos){
    /**
     * @param num : integer number you want to clear the position
     * @param pos : integer number position you want to set to 0
     * using & operator and the complement of position to number
     * 
    */
   int binaryPos = 1<<pos;
   int compBinaryPos = ~binaryPos;
   return num&compBinaryPos;
}

int updateBit(int num , int pos , int val){
    // update bit value at specific position

    // step 1 clear the position
    int mask = ~(1<<pos);
    int clearVal = mask & num;

    // step 2 set the bit by its value
    int setVal =  (clearVal | (val << pos));
    return setVal;
}

int main(){
    // 5 : 0101
    // 2 : 0010
    // 7:0111
    // 4:0100

    cout<<"Get Bit"<<endl;
    cout<<getBit(1 , 0)<<endl;
    cout<<getBit(5 , 3)<<endl;

    // int set bit
    // 5 : 0101

    cout<<"Set Bit"<<endl;
    cout<<setBit(5,1)<<endl;
    cout<<setBit(5,2)<<endl;

    cout<<"Clear Bit"<<endl;
    cout<<clearBit(5,2)<<endl;

    cout<<"Update Bit"<<endl;
    cout<<updateBit(5,1,1)<<endl;
    cout<<updateBit(5,2,0)<<endl;

    return 0;
}