#include<bits/stdc++.h>
using namespace std;
//to print any row with the index

vector<int> printrow(int rowind)
{
    vector<int> ans;
    int res=1;
    ans.push_back(res);

    for(int i=0 ; i<rowind ; i++)
    {
        res = res * (rowind - i);
        res = res / (i+1);
        ans.push_back(res);
    }
    return ans;
}

int main()
{
    int rowindex = 3;
    vector<int> res = printrow(rowindex);
    for(int i=0 ; i<res.size() ;i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}
