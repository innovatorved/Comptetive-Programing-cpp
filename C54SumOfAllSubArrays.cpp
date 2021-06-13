#include <iostream>
#include <climits>

using namespace std;
int main(){
    // Sum of All SubArrays
    int n;
    cout<<"Number of Elements in Array : ";
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j = i; j<n; j++){
            sum+=arr[j];
            cout<<sum<<endl;
        }
    }
    return 0;
}
