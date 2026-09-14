#include<bits/stdc++.h>
using namespace std;

int maxones(vector<int>& a)
{
    int maxi = 0;
    int cnt = 0;
    
    for(int i=0 ;i<a.size() ; i++)
    {
        if(a[i] == 1)
        {
            cnt++;
            if(maxi < cnt)
            {
                maxi = cnt;
            }
        }
        if(a[i] != 1)
        {
            cnt = 0;
        }
    }
    return maxi;
}

int main()
{
    vector<int> a = {1,1,0,1,1,1,0,1,1};
    cout<<maxones(a);
    return 0;

}