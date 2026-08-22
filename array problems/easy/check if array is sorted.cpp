#include<bits/stdc++.h>
using namespace std;
// Time Complexity is O(N) as we traverse through the array exactly once that is N times

bool sorted(int a[] , int n)
{
    for(int i =0 ; i<n-1 ; i++)
    {
        if(a[i] > a[i+1])       //we just check that if the element is always greater than the previous element if not then we have false
        return false;
    }
    return true;
}
int main()
{
    int n = 5;
    int a[n] = {1,2,4,3,6,6};
    if(sorted(a , n) == 1)
    cout<<"the array is sorted!";
    else 
    cout<<"the array is not sorted";
    return 0;

}