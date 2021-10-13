#include <iostream>
using namespace std;

int main(){
    int var1 = 10;

    int *pt1 = &var1;
    int **pt2 = &pt1;

    cout<<pt2<<endl;
    cout<<*pt2<<endl; // access pt1 by pt2
    cout<<**pt2<<endl; // acces vr1 by pt2

    return 0;
}