#include<iostream>
using namespace std;

/*
Static Polmorphism or compile time polymorphism
    - function Overloading 
        : only parameter change not return type
    - Operator Overloading
        + operator some specific work

*/

/*
operators that can be operloaded

*/

class A{
    public :
        void sayHello(){
            cout<<"Hello Ved Gupta"<<endl;
        }
        void sayHello(string name){
            cout<<"Hello "<<name<<endl;
        }
};

class B {
    public :
        int num;

        void operator + (B &obj){
            int base = this->num;
            int arg = obj.num;
            cout<<base + arg<<endl;
        }

        void operator - (B &obj){
            int base = this->num;
            int arg = obj.num;
            cout<<base - arg<<endl;
        }
};

int main(){
    A a1;

    cout<<"Function Overloading"<<endl;
    a1.sayHello();
    a1.sayHello("Yug Gupta");

    B b1 , b2;
    b1.num = 10;
    b2.num = 50;
    
    b1+b2;

    b1-b2;
    return 0;
}