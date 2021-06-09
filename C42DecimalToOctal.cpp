#include<bits/stdc++.h>

using namespace std;

int D2O(int n){
    // check largest power of 2
    int x =1; //temporary variable
    int Octal = 0; // Output
    while(x<=n){
        x*=8; // double each time
    }
    // if loop ended x value is bigger than n so we divide by 8 previous mulltiple of8
    x /= 8;
    

     while(x>0){
        int Octal_digit = n/x; // extract largest portion from n multiple of 8;
        n -= Octal_digit*x;

        // then xcheck for previos multiple of 8 
        x /= 8;
        Octal = Octal*10 + Octal_digit;

     }
     return Octal;
    
}

int32_t main(){
    //Decimal to Octal
    int n;
    cin>>n;

    cout<<"Decimal to Octal : "<<D2O(n);
    return 0;
}