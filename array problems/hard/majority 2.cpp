#include<bits/stdc++.h>
using namespace std;

vector<int> majo(vector<int> a)
{
    int cnt1 = 0 , cnt2 = 0;
    int el1 = INT_MIN , el2 = INT_MIN;
    vector<int> ans;
    int n = a.size();
    int mini = (n / 3) + 1;   // +1 because to check the greater than n/3 where we will be needed the number which is repeated more than the n/3 times so we add 1 to get the greater than condition

    for(int i=0 ; i<n ; i++)
    {
        if(cnt1 == 0 && a[i] != el2)
        {
            cnt1 = 1;
            el1 = a[i];
        }
        else if(cnt2 == 0 && a[i] != el1)
        {
            cnt2 = 1;
            el2 = a[i];
        }
        else if(a[i] == el1)
        {
            cnt1++;
        }
        else if(a[i] == el2)
        {
            cnt2++;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }

    cnt1=0 ,cnt2=0;
    
    for(int i=0 ; i<n ; i++)
    {
        if(el1 == a[i])
        {
            cnt1++;
        }
        if(el2 == a[i])
        {
            cnt2++;
        }
    }

    if(cnt1 >= mini)
    {
        ans.push_back(el1);
    }
    if(cnt2 >= mini)
    {
        ans.push_back(el2);
    }
    return ans;
}

int main()
{
    vector<int> a = {3,2,3,3,4,2,2};
    vector<int> res = majo(a);

    for(int i=0 ; i<res.size() ; i++)
    {
        cout<<res[i]<<" ";
    }

    return 0;
}