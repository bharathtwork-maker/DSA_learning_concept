#include<bits/stdc++.h>
using namespace std;

//there are 3 rule for this
/*
1. find the break point that is longer prefix match  like  a[i] < a[i+1] and assign the a[i] to ind

2.find the element which is > ind but the lowest one of the array greater than the ind

3.and make sure to reverse the array after the ind element so that we get the lowest after swaping the array 
*/

vector<int> nextpermu(vector<int> a)
{
    int ind = -1;
    int n = a.size();

    for(int i=n-2 ; i>=0 ; i--)   
    {
        if(a[i] < a[i+1])
        {
            ind = a[i];
            break;
        }
    }

    if(ind == -1)
    {
        reverse(a.begin() , a.end());
        return a;
    }

    for(int i=n-1 ; i>ind ; i--)
    {
        if(a[i] > ind)
        {
            swap(a[i] , a[ind]);
            break;
        }
    }

    reverse(a.begin() + (ind + 1) , a.end());
    return a;
}

int main()
{
    vector<int> a = {2,1,5,4,3,0,0};
    vector<int> res=nextpermu(a);
    for(int i=0 ;i<res.size() ; i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}