#include<bits/stdc++.h>

using namespace std;

bool check(int x , int y , int z){
    int a ,b ,c;
    a = max(x , max(y , z));

    if(a==x){
        b = y;
        c = z;
    }
    else if(a==y){
        b = x;
        c = z;
    }
    else{
        b = x;
        c = y;
    }

    if(a*a == b*b + c*c)
        return true;
    else    
        return false;
}

int32_t main(){
    int x , y , z;

    // check the Number is in the form of Pythagorean Triplet
    cin>>x>>y>>z;

    if(check(x,y,z))
    {
        cout<<"Pythagorean Triplet";
    }
    else{
        cout<<"Not a Pythagorean Triplet";
    }
}