#include<bits/stdc++.h>
using namespace std;

//dutch flag algorithm

void sort012(vector<int>& a)
{
    int n = a.size();
    int low = 0 , mid = 0 , high = n-1;
    while(mid <= high)
    {
        if(a[mid] == 0)
        {
            swap(a[low] , a[mid]);
            mid++;
            low++;
        }
        else if(a[mid] == 1)
        {
            mid++;
        }
        else{
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