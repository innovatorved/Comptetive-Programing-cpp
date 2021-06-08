#include<iostream>

using namespace std;

int main()
{
    // Reverse  a Number
    // cout<<"Enter the Number to Reverse : ";
    int n;
    cin>>n;

    int reverse = 0;
    while(n>0){
        int last = n%10;
        reverse = reverse*10 + last;

        // remove last digit from n
        n = n/10;
    }
    cout<<reverse;
}