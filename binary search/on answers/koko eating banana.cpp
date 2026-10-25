#include<bits/stdc++.h>
using namespace std;

int maxi(vector<int>& a)      //to find the maximum element in the array instead of max_element(a.begin() , a.end()) we are using own function for it
{
    int maax = 0;
    for(int i=0 ; i<a.size() ; i++)
    {
        if(a[i] > maax)
        {
            maax = a[i];
        }
    }
    return maax;
}

long long total_hrs(vector<int>& a , int banana)
{
    long long total = 0 ;

    for(int i=0 ; i<a.size() ; i++)
    {
        total += ceil((double)a[i] / (double)banana);
    }
    return total;
}

int koko(vector<int>& a , int hr)
{
    int low = 1  , high = maxi(a);

    while(low <= high)
    {
        long long mid = low + (high - low) / 2;

        if(total_hrs(a , mid) <= hr)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    vector<int> a = {3,6,7,11};
    int hr = 8;
    cout<<koko(a , hr);
    return 0;
}