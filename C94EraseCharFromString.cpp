#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "My name is Ved Gupta";

    // del ved ffrom string by usimng erase mrthod
    // syntax : string.erase(startIndex , howMuchCharFromStart)
    str1.erase(11 , 4);
    cout<<str1<<endl;
    return 0;
}