#include <iostream>
#include <string>
using namespace std;

int main(){

    // Append a String to Another string
    string str1 = "Ved";
    string str2 = "Gupta";
    
    // ---------- create new string with s1 and s2
    string str3 = str1 + str2;
    cout<<str3<<endl;

    // ---------- append str2 in str1
    str1.append(str2);
    cout<<str1<<endl;

    // ---------- access characters of an string just like array
    // access G
    cout<<str1[3]<<endl;

    // clear a string : str3
    str3.clear();
    cout<<str3<<endl;

    // find length of an string
    cout<<str1.length()<<endl;
    cout<<str1.size()<<endl;

    return 0;
}