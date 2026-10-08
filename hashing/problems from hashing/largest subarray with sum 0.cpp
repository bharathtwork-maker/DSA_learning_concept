#include<bits/stdc++.h>
using namespace std;

//hash mapping method
int sum0(vector<int>& a)
{
    int maxi = INT_MIN;
    int sum=0;
    unordered_map<int,int> m;

    for(int i=0 ; i<a.size(); i++)
    {
        sum += a[i];

        if(sum == 0)
        {
            maxi = i+1;
        }
        else{
            if(m.find(sum) != m.end())
            {
                maxi = max(maxi , i - m[sum]);
            }
            else
            {
                m[sum] = i;  
            }
        }
    }
    return maxi;
}

int main()
{
    vector<int> a = {15, -2, 2, -8, 1, 7, 10, 23};
    cout<<sum0(a);
    return 0;
}