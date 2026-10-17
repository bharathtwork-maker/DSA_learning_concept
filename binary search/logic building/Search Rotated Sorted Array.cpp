#include<bits/stdc++.h>
using namespace std;

int searchro(vector<int>& a , int target)
{
    int low = 0 , high = a.size()-1;
    
    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(a[mid] == target) return mid;

        if(a[low] < a[mid])          //this is to check whether left half of the array is sorted 
        {
            if(target >= a[low] && target <= a[mid])   //this is to check whether the target is present within the low and mid
            {
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else                  //this is to check whether right half of the array is sorted
        {
            if(target >= a[mid] && target <= a[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> a = {4,5,6,7,0,1,2,3};
    int target=0;
    cout<<searchro(a , target);
    return 0;
}