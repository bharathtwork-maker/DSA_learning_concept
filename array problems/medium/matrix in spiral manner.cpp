#include<bits/stdc++.h>
using namespace std;

//here the Time Complexity is O(N*N) which means we traverse through each element once

vector<int> spiral(vector<vector<int>>& a)
{
    int n = a.size();
    int m = a[0].size();
    int left = 0 , right = m-1;
    int top = 0 , bottom = n-1;
    vector<int> ans;

    while(left <= right && top <= bottom)
    {
        for(int i=left ; i<=right ; i++)
        {
            ans.push_back(a[top][i]);
        }
        top++;

        for(int i=top ; i<=bottom ; i++)
        {
            ans.push_back(a[i][right]);
        }
        right--;


        if(top <= bottom)   //this if we have an single line array then we dont want to run this block of code
        {
            for(int i=right ; i>=left ; i--)  //if in case we had an single line array then now the top will be incremented to the non existing line so it exceeds the value of bottom so the code need not to be runned 
        {
            ans.push_back(a[bottom][i]);
        }
        bottom--;
        }

        if(left <= right)     //at the center we dont have top which is checked so we have still left with some left and right element so in order to print it we use this if statement  
        {
            for(int i=bottom ; i>=top ; i--) 
        {
            ans.push_back(a[i][left]);
        }
        left++;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {
    {1,  2,  3,  4},
    {5,  6,  7,  8},
    {9, 10, 11, 12}
    };

    vector<int> res = spiral(arr);
    for(int i=0 ; i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }

    return 0;
}