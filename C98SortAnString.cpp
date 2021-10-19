#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    // sort an String
    string alp = "yuioopla";
    sort(alp.begin(), alp.end());
    cout<<alp<<endl;
    return 0;
}