#include<iostream>
using namespace std;

int main(){

    int a ; // declare
    a = 56; // initialisation
    cout<< "size of int : "<< sizeof(a)<<" byte" <<endl;

    float b;
    b = 0.011;
    cout<< "size of float " <<sizeof(b)<<" byte"<<endl;

    bool c;
    cout<< "size of Bool " <<sizeof(c)<<" byte"<<endl;

    char d;
    cout<< "size of char " <<sizeof(d)<<" byte"<<endl;

    short int si;
    long int li;
    cout<< "size of short int " <<sizeof(si)<<" byte && \nsize of long int : "<<sizeof(li)<<endl;

    return 0;

}