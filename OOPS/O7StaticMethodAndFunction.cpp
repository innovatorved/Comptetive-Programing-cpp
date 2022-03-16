#include <iostream>
using namespace std;

class Student{
    public:
        int id;
        string name;
        static int year;

    Student(int id , string name){
        this->id = id;
        this->name = name;
    }
    //static function only acces static member
    static void getyear(){
        cout<<"year->"<<year<<endl;
    }
};

int Student::year = 2022; // intialize for all object

int main(){
    cout<<Student::year<<endl;

    Student S1(123 , "ved gupta");
    cout<<S1.year<<endl;

    // when we update static element from one object it auto updated on other
    Student S2(456 , "yuggupta");
    S2.year = 2025;

    cout<<"S1->"<<S1.year<<endl;
    cout<<"S2->"<<S2.year<<endl;

    Student::getyear();

    return 0;
}