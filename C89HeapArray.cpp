#include<iostream>
using namespace std;

int main(){
    // Allocation
    int *p = new int[4]; 
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;

    cout<<p[3]<<endl;
    delete[]p;  // Dynamic memory Deallocation
    cout<<p[3]<<endl;
}