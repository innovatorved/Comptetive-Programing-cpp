#include <iostream>
using namespace std;

int main(){
    /*
        Find Larget Word in an Sentence
    */
    int n;
    cin>>n;
    cin.ignore(); // clear the input buffer 

    char arr1[n+1];
    // If we want to input all line we use
    // cin.getline(word ,n) : // it ignore the white spaces

    cin.getline(arr1 , n+1);
    cin.ignore();

    // cout<<arr1;

    int currEleS=0;
    int currEleE=0;

    int MaxEleS=0;
    int MaxEleE=0;

    // cout<<arr1<<endl;

    for (int i=0; i<n; i++){
        if(arr1[i] == ' '){
            if((currEleE - currEleS) > (MaxEleE - MaxEleS)){
                MaxEleE = currEleE-1;
                MaxEleS = currEleS;
            }
            currEleS = i+1;
            currEleE = i+1;
        }
        else if((i == n-1) && ((MaxEleE - MaxEleS)<(n-1 - currEleS))){
            // cout<<"yes"<<endl;
            MaxEleE = n-2; // -2 because -1 for 0 index start and -1 
            MaxEleS = currEleS;
        }
        else{
            currEleE++;
        }
    }
    // cout<<MaxEleS<<" "<<MaxEleE<<endl;;

    // Larget Word in list is
    // cout<<MaxEleE<<endl;
    for (int i = MaxEleS; i<=MaxEleE+1; i++){
        cout<<arr1[i];
    }
    return 0;
}