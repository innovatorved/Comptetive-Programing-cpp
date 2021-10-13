#include <iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
    // cout<<*arr<<endl;
    // cout<<arr<<endl;

    int *ptr = arr;
    cout<<ptr<<endl;

    // Print whole Array using Pointer
    for (int i=0; i<5; i++){
        cout<<*ptr<<endl;
        ptr++;
    }
    cout<<endl;

    // Second metheod
    for(int i=0; i<5; i++){
        // Add one index more every time in array and defresung it
        cout<<*(arr+i)<<endl;
    }

    return 0;
}