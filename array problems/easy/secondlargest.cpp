#include<bits/stdc++.h>
using namespace std;  
// Time Complexity is O(N)  as it only traverse through the array once that is n times

int secondlargest (int arr[] , int n)
{
    int largest = arr[0];
    int slargest = INT_MIN;
    
    for (int i=1 ; i<n ; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest ;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest)   //why do we use this statement becuase there can be second largest element even after the largest element so after the largest element we have to check for the next largest element so we use this statement
        {
            slargest = arr[i];
        }
    }
    return slargest;
}

//same for second smallest but the signs will be changed and we use INT_MAX

int main()
{
    int n=5;
    int a[n] = {8 ,2,3,4,8};    //see here we have the second largest element after the largest element so we use the above else if statement
    cout<<secondlargest(a , n);
    return 0;
}