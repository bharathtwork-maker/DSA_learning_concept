#include<bits/stdc++.h>
using namespace std;
//to print an entire pascal triangle

vector<int> printrow(int row)
{
    vector<int> rows;
    int res = 1;
    rows.push_back(res);

    for(int col=1 ; col < row ; col++)
    {
        res = res * (row - col);
        res = res / col;
        rows.push_back(res);
    }
    return rows;
}

vector<vector<int>> entiretriangle(int rows)
{
    vector<vector<int>> pascal;
    
    for(int i=1 ; i<=rows ; i++)
    {
        pascal.push_back(printrow(i));
    }
    return pascal;
}

int main()
{
    int numsrow = 5;

    vector<vector<int>> r = entiretriangle(numsrow);

    for(int i=0 ; i<r.size() ; i++)
    {
        for(int j=0 ; j<r[i].size() ; j++)
        {
            cout<<r[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}