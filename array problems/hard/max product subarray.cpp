#include<bits/stdc++.h>
using namespace std;

//we will traverse from forward and backward from the array and keep on multiplying the element if the element becomes 0 then it indicates that there is a 0 in that position so we reinitialize the prefix and suffix to 1

//!!!! IMPORTANT !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

// !!!!!!! IMPORTANT !!!!!!!!  if you have a doubt about the working when we have three negatives then just traverse through the array once with pen and paper you will get an answer

int maxpro(vector<int>& a)
{
    int n = a.size();
    int prefix = 1 , suffix = 1;
    int ans = INT_MIN;

    for(int i=0 ;i<n ; i++)
    {
        if(prefix == 0)
        prefix = 1;
        if(suffix == 0)       //why do we also take suffix becasue we keep on multipling even if there was negative so after negative we can not calculate the product properly from the forward traverse so we also do backward so that we can get that product also
        suffix = 1;

        prefix *= a[i];
        suffix *= a[n-i-1];
        ans = max(ans , max(prefix , suffix));
    }
    return ans;
}

int main()
{
    vector<int> a = {2,3,-2,4};
    cout<<maxpro(a);
    return 0;
}