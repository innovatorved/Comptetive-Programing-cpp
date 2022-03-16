#include<iostream>
using namespace std;

class Animal {
    //parent class
    public:
        void eat() {
            cout << "eating" << endl;
        }
};

// Child class
class Dog: public Animal {
    public: void bark() {
        cout << "barking" << endl;
    }
};

class BabyDog: public Dog {
    // grand chile 2nd level
    public: void weep() {
        cout << "weeping";
    }
};

int main(){
    BabyDog b1;

    b1.eat();
    b1.bark();
    b1.weep();

    return 0;
}