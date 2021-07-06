#include<bits/stdc++.h>

using namespace std;

string D2H(int n){
    // check largest power of 2
    int x =1; //temporary variable
    string hex = ""; // Output
    while(x<=n){
        x*=16; // double each time
    }
    // if loop ended x value is bigger than n so we divide by 16 previous mulltiple of16
    x /= 16;
    

     while(x>0){
        int hex_digit = n/x; // extract largest portion from n multiple of 16;
        n -= hex_digit*x;

        // then xcheck for previos multiple of 16 
        x /= 16;
        if(hex_digit <= 9){
            hex = hex + to_string(hex_digit); // Convert digit in to string and add to ans
        }
        else{
            // if number is greater than 9 so convert it into A  /B /C
            // And Add in the last of string
            char c = 'A' + hex_digit - 10;
            hex.push_back(c);
        }

     }
     return hex;
    
}

int32_t main(){
    //Decimal to hex
    int n;
    cin>>n;

    cout<<"Decimal to hex : "<<D2H(n)<<endl;
    return 0;
}