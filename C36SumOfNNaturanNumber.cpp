#include<bits/stdc++.h>

using namespace std;

int sum(int n){
    /* For loop Approch*/
    int s = 0;
    for(int i = 1; i<=n; i++){
        s+=i;
        
    }
    return s;
}

int sum_formula(int n){
    int sum;
    sum = (n*(n+1))/2;
    return sum;
}

int32_t main(){
    // Sum of N natural Number

    int n;
    cin>>n;

    cout<<sum(n)<<endl;
    cout<<sum_formula(n);
    
}