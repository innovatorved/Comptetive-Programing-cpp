// Pointers are variable that store the address of another variable

#include <iostream>
using namespace std;

int main(){
    int a = 100; // Normal variable

    // Intialize pointer : pointer is on hexadecial form
    int *aptr;  // int pointer : datatype of pointer depend upon variable datatype
    aptr = &a; // store address of a in pointer

    cout<<aptr<<endl;

    // access variable value using pointer : derefrensung
    cout<<*aptr<<endl;

    // change variable valuse uzsing pointer
    *aptr = 20;
    cout<<a<<endl;
    return 0; 
}