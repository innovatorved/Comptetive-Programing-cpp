#include<iostream>
using namespace std;

// Encapsulate data members and behavior : functions/methods iin single entity Class known as Encpdulation

// A fully enccapsulated class is classs where all data members is private
class person{
    private:
        string name;
        int age;

    public:  
    person(string name , int age){
        this->name = name;
        this->age = age;
    }
    int getAge(){
        return this->age;
    }

    string getName(){
        return this->name;
    }
};

int main(){
    person p1("Ved Gupta" , 20);
    cout<<"Name->"<<p1.getName()<<endl;
    cout<<"Age->"<<p1.getAge()<<endl;
    return 0;
}