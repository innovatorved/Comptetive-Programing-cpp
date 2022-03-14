#include<iostream>
using namespace std;

void SolveKeyPadProblem(string keypad[] , string nums , int index , string out){
    if(index >= nums.length()){
        cout<<out<<endl;
        return ;
    }

    int temp = nums[index] - '0';
    string value = keypad[temp];

    for (int i=0; i<value.length(); i++){
        out.push_back(value[i]);
        SolveKeyPadProblem(keypad , nums , index+1 , out);
        out.pop_back();
    }
}

int main(){
    string keypad[10] = {"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};
    
    string nums = "23";
    string out = "";
    int index = 0;

    SolveKeyPadProblem(keypad , nums , index , out);

    return 0;
}