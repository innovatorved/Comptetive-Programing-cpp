#include<iostream>

using namespace std;

void print(int n){
    if (n==0){
        return;
    }
    print(n-1);
    cout<<n<<endl;
}
int main(){

    print(13);
    return 0;
}