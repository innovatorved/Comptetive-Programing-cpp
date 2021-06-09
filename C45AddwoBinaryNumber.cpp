#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int ans = 0;
    while(n>0){
        int last = n%10;
        n /= 10;
        ans  = ans*10 + last;
    }
    return ans;
}
int sumf(int a , int b){
    int sum = 0;
    int carry = 0;
    while (a !=0 && b !=0){
        int x = a%10;
        int y = b%10;
        if(x == 0 && y ==0 ){
            sum = sum*10 + carry;
            carry = 0;
        }
        else if((x == 0 && y == 1) || (x == 1 && y == 0)){
            // if any one is 1
            if(carry == 1){
                sum = sum*10 + 0;
                carry = 1;   // carry set to 1
            }
            else if(carry == 0){
                sum = sum*10 + 1;
                carry = 0;
            }

        }
        else if (x == 1 && y == 1){
            // if both are possitive
            
            if(carry == 1){
                
                sum = sum*10 + 1;
                carry = 1;
            }
            else if(carry == 0){
                
                sum = sum*10 + 0;
                carry = 1;
                
            }
        }
        // Update a and b
        a /= 10;
        b /= 10;

    }
    if (carry == 1){
        // cout<<"yes"<<sum<<endl;
        // cout<<sum;
        sum = sum*10 + 1;
    }
    // cout<<sum<<endl;
    // reverse the function
    sum = reverse(sum);
    return sum;
}

int32_t main(){
    // Addition of two Binary Numbers

    int a , b;
    cin>>a>>b;

    cout<<sumf(a,b);
    return 0;
}