#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    // Check Number is Armstrong or Not
    int N , n;
    cout<<"Enter the NUmber : ";
    cin>>N;

    int sq_sum = 0;
    n = N;

    while(n>0){
        int lastdigit = n%10;

        // sum of square of digits
        //sq_sum = sq_sum + (lastdigit*lastdigit*lastdigit);
        sq_sum += pow(lastdigit , 3);
        // cout<<sq_sum<<endl;
        n = n/10;
    }
    // cout<<sq_sum<<endl;
    if (N == sq_sum){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not an Armstrong Number";
    }
    return 0;
}