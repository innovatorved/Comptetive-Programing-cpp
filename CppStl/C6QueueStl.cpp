#include<iostream>
#include<queue>
using namespace std;

int main(){
    // initialize queue of strring stype
    queue <string> q1;

    q1.push("Ved");
    q1.push("prakash");
    q1.push("Gupta");

    cout<<"Size-->"<<q1.size()<<endl;
    cout<<"Front before --> "<<q1.front()<<endl;
    q1.pop();
    cout<<"Size-->"<<q1.size()<<endl;
    cout<<"Front After --> "<<q1.front()<<endl;


    
    return 0;
}