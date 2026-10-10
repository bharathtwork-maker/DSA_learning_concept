#include<bits/stdc++.h>
using namespace std;
//here TIME COMPLEXITY is O(log₂(n))

int binary(vector<int>& a , int left , int right , int target)
{
    if(left > right)
    {
        return -1;
    }
    int mid = (left + right) / 2;
    
    if(a[mid] == target)
    {
        return mid;
    }
    else if(target > a[mid])
    {
        return binary(a , mid+1 , right , target);
    }

    return binary(a , left , mid-1 , target);
}

int main()
{
    vector<int> a = {1,3,5,6,8,9,11,15,17};
    int target = 18;
    int n = a.size();
    cout<<binary(a , 0 ,n-1 , target);
    return 0;
}