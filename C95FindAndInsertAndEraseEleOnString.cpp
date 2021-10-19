#include<iostream>
#include<string>
using namespace std;

int main(){
    string intro = "Hello my name is Ved Gupta";
    cout<<intro<<endl;
    // find ved on string intro
    // using find func it returns the start index
    // string.find("stringYouWantToFind") : case sensitive :
    // if string not found it returns the garbage value
    int pos = intro.find("Ved");

    // erase ved on string intro
    intro.erase(pos , 4);
    cout<<intro<<endl;

    // Insert String on string
    // inser yug before the Gupta
    cout<<intro.insert(pos , "Yug ")<<endl;
    return 0;
}