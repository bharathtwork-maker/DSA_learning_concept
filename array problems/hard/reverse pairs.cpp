#include <bits/stdc++.h>
using namespace std;
//a pairs is considered to be an reverse pair only when the left element is greater than the square of the right element

// Merge two sorted halves
void merge(vector<int>& arr, int low, int mid, int high)
{
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.emplace_back(arr[left]);
            left++;
        }
        else
        {
            temp.emplace_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.emplace_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.emplace_back(arr[right]);
        right++;
    }

    // Copy merged elements back into original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

// Count reverse pairs
int countpairs(vector<int>& a, int low, int mid, int high)
{
    int cnt = 0;
    int right = mid + 1;

    for (int i = low; i <= mid; i++)
    {
        while (right <= high && a[i] > 2LL * a[right])
        {
            right++;
        }

        cnt += right - (mid + 1);
    }

    return cnt;
}

// Merge sort + reverse pair counting
int mergesort(vector<int>& arr, int low, int high)
{
    int cnt = 0;

    if (low >= high)
        return cnt;

    int mid = (low + high) / 2;

    cnt += mergesort(arr, low, mid);
    cnt += mergesort(arr, mid + 1, high);

    cnt += countpairs(arr, low, mid, high);

    merge(arr, low, mid, high);

    return cnt;
}

int main()
{
    vector<int> arr = {2, 4, 3, 5, 1};

    cout << mergesort(arr, 0, arr.size() - 1);

    return 0;
}