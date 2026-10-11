#include<bits/stdc++.h>
using namespace std;

vector<int> first_last_bound(vector<int>& a, int x)   // the simple logic behind this upper and lower bound is the first occurence will be from the lower bound and the last occurance will be from the upper bound and we do -1 as the upper bound gives us greater than the target element
{
    auto first = lower_bound(a.begin() , a.end() , x);

    if(first == a.end() || *first != x) return {-1 , -1};
    
    auto last = upper_bound(a.begin() , a.end() , x);
    
    return {(int) (first - a.begin()) , (int) (last - a.begin() - 1)};
}

vector<int> first_last(vector<int>& a, int x)
{
    int left =0 , right = a.size()-1;
    int first = -1 , last = -1;

    while(left <= right)
    {
        int mid = (left + right) / 2;
        
        if(a[mid] == x)
        {
            first = mid;
            right = mid-1;
        }
        else if(a[mid] < x)
        {
            left = mid+1;
        }
        else 
        {
            right = mid-1;
        }
    }

    left =0 , right = a.size()-1;
    while(left <= right)
    {
        int mid = (left + right) / 2;
        
        if(a[mid] == x)
        {
            last = mid;
            left = mid+1;
        }
        else if(a[mid] < x)
        {
            left = mid+1;
        }
        else 
        {
            right = mid-1;
        }
    }
    return {first , last};
}

int main()
{
    vector<int> a = {5,7,7,8,8,10};
    int x = 8;
    cout<<"using binary search\n";
    vector<int> ans = first_last(a , x);
    for(auto it:ans)
    {
        cout<<it<<"  ";
    }
    cout<<"\nusing lower and upper bound\n";
    vector<int> ans1 = first_last_bound(a , x);
    for(auto it:ans1)
    {
        cout<<it<<"  ";
    }
    return 0;
}