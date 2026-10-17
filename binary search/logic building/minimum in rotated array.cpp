#include<bits/stdc++.h>
using namespace std;

int searchro(vector<int>& a)
{
    int low = 0 , high = a.size()-1;
    int minimum = INT_MAX;
    
    while(low <= high)
    {
        if(a[low] <= a[high]){
            minimum = a[low];
            break;
        }
        int mid = (low + high) / 2;
        minimum = min(minimum , a[mid]);

        if(a[low] <= a[mid])
        {
            minimum = min(minimum , a[low]);
            low = mid + 1;
        }
        else
        {
            minimum = min(minimum , a[mid]);
            high = mid-1;
        }
    }
    return minimum;
}

int main()
{
    vector<int> a = {5,1,2,3,4};

    cout<<searchro(a);
    return 0;
}