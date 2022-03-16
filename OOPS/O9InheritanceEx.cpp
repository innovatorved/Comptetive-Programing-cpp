#include<iostream>
using namespace std;

class person{
    private:
        string name;
        int age;

    public:
    void setAge(int age){
        this->age = age;
    }
    void setName(string name){
        this->name = name;
    }
    int getAge(){
        return this->age;
    }

    string getName(){
        return this->name;
    }
};

class Male : public person{
    private:
        char gender = 'm';
    public:
    char getGender(){
        return this->gender;
    }
};

int main(){
    Male m ;
    cout<<"Gender --> "<<m.getGender()<<endl;
    return 0;
}