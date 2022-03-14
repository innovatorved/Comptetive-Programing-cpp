#include<iostream>
using namespace std;

void permutation(string str , int index){
    if(index >= str.length()){
        cout<<str<<endl;
        return ;
    }
   for (int i=index; i<str.length(); i++){
       swap(str[index] , str[i]);
       permutation(str , index+1);
       swap(str[index] , str[i]);
   }
}

int main(){
    string str = "abc";
    permutation(str , 0);
    return 0;
}