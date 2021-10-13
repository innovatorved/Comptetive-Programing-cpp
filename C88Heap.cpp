#include<iostream>
using namespace std;

int main(){
    // Heap based on dynamic allocation memory

    int a = 15; //Stored in Stack
    int *p = new int(); // allocate memory in heap
    *p = 10;
    cout<<*p<<endl;

    // free the heap memory
    delete(p);  // Memory deallocation
    cout<<*p<<endl;
}