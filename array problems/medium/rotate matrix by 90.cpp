#include<bits/stdc++.h>
using namespace std;

vector<int> reverseit(vector<int>& a)  //this is how we reverse an array using our own function but there is also reverse function in cpp stl
{
    int n = a.size();
    int i=0 , j=n-1;

    while(i<=j)
    {
        swap(a[i] , a[j]);
        i++;
        j--;
    }
    return a;
}

void rotate90(vector<vector<int>>& m)
{
    int n = m.size();
    
    for(int i=0 ;i<n-1 ; i++)
    {
        for(int j=i+1 ;j<n ;j++)  //see notebook for more explanation but no needed if you remember
        {
            swap(m[i][j] , m[j][i]);
        }
    }
    for(int i=0 ;i<n ;i++)
    {
        reverseit(m[i]);   //always remember m[i] will be used to access for only row elements
    }
}

int main()
{
    vector<vector<int>> matrix1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotate90(matrix1);
    cout<<"[";
    for(int i=0 ;i<matrix1.size() ;i++)
    {
        cout<<"[";
        for(int j=0 ;j<matrix1.size() ; j++)
        {
            cout<<matrix1[i][j];
        }
         cout<<"]";
    }
    cout<<"]";

    return 0;
}