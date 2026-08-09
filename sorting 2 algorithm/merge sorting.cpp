#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr,int low , int mid , int high)
{
    vector<int> temp;
    
    int left = low ;         //this is the arrow like imaginary thing where it points to left recursive calls elements 
    int right = mid+1;       //this is the arrow like imaginary thing where it points to right recursive calls elements

    while(left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])   //if left arrows element is less and then it is in correct position so emplace it to a temp
        {
        temp.emplace_back(arr[left]);
        left++;                         //increment the left so that the arrow point to the next element of the left recursive call element 
        }
        else
        {
        temp.emplace_back(arr[right]);    //if left arrows element is greater and then it is in wrong position so emplace right to a temp
        right++;                         //increment the right so that the arrow point to the next element of the right recursive call element
        }
    }
    while (left <= mid)           //if any extra element present in the left then emplace them too
    {
        temp.emplace_back(arr[left]);
        left++;
    }
    while(right <= high)               //if any extra element present in the right then emplace them too 
    {
    temp.emplace_back (arr[right]);
    right++;
    }

    for (int i = low; i <= high; i++)   //give the merged element to the arr from the temp
    {
            arr[i] = temp[i - low];
    }

}

void mergesort(vector<int>& arr ,int low ,int high)
{
    if (low >= high)
    return;
    int mid = (low + high) / 2;
    mergesort(arr , low , mid);     //left recursive call
    mergesort(arr, mid+1 ,high);    //right recursice  call
    merge(arr,low,mid,high);        //merge each recursice call
}

int main()
{
    vector<int> arr = {1,8,2,5,3,9,6};
    mergesort(arr,0,arr.size()-1);
    for (int x : arr)
    {
        cout<<x<<" ";
    }
    return 0;
}