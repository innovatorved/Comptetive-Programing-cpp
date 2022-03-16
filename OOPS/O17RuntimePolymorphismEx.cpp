#include<iostream>
using namespace std;

/*
Runtime Polymorphism : only possible in multilevel Inheritance
    - Function / Method Overriding
*/
class Animal{
    public:
        void speak(){
            cout<<"Speak..."<<endl;
        }
};

class Dog : public Animal{
    public:
        void speak(){
            // creation of same name & same parameter function as parent class called Function or Method Overriding
            cout<<"Bark..."<<endl;
        }
};

int main(){

    Animal A1;
    Dog D1;

    A1.speak();
    D1.speak();
    return 0;
}