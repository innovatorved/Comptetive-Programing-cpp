#include<bits/stdc++.h>

using namespace std;

int B2D(int n){
    int decimal = 0;
    int temp = 1; // we represent temp as a power of 2 sequence
    while (n>0){ 
        int last_digit = n%10;
        n = n/10;
        decimal += last_digit*temp;
        temp *= 2 ; // change into its next power

    }
    return decimal;
}

int32_t main(){
    //  Binary to Decimal Conversion
    int n;
    cin>>n;

    cout<<"Binary to Decimal : "<<B2D(n);

    return 0;
}