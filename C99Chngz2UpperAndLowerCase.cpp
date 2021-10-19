#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str1 = "agdhdhTskjvbkjc"; // lower case string
    // lower case 32 char greater than lower case

    for (int i=0; i<str1.size(); i++){
        // change into Upper case
        if(str1[i]>='a' && str1[i]<='z'){
            str1[i] -= 32;
        }
    }
    cout<<str1<<endl;

    string str2 = "ABCDEFGHIUVUVJHVJHBJK";
    // For changing in Lower Case add 32 in character
    for (int i=0; i<str2.size(); i++){
        // Change into Lower case
        if(str2[i] >= 'A' && str2[i] <= 'Z'){
            str2[i] += 32;
        }
    }
    cout<<str2<<endl;

    // Inbuilt dunction for changing YUpper And Lower Case
    string str3 = "wertyuijbvfdefghhgfderty";
    string str4 = "WERTYUIODFGHJCVBNMH";

    // Change to Upper CAse
    transform(str3.begin() , str3.end(), str3.begin(), ::toupper);

    // .. Chaneg in to Lower case
    transform(str4.begin() , str4.end(), str4.begin(), ::tolower);

    cout<<str3<<endl;
    cout<<str4<<endl;

    return 0;
}