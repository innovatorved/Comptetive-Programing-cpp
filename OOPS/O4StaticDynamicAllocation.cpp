#include<iostream>
using namespace std;

class Student{
    private:
    int id;
    public :
    string name ;

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
    
    // Static Allocation
    cout<<"Static part"<<endl;
    Student S1 ;
    S1.name = "Ved Prakash Gupta";
    S1.setId(123456); //set private variablle
    cout<<"ID->"<<S1.getId()<<endl;
    S1.me();
    cout<<"Size-->"<<sizeof(S1)<<endl;

    // Dynamic Allocation inHeap
    cout<<endl<<"Dynamic Allocation Heap"<<endl;
    Student *S2 = new Student;
    (*S2).name = "Yug Gupta"; // one method
    S2->setId(545630);
    S2->me();
    cout<<"Size-->"<<sizeof(*S2)<<endl;


    return 0;
}