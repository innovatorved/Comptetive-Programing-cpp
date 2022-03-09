#include<iostream>

using namespace std;

int StepLadder(int n){
    if(n==0){
        return 1;
    }
    else if(n<0){
        return 0;
    }
    return StepLadder(n-1) + StepLadder(n-2);
}

int main(){
    // 1 or 2 step
    cout<<StepLadder(5)<<endl;

    return 0;
}