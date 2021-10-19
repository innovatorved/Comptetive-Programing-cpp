#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1 = "78956";
    int n1 = 12345;

    // String to Int
    int s2 = stoi(s1);
    cout<<s2+2<<endl;


    // Int to String
    string n2 = to_string(n1);
    cout<<n2+"2"<<endl;
    return 0;
}