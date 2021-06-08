#include<iostream>

using namespace std;

int main(){

    // Switch case
    cout<<"__Calculator with Switch CAse__\n";
    int a ;
    cin>>a;

    switch(a){
        float b , c;
        case 1:

            cout<<"Addition\n";
            cin>>b>>c;
            cout<<"Sum is "<<b+c;
            break;
        case 2:
            cout<<"Substraction\n";
            cin>>b>>c;
            cout<<"Sum is "<<b-c;
            break;
        case 3:
            cout<<"Multiply\n";
            cin>>b>>c;
            cout<<"Sum is "<<b*c;
            break;
        case 4:
            cout<<"Divide\n";
            cin>>b>>c;
            cout<<"Sum is "<<b/c;
            break;
        default:
            cout<<"Inccorect Choice";
            
    }
}