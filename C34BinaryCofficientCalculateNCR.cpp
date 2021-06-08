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

    // Calculate Binary Cofficient nCr
    int n , r;
    cout<<" Enter n & r : ";
    cin>>n>>r;

    int nCr = factorial(n)/(factorial(n-r)*factorial(r));
    cout<<"nCr : "<<nCr;
    return 0;
}