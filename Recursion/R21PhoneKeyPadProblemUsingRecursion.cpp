#include<bits/stdc++.h>
using namespace std;

string keypad[10] = {"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};

void Solution(string nums , string out , int index){
    if (index >= nums.length()){
        cout<<out<<endl;
        return ;
    }

    int num  = nums[index] - '0';
    string value = keypad[num];

    for(int i=0; i<value.length(); i++){
        out.push_back(value[i]);
        Solution(nums , out , index+1);
        out.pop_back();
    }
}

int main(){

    string nums = "23";
    string out = "";
    int index = 0;
    Solution(nums , out , index);
    return 0;
}