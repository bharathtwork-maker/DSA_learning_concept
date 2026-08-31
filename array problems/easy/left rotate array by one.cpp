#include<bits/stdc++.h>
using namespace std;

void left_rotate(int a[] , int n)   //this is the brute force approach
{
    int temp[n];
    temp[n-1] = a[0];
    for(int i=0 ; i<n-1; i++)
    {
        temp[i] = a[i+1];
    }
    for(int i=0 ; i<n; i++)
    {
        cout<<temp[i]<<" ";
    }
}

void leftrotate(int a[] , int n)  //this is the optimal way 
{
    int temp = a[0];
    for (int i=0; i<n; i++)
    {
        a[i-1] = a[i];
    }
    a[n-1] = temp;
    
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n = 5;
    int a[n] = {1,2,3,4,5};
   
    leftrotate(a , n);    
    return 0;

}