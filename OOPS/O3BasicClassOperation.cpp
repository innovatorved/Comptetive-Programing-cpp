#include<iostream>
using namespace std;

class Student{
    int id;

    public :
    string name ;
    int num ;

    void setId(int id1){
        id = id1;
    }
    int getId(){
        return id;
    }
    void me(){
        cout<<"Hey i am "<<name<<endl;
    }
};

int main(){
    Student S1;

    S1.name = "Ved Prakash Gupta";
    S1.setId(123456); //set private variablle

    cout<<"ID->"<<S1.getId()<<endl;
    S1.me();

    cout<<"Size-->"<<sizeof(S1)<<endl;

    return 0;
}