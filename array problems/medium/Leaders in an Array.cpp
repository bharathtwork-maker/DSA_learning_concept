#include<bits/stdc++.h>
using namespace std;

vector<int> leader(vector<int>& a)
{
    int maxi = INT_MIN;
    int n = a.size();
    vector<int> ans;
    for(int i=n-1 ; i>=0 ; i--)
    {
        if(a[i] > maxi)
        {
            ans.push_back(a[i]);
        }
        maxi = max(maxi , a[i]);
    }
    sort(ans.begin() , ans.end());
    return ans;
}

int main()
{
    vector<int> a = {10,22,12,3,0,6};
    vector<int> res = leader(a);
    for(int i=0 ; i<res.size() ; i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}