#include<bits/stdc++.h>
using namespace std;

//dutch flag algorithm

void sort012(vector<int>& a)
{
    int n = a.size();
    int low = 0 , mid = 0 , high = n-1;
    while(mid <= high)                          //mid to high will be unsorted that is why we consider a[mid] to compare
    {
        if(a[mid] == 0)          //0 to low-1 it is 0
        {
            swap(a[low] , a[mid]);
            mid++;
            low++;
        }
        else if(a[mid] == 1)          //low to mid-1 it is 1
        {
            mid++;
        }
        else{                         //high+1 to n-1 it is 2
            swap(a[mid] , a[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> a = {0,1,2,0,1,2,1,2,0,0,0,1};

    sort012(a);
    
    for(int i=0 ; i<a.size() ; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}