#include<bits/stdc++.h>
using namespace std;

int num(vector<int>& a)   //optimal if you want brute and better see video
{
    int xorr = 0;
    for(int i=0 ; i<a.size() ; i++)   //same element then the xor will be 0 
    {
        xorr = xorr ^ a[i];         //if the element is not same then the value of xor will be the element itself
    }
    return xorr;
}

int main()
{
    vector<int> a = {1,1,2,2,3,3,4,5,5};

    cout<<num(a);
    return 0;
}