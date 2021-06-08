#include<iostream>

using namespace std;

int main(){

    // Print Rectangle

    int col , row;
    cout<<"Enter the No. of Rows : ";
    cin>>row;
    cout<<"Enter the No. of Columns : ";
    cin>>col;

    for (int i = 1; i<=row ; i++){
        for (int j = 1; j<=col ; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    cout<<row<<"*"<<col;

    return 0;
}