#include<iostream>

using namespace std;

int main(){

    //Loops is Cpp

    // print 1 to 10 by for loop
    for (int i = 0; i<11; i++){
        cout<<i<<endl;
    }

    // while loop count 1 to 10
    int i = 0;
    int sum = 0;
    while (i<11)
    {
        sum+=i;
        i++;
    }
    cout<<"Sum is : "<<sum;

    // do while print 1 to 10
    sum = 0;
    i = 0;
    do{
        i++;
        sum+=i;
 
    }
    while (i<11);
    cout<<"\nSum is : "<<sum;
    return 0;
}