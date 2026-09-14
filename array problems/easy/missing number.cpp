#include<bits/stdc++.h>
using namespace std;

int missing(vector<int>& a)    // this has TC is O(N^2) and space complexity is O(1)
{
    int n = a.size()+1;

    for(int i=1 ; i<=n ; i++)   //this is we run till each digit we could possibly get for the size of the array
    {
        bool found = false;
        for(int j=0 ; j<a.size() ; j++)   //this is to check with what we got in the actual array;
        {
            if(a[j] == i)
            {
                found = true;
                break;
            }
        }
        if(found == false)
        {
            return i;
        }
    }
    return -1;
}

int missingbetter(vector<int>& a)  //the SC = O(N) and TC is O(N)
{
    int n = a.size()+1;
    int hash[n] = {0};
    
    for(int i=0 ; i<a.size() ; i++)
    {
        hash[a[i]]++;
    }
    for(int i=1 ; i<=n ; i++)
    {
        if(hash[i] == 0)
        return i;
    }
    return -1;
}

int missingoptimal(vector<int>& a)   //sum approach
{
    int sum = 0;
    int n = a.size()+1; 
    int nsum = (n * (n+1)) / 2;    //this is the formula for sum of N natural numbers
    for(int i=0 ; i<a.size() ;i++)
    {
        sum = sum + a[i];      //this is the sum of the total array elements
    }
    return nsum - sum;  //here we get the actual number which is missing
}

int main()
{
    vector<int> a = {1,5,3,4,6,7};
    cout<<missing(a)<<endl;
    cout<<missingbetter(a)<<endl;  
    cout<<missingoptimal(a);  
    return 0;
}