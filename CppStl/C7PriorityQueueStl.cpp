#include<iostream>
#include<queue>

// First element is all greatest

using namespace std;

int main(){
    priority_queue<int> p_max; //max heap like
    priority_queue<int , vector<int> ,greater<int>> p_min; // mini heap like

    // push on max
    p_max.push(2);
    p_max.push(3);
    p_max.push(5);
    p_max.push(4);
    p_max.push(0);

    cout<<"Transeverse p_max : ";

    int n = p_max.size(); //always initialize befor 
    for(int i=0; i<n; i++){
        cout<<p_max.top()<<" ";
        p_max.pop();
    }
    cout<<endl;

    // perform in min

    p_min.push(2);
    p_min.push(3);
    p_min.push(5);
    p_min.push(4);
    p_min.push(0);

    cout<<"Transeverse p_min : ";

    int n2 = p_min.size(); //always initialize befor 
    for(int i=0; i<n; i++){
        cout<<p_min.top()<<" ";
        p_min.pop();
    }
    cout<<endl;

    cout<<"Empty--> "<<p_min.empty()<<endl;


    return 0;
}