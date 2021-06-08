#include<iostream>

using namespace std;

void fab(int num){
    int a = 0 , b = 1;
    for(int i = 1 ; i<=num; i++){
        cout<<a<<endl;
        int temp;
        temp = a+b;
        a = b;
        b = temp;
    }
}
int main()
{
    // find fibenacci Sequence
    int n;
    cout<<"Enter the Number of Sequence : ";
    cin>>n;

    fab(n);

    return 0;
}