#include<bits/stdc++.h>
using namespace std;
//return the index of the minimum of the array then we will get how many times the array is rotated
//this is for right rotated array 
//every time when they ask about rotated we have to perform right rotated untill they specify left

int times(vector<int>& a)
{
    int low = 0 , high = a.size()-1;
    int mini = INT_MAX;
    int index = -1;

    while(low <= high)
    {
        long long mid = low + (high - low) / 2;

        if(a[low] <= a[high])
        {
            if(a[low] < mini)
            {
                mini = a[low];
                index = low;
            }
            break;
        }

        if(a[low] <= a[mid])
        {
            if(a[low] < mini)         //instead of min(mini , a[low]) we also update mini and index at same time using this if statement
            {
                mini = a[low];
                index = low;
            }
            low = mid + 1;
        }
        else{
            if(a[mid] < mini)
            {
                mini = a[mid];
                index = mid;
            }
            high = mid - 1;
        }
    }
    return index;
}

int main()
{
    vector<int> a = {3,4,5,1,2};
    cout<<times(a);
    return 0;
}