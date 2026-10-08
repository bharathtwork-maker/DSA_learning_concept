#include<bits/stdc++.h>
using namespace std;
// TC is O(N) OR O(NlogN)   and space complexity is O(N)

int xork(vector<int>& a , int k)
{
    int cnt = 0 ;
    int xr = 0;
    map<int , int> m;
    m[0] = 1;         //first we have to add (0 , 1) to map

    for(int i=0 ; i<a.size() ; i++)
    {
        xr = xr ^ a[i];
        int x = xr ^ k;      //this is the formula like just imagine for the other problem we took remove or remaining which may be present in the map so like wise for this problem we have like this

        cnt += m[x];
        m[xr]++;
    }
    return cnt;
}

int main()
{
    vector<int> a = {4,2,2,6,4};
    int k = 6;
    cout<<xork(a , k);
    return 0;
}