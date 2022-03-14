#include<bits/stdc++.h>
using namespace std;


bool isSafe(int x , int y , int n, vector<vector<int>> &arr, vector<vector<int>> &visitedArr){

    if((x >= 0 && x < n) && (y>=0 && y<n)){
        if((visitedArr[x][y] == 0) && (arr[x][y] == 1)){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

void solve(vector<vector<int>> &arr , int n , int x , int y , vector<vector<int>> &visitedArr , string path){
    if(x == n-1 && y == n-1){
        cout<<path<<endl;
        return ;
    }

    visitedArr[x][y] = 1;

    int newX , newY;

    // for down
    newX = x+1;
    newY = y;
    if (isSafe(newX , newY , n , arr , visitedArr)){
        path.push_back('D');
        solve(arr , n , newX , newY , visitedArr , path);
        path.pop_back();
    }
    
    // for up
    newX = x-1;
    newY = y;
    if (isSafe(newX , newY , n , arr , visitedArr)){
        path.push_back('U');
        solve(arr , n , newX , newY , visitedArr , path);
        path.pop_back();
    }

    // for Right
    newX = x;
    newY = y+1;
    if (isSafe(newX , newY , n , arr , visitedArr)){
        path.push_back('R');
        solve(arr , n , newX , newY , visitedArr , path);
        path.pop_back();
    }

    // for Left
    newX = x;
    newY = y-1;
    if (isSafe(newX , newY , n , arr , visitedArr)){
        path.push_back('L');
        solve(arr , n , newX , newY , visitedArr , path);
        path.pop_back();
    }
    visitedArr[x][y] = 0;

}

int main(){
    vector<vector<int>> arr = {
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };

    vector<vector<int>> visitedArr = arr; // initialize by 0
    int n = 4;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            visitedArr[i][j] = 0;
        }
    }

    if(arr[0][0]==0){
        return 0;
    }

    int srcx = 0;
    int srcy = 0;

    string path = "";
    solve(arr , n , srcx , srcy , visitedArr , path);  
    return 0;
}