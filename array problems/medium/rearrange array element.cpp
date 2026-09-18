#include<bits/stdc++.h>
using namespace std;

vector<int> rearrange(vector<int>& a)
{
    int n = a.size();
    int posindex = 0 , negindex = 1;
    vector<int> ans(n , 0);

    for(int i=0 ; i<n ;i++)
    {
        if(a[i] > 0)
        {
            ans[posindex] = a[i];
            posindex += 2;
        }
        else 
        {
            ans[negindex] = a[i];
            negindex += 2;
        }
    }
    return ans;
}

int main()
{
    vector<int> a = {3,1,-2,-5,2,-4};

    vector<int> b;
    b=rearrange(a);

    for(int i=0 ; i<b.size() ; i++)
    {
        cout<<b[i]<<" ";
    }

    return 0;
}