#include<iostream>
using namespace std;

class Animal{
    public:
        void eat(){
            cout<<"Eating...."<<endl;
        }
};

class Dog : public Animal{
    // Single Inheritance
    public :
        void bark(){
            cout<<"Barking..."<<endl;
        }
};

int main(){
    // Creating an object of the child class
    Dog d1;

    d1.eat();
    d1.bark();
    
    return 0;
}