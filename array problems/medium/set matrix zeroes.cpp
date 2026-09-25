#include<bits/stdc++.h>
using namespace std;
//see video if any doubt

void matrixzero(vector<vector<int>>& ma)
{
    int col0 = 1;
    int n = ma.size();
    int m = ma[0].size();

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            if(ma[i][j] == 0)
            {
                ma[i][0] = 0;

                if(j != 0)
                {
                    ma[0][j] = 0;
                }
                else
                {
                    col0 = 0;
                }
            }
            
        }
    }

    for(int i=1 ; i<n ; i++)
    {
        for(int j=1 ; j<m ; j++)
        {
            if(ma[i][j] != 0)
            {
                if(ma[i][0] == 0 || ma[0][j] == 0)
                {
                    ma[i][j] = 0;
                }
            }
        }
    }
    
    if(ma[0][0] == 0)
    {
        for(int j=1 ; j<m ; j++)
        {
            ma[0][j] = 0;
        }
    }
    if(col0 == 0)
    {
        for(int i=0 ; i<n ; i++)
        {
            ma[i][0] = 0;
        }
    }
}

int main()
{
    vector<vector<int>> m = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};

    matrixzero(m);

    cout<<"[";
    for(int i=0 ;i<m.size() ;i++)
    {
        cout<<"[";
        for(int j=0 ;j<m[0].size() ; j++)
        {
            cout<<m[i][j];
        }
         cout<<"]";
    }
    cout<<"]";

    return 0;
}