#include<bits\stdc++.h>
using namespace std;
//pick a element that is in the first index and then compare it with the previos element and the swap it till the element goes to the correct position

void insertion(int a[] , int n)
{
    for (int i=0;i<=n-1;i++)
    {
        int j = i;
        while(j>0 && a[j-1]>a[j])
        {
            int temp = a[j-1];
            a[j-1] = a[j];
            a[j] = temp; 
            j--;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insertion(a,n);
    for (int i=0 ; i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}