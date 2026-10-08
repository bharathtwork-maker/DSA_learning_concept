#include<bits/stdc++.h>
using namespace std;
//using hash mapping

int countcnt(vector<int>& a , int k)
{
    unordered_map<int,int> m;      // for map we use   <presum , cnt>
    m[0] = 1;                     //this is used because when i = 0 then the presum = 3 so remove will be 0 then we should be having something like 0 right so that is why we declare this
    int cnt = 0 , presum = 0;
    
    for(int i=0 ; i<a.size() ;i++)
    {
        presum += a[i];
        int remove = presum - k;
        cnt += m[remove];          //get the cnt stored in the particular remove map
        m[presum] += 1;          //add presum if not exist or if exist then it increment the value by 1
    }
    return cnt;
}

int main()
{
    vector<int> a = {3,-3,1,1,1};
    int k = 3;
    cout<<countcnt(a , k);
    return 0;
}