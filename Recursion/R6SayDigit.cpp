#include<iostream>

using namespace std;

void sayDigit(int n){
    string numbers[10] = {"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"};
    if (n==0){
        return;
    }
    int temp = n%10;
    sayDigit(n/10);
    cout<< numbers[temp]<<" ";
}

int main(){
    int n;
    cin>>n;
    sayDigit(n);
    return 0;
}