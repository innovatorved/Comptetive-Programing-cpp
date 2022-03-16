#include<iostream>
using namespace std;
// Parent class
class Animal {
    public:
        void eat() {
            cout << "eating" << endl;
        }
};
// Parent class
class Dog {
    public: void bark() {
        cout << "barking" << endl;
    }
};
// Inherited class from animal and Dog
class BabyDog: public Animal, public Dog {
    public: void weep() {
        cout << "weeping";
    }
};


int main() {
    // Creating an object of the child class
    BabyDog obj;
    // calling methods
    obj.eat();
    obj.bark();
    obj.weep();
}