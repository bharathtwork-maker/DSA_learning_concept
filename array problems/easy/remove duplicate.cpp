#include<bits/stdc++.h>
using namespace std;
//we use 2 pointer approach where i will be pointing at first index if anything is equal then the value of i will be the same 
//if the elements are not equal then we give the location of i+1 to the j and we move i to +1 and so on

int duplicate(int a[] , int n)
{
    int i = 0 ;
    for (int j=1 ; j<n; j++)
    {
        if(a[i] != a[j])
        {
            a[i+1] = a[j];
            i++;
        }
    }
    return i+1;          //here the i will be in the last digit after removing duplicate then the we willdo i+1 so that we get correct number in the array
}

int main()
{
    int n = 7;
    int a[n] = {1,1,2,2,2,3,3};
    cout<<duplicate(a , n);     //we obtain output as 3 as we have 3 unique element
    return 0;
}