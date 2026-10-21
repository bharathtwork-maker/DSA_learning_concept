#include<bits/stdc++.h>
using namespace std;

// !!!!!!!!!!!! important !!!!!!!!!!!!!!!  when ever some question has minimum or highest and also know with the range of the numbers to be found out then we have to use binary search

int sqroot(int x)
{
    int low = 1 , high = x;

    while(low <= high)
    {
        long long mid = low  + (high - low) / 2;
        long long val = mid * mid;

        if(val <= x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}

int main()
{
    int x = 38;
    cout<<sqroot(x);
    return 0;
}