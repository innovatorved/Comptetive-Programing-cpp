#include<iostream>

using namespace std;

int main(){

    // Print Hollow Rectangle

    int col , row;
    cout<<"Enter the No. of Rows : ";
    cin>>row;
    cout<<"Enter the No. of Columns : ";
    cin>>col;

    for (int i = 1; i<=row; i++){
        for (int j = 1; j<=col; j++){
            if (i == 1 || i == row){
                cout<<" * ";
            }
            else{
                if(j==1 || j==col){
                    cout<<" * ";
                }
                else{
                    cout<<"   ";
                }
            }
        }
        cout<<endl;
    }
    cout<<endl<<"Size : "<<row<<"*"<<col<<endl<<endl;

    // Another metheod
    for (int i = 1; i<=row; i++){
        for (int j = 1; j<=col; j++){
            if (i == 1 || i == row || j==1 || j==col){
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    cout<<"Size : "<<row<<"*"<<col;

    return 0;
}