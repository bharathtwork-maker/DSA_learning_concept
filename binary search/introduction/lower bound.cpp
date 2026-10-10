//lower bound is  a[i] >= x
//TC O(log2(N))
#include<bits/stdc++.h>
using namespace std;

int lower(vector<int>& a , int target)
{
    int left = 0 , right = a.size()-1;
    int ans = a.size();    //simply we set an random number

    while(left <= right)
    {
        int mid = (left + right) /2;
        if(a[mid] >= target)
        {
            ans = mid;
            right = mid-1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> a = {1,3,5,6,8,9,11,15,17};
    int target = 4;
    cout<<lower(a , target);
    return 0;
}