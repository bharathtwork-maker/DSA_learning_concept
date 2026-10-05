#include<bits/stdc++.h>
using namespace std;
//see video
//an pair is considered to be an inversion only when the left element is > the right element then cnt will be increment by one

int merge(vector<int>& a , int low , int mid , int high)
{
    int left = low , right = mid+1;
    vector<int> temp;
    int cnt = 0;
    
    while(left<=mid && right<=high)
    {
        if(a[left] <= a[right])
        {
            temp.push_back(a[left]);
            left++;
        }
        else
        {
            temp.push_back(a[right]);
            cnt += mid - left +1;         //we add all the element after it because when the element is the greater then it can form a pair 
            right++;
        }
    }
    while(left <= mid)
    {
        temp.push_back(a[left]);
        left++;
    }
    while(right <= high)
    {
        temp.push_back(a[right]);
        right++;
    }

    for(int i=low ; i<=high ; i++)
    {
        a[i] = temp[i-low];
    }
    return cnt;
}

int mergesort(vector<int>& a ,int low ,int high)
{
    int cnt = 0;
    if(low >= high)
    return cnt;
    int mid = (low + high) / 2 ;
    cnt += mergesort(a , low , mid);
    cnt += mergesort(a , mid+1 ,high);
    cnt += merge(a , low , mid , high);
    return cnt;
}

int main()
{
    vector<int> a = {5,3,2,1,4};
    cout<<mergesort(a , 0 , a.size()-1);
    return 0;
}