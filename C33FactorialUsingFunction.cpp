#include<iostream>

using namespace std;

int factorial(int n){
    /*Factorial of an Number*/
    int fact = 1;
    for(int i = n; i>=1; i--){
        fact *= i;
    }
    return fact;
}
int main(){

    // find factorial of an number
    cout<<"Enter the Number : ";
    int num;
    cin>>num;

    int fact = factorial(num);
    cout<<"Factorial is : "<<fact;


    return 0;
}