#include<bits/stdc++.h>
using namespace std;
//floor is the value which is largest value i.e <= x

//ceil is the value which is smallest value i.e >=x

//if the value is equal to x then that value is the floor and also the ceiling

pair<int , int> floor_ceil(vector<int>& a , int x)
{
    int left = 0 , right = a.size() -1 ;
    int floor = -1 , ceil =-1;

    while(left <= right)
    {
        int mid = (left + right) / 2;
        
        if(a[mid] == x)
        {
            return {x ,x};
        }
        else if(a[mid] < x)
        {
            floor = a[mid];
            left = mid + 1;
        }
        else
        {
            ceil = a[mid];
            right = mid - 1;
        }
    }
    return {floor , ceil};
}

int main()
{
    vector<int> a = {10,20,30,40,50,60};
    int x = 25;
    pair<int , int> ans = floor_ceil(a , x);
    cout<<"floor is "<<ans.first<<" and cieling is "<<ans.second;
    return 0;
}