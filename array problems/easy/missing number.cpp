#include<bits/stdc++.h>
using namespace std;

int missing(vector<int>& a)
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
int main()
{
    vector<int> a = {1,5,3,2,4,7};
    cout<<missing(a);
    return 0;
}