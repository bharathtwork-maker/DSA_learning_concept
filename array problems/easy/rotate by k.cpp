#include<bits/stdc++.h>
using namespace std;

/* this is brute force approach so here the TC is O(N+k) and SC is O(k) which is used by temp
void rotatebyk(int a[] , int n , int k)
{
    k = k % n;
    int temp[k] ;
    for(int i = 0 ;i<k ; i++)
    {
        temp[i] = a[i];
    }

    for(int i=k ; i<n ; i++)
    {
        a[i - k] = a[i];
    }

    for(int i=n-k ; i<n ; i++)
    {
        a[i] = temp[i - (n-k)];
    }
}*/


//optimal approach where we reverse the 2 part of array separately and then we reverse whole separately reversed array and we obtain the result
void rotatebyk(int a[] , int n , int k )
{
    reverse(a , a+k);     
    reverse(a+k , a+n );
    reverse(a , a+n);
}
//if we dont have reverse function we have to perform this block of code
void reverseit(int a[] , int start , int end)
{
    while(start <= end)
    {
        int temp = a[start] ;
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

void reverseito(int a[] , int n , int k)
{
    reverseit(a , 0 , k);
    reverseit(a , k+1 , n-1);
    reverseit(a , 0 , n-1);
}

int main()
{
    int n = 7;
    int a[n] = {1,2,3,4,5,6,7};
    int k = 3;
    rotatebyk(a , n , k);
    cout<<"rotated by k using stl"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;
    reverseito(a , n , k);
    cout<<"rotated by k using own function"<<endl;
      for(int i=0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;

}