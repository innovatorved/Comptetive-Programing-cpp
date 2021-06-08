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

int nCr(int n , int r){
    /* find Binary Cofficient nCr */
    int total = factorial(n)/(factorial(n-r)*factorial(r));
    return total;
}

int main()
{
    // Pascal Triangle
    cout<<"N : ";
    int n;
    cin>>n;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<nCr(i , j)<<" ";
        }
        cout<<endl;
    }

    return 0;
}