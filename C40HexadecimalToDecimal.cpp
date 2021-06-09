#include<bits/stdc++.h>

using namespace std;

int H2D(string n){
    int decimal  = 0;
    int temp = 1;

    // check the size of input string
    int size = n.size();
    // cout<<size<<endl;;
    for(int i=size-1; i>=0; i--){
        if(n[i] >= '0' && n[i] <='9'){
            // if String index element is lie between 0 to 9
            decimal += temp*(n[i]-'0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F'){
            // if String element in between A to F
            decimal += temp*(n[i] - 'A' +10);
        }
        temp*=16;
    }
    return decimal;
}

int32_t main(){
    // Hexadecimal to Decimal
    // we knoew that hexadecial cotain Alphabets and NumbersSoo we input a String

    string n;
    cin>>n;

    cout<<"Hexadecimal to Decimal : "<<H2D(n);

    return 0;
}