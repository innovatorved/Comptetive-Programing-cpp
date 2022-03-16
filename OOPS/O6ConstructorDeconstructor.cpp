#include<iostream>
using namespace std;

class Student{
    public :
        int id;
        string name;

    Student(int n){;
        cout<<"Constructor Called"<<endl;
    }

    ~Student(){
        cout<<"Destructor called"<<endl;
    }

};

int main(){
    Student S1(12); // Static Allocation
    Student *S2 = new Student(12); // Dynameic Allocation

    //Static allocated deconstructor auto called at time of object deletetiojn or program ending

    // dynamic delare object deconstructior not auto called

    delete S2;
    return 0;
}