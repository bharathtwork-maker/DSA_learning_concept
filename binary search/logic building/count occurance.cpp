#include<bits/stdc++.h>
using namespace std;

int counting(vector<int>& a , int x)
{
    auto first = lower_bound(a.begin() , a.end() ,x);
    if(first == a.end() || *first != x) return -1;

    auto last = upper_bound(a.begin() , a.end() , x);
    
    return (last - first);
}

int main()
{
    vector<int> a = {0,0,1,1,1,2,3};
    int target = 1;
    cout<<counting(a , target);
    return 0;
}