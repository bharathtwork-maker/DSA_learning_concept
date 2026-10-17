#include<bits/stdc++.h>
using namespace std;
//There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).

bool searchro(vector<int>& a , int target)
{
    int low = 0 , high = a.size()-1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(a[mid] == target) return true;

        if(a[low] == a[mid] && a[mid] == a[high])      
        {
            low++;
            high--;
            continue;    //this is used to continuosly check until low and mid and high is not equal before going to down condition
        }

        if(a[low] <= a[mid])
        {
            if(target >= a[low] && target <= a[mid])
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        else
        {
            if(target >= a[mid] && target <= a[high])
            low = mid + 1;
            else
            high = mid - 1;
        }
    }
    return false;
}

int main()
{
    int target = 1;
    vector<int> a ={3,1,2,3,3,3,3,3};
    cout<<searchro(a , target);
    return 0;
}