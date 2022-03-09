#include<iostream>

using namespace std;

int fibonachi(int n){
    if (n<1){
        return 0;
    }
    if (n==1){
        return 1;
    }
    return fibonachi(n-1)  + fibonachi(n-2);
}

int main(){
    // 0 1 1 2 3 5 8 13 21 34
    cout << fibonachi(5) <<endl;
    return 0;
}