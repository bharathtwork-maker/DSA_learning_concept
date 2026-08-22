#include<bits/stdc++.h>
using namespace std;

class easy
{
    public:
    void largest(int arr[] , int n)
    {
        int largest  = arr[0];
        for(int i=1 ; i<n;i++)
        {
            if(arr[i] > largest)
            largest = arr[i];
        }
        cout<<largest;
    }
    
};


int main()
{
    int n = 7;
    int a[n];
    for (int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    easy e;
    e.largest(a , n);   //place to change the function
    
    
    return 0;
}