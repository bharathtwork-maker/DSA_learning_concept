#include<bits/stdc++.h>
using namespace std;

int maximumsubarraysum(vector<int>& a)
{
    int maxi =INT_MIN;     //here if we use long long type then the int_min is LLONG_MIN
    int sum = 0;

    //this is kadanes algo
    for(int i=0 ; i<a.size() ; i++)
    {   
        sum += a[i];
        if(sum < 0)      //if sum is lesser than zero i.e -ve then we have to change the sum to 0 
        {
            sum = 0;
        }
        
        if(sum > maxi)     //if sum is greater than maxi then we give the maxi the value of sum
        maxi = sum;
    }
    return maxi;
}

int main()
{
    vector<int> a = {-2,-3,4,-1,-2,1,5,-3};

    cout<<maximumsubarraysum(a);
    return 0;
}