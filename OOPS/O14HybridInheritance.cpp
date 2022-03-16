#include <iostream>
using namespace std;
// Parent class1
class Vehicle {
    public:
        Vehicle() {
            cout << "This is a Vehicle" << endl;
        }
};
//Parent class2 
class Fare {
    public:
        Fare() {
            cout << "Fare of Vehicle\n";
        }
};
//Child class1
class Car: public Vehicle {
};
//Child class2 
class Bus: public Vehicle, public Fare {
};
// main function 
int main() {
    // creating object of sub class will 
    // invoke the constructor of base class 
    Bus obj2;
    return 0;
}