#include <iostream>
using namespace std;

// Call by refeerence concept

void increment (int *a){
    ++*a;
}

void swap2(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    
    int a = 1;
    increment(&a);
    cout<<a<<endl;

    int a1 = 4, a2 = 5;
    swap2(&a1 , &a2);
    cout<<a1<<" "<<a2<<endl;

    return 0;
}