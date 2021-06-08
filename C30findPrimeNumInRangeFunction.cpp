#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n){
    /* Function checks Number is Prime Or Not*/
    bool flag = true;
    for(int x = 2; x<=sqrt(n); x++){
        if(n%x==0){
            flag = false;
            break;
        }
    }
    return flag;
}


int main()
{
    // find prime number in given range
    int a , b;
    cout<<"Enter the Rangr : ";
    cin>>a>>b;
    for(int i = a; i<=b; i++){
        if(isPrime(i) == true){
            cout<<i<<endl;
        }
    }

    return 0;
}