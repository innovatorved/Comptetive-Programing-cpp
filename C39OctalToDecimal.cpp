#include<bits/stdc++.h>

using namespace std;

int O2D(int n){
    int decimal = 0;
    int temp = 1;

    while (n>0){
        int last = n%10;
        n /= 10;
        decimal += last*temp;
        temp *= 8;
    }
    return decimal;
}

int32_t main(){
    // Octal To Decimal
    int n;
    cin>>n;

    cout<<"Octal To Decimal : "<<O2D(n);
    return 0;
}