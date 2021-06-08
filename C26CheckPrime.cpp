#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    // Check Number is Prime Or Not
    int n;
    cout<<"Enter The Number : ";
    cin>>n;
    bool flag = 0;

    // we check from 2 to sqrt of n because if no. is non prime its already covers its this
    for(int x = 2; x < sqrt(n); x++){
        if(n%x==0){
            cout<<"\nNumber is Non Prime";
            flag = 1;
            break;
        }

    }
    if (flag!=1){
        cout<<"\nNumber is Prime";
    }
    return 0;
}