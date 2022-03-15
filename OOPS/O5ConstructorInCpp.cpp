#include<iostream>
using namespace std;

class Student{
    private :
    int id;

    public:
    string name;
    Student(){
        // automatic invoked
        cout<<"Unparameterized Created"<<endl;
    }
    Student (int id , string name){
        // Parameterized constructor
        cout<<"Parameterized Constructor"<<endl;
        this->id = id;
        this->name = name;
    }
};

int main(){
    Student S1;
    Student S2(1245 , "Ved Gupta");

    cout<<"S1 : Name->"<<S1.name<<endl; // not assigned
    cout<<"S2 : Name->"<<S2.name<<endl;

    // create new object from copy
    Student S3(S2); //pass we value : copy created
    cout<<"copy of S2 -> S3 : Name->"<<S3.name<<endl; // copy

    // we pass by reference for bypass looping
    // default copy constructor shallow copy use
    return 0;
}