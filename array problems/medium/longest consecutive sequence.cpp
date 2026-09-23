#include<bits/stdc++.h>
using namespace std;

int longest(vector<int>& a)
{
    int longest=1;
    unordered_set<int> st;

    for(int i=0 ; i<a.size() ; i++)
    {
        st.insert(a[i]);
    }

    for(auto it:st)
    {
        if(st.find(it-1) == st.end())
        {
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end())
            {
                cnt++;
                x++;
            }
            longest = max(longest , cnt);
        }
    }
    return longest;
}

int main()
{
    vector<int> a = {1,100,101,2,3,4,10,102};
    cout<<longest(a);
    return 0;
}