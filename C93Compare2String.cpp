#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "abcd";
    string str2 = "abcd";

    // Return 0 if strings are equal
    cout<<str2.compare(str1)<<endl;
    if(!str2.compare(str1)){
        cout<<"String are Equal"<<endl;
    }

    // Check for empty : 1 if empty
    string str3 = "";
    cout<<str3.empty()<<endl;
    if(str3.empty())
        cout<<"String is Empty"<<endl;

    // clear the str2 and check that tthis is not empty
    str2.clear();
    if(str2.empty())
        cout<<"Succerssfully clear str2"<<endl;
    return 0;
}