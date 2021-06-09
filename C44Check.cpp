#include<bits/stdc++.h>

using namespace std;

int check(int n){
    // check highest power of 8 in n
    int x = 1;
    int ans = 0;
    while(x<=n){
        x*=8;
    }
    x /= 8;

    while(n>0){
        // extract last powers
        int last = n/x;
        n -= last*x;

        // reduce x for check previous power
        x /= 8;

        ans = ans*10 + last;
    }
    return ans;
}

int32_t main(){
    // check 
    int n ;
    cin>>n;

    cout<<check(n);
    return 0;
}