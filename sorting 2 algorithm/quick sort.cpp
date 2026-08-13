#include<bits/stdc++.h>
using namespace std;
// pick an pivot it can any element from an arr and arrange smaller to right and larger to left 

int partition(vector<int>& a , int low ,int high)
{
    int pivot = a[low];       //we choose pivot as the first element
    int i = low ;      //we assign i to lower index
    int j = high ;      // we assign j to higher index

    while (i < j)
    {
        while (a[i] <= pivot && i <= high - 1)   //if any element higher than the pivot then we have to stop and go to j
        {
            i++;   //if not then we have to move the i pointer to forward
        }
        while (a[j] >= pivot && j >= low +1)     //if any element is lower than the pivot then we have to stop and swap the i to j
        {
            j--;    //if not then we have to move j to backwards that is we go to lower index
        }
        if (i < j)
        swap(a[i] , a[j]);      //here it is to swap the i and j
    }

    swap(a[low] , a[j]);   //here we have choose the first index as the pivot so the pivot will be in the low so we have to swap the low to j so that we could place the pivot in the correct position 

    return j;   //we have to return the value of pivot 
}

void qs(vector<int>& a , int low , int high)
{
    if (low < high)
    {
        int partition_index = partition(a , low , high);   //this is to find the actual position for pivot 

        qs(a , low ,partition_index-1);   //this is to the element that is lower than the pivot 

        qs(a , partition_index+1 , high);    //this is to the element that is higher than the pivot 
    }
}
int main()
{
    vector<int> a ={10,5,1,4,8,6,5,9};
    qs(a , 0 , a.size()-1);

    for (int it : a)
    {
        cout<<it<< " ";
    }
    return 0;
}