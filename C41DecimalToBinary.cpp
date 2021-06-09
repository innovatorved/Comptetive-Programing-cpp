#include<bits/stdc++.h>

using namespace std;

int D2B(int n){
    // check largest power of 2
    int x =1; //temporary variable
    int Binary = 0; // Output
    while(x<=n){
        x*=2; // double each time
    }
    // if loop ended x value is bigger than n so we divide by 2 previous mulltiple of2
    x /= 2;
    

     while(x>0){
        int binary_digit = n/x; // extract largest portion from n multiple of 2;
        n -= binary_digit*x;

        // then xcheck for previos multiple of 2 
        x /= 2;
        Binary = Binary*10 + binary_digit;

     }
     return Binary;
}

int32_t main(){
    //Decimal to Binary
    int n;
    cin>>n;

    cout<<"Decimal to Binary : "<<D2B(n);
    return 0;
}