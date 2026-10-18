#include<bits/stdc++.h>
using namespace std;
//  !!!!!!!!!!!!!!!!!IMPORTANT  see notebook for better understanding if you dont know the logic here

int single(vector<int>& a)
{
    int n = a.size();
    int low = 1 , high = n-2;            //we trim down to solve the edge case

    if(n == 1) return a[0];

    if(a[0] != a[low]) return a[0];

    if(a[n-1] != a[high]) return a[n-1];

    while(low <= high)
    {
        long long mid = low + (high - low) / 2;

        if(a[mid+1] != a[mid] && a[mid-1] != a[mid])
        {
            return a[mid];
        }

        if(( mid % 2 == 0 && a[mid - 1] == a[mid]) || ( mid % 2 == 1 && a[mid + 1]))    //  (odd , even) --> then the element will be in the left half
        {
            high = mid - 1;
        }
        else                                                                            // (even , odd) --> then the element will be in the right half
        {
            low = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> a = {1,1,2,3,3,4,4,8,8};
    cout<<single(a);
    return 0;
}