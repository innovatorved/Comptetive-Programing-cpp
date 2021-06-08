#include<iostream>

using namespace std;

// Add function
int add(int num1 , int num2){
    int sum = num1 + num2;
    return sum;
}
int main(){

    // function for addition
    cout<<"Enter two Numbers for Addition : ";
    int a , b;
    cin>>a>>b;
    int sum = add(a , b);
    cout<<"Addition is : "<<sum;
    return 0;
}