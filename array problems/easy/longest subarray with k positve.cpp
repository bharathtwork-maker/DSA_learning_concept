#include<bits/stdc++.h>
using namespace std;

int longestsubarr(vector<int> a , long long k)   //go and if exceeds then trim the left 
{
    int left =0 , right = 0;
    long long sum = a[0];
    int maxlen = 0;
    int n = a.size();

    while(right < n)
    {
        while(left <= right && sum > k)   //if sum is greater then we have to trim the left most element 
        {
            sum -= a[left];    //while we are trim the left most then the left most elements sum should also be trimmed
            left++;            //increase the left pointer
        }

        if(sum == k)
        {
            maxlen = max(maxlen , right - left + 1);
        }

        right++;
        if(right < n)          //if right is less than n then we have to add the right element to the sum value 
        sum += a[right];
    }
    return maxlen;
}

int main()
{
    vector<int> a={1,2,3,1,1,1,1,3,3};
    long long k=6;

    cout<<longestsubarr(a , k);

    return 0;
}