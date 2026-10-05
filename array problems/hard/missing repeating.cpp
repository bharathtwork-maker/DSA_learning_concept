#include<bits/stdc++.h>
using namespace std;
//missing and repeating number

// see notebook for clear understanding  !!!!!!important see note book 

// !!!!!!!!! must watch notebook

vector<int> missandrepeat(vector<int>& a)
{
    int n = a.size();
    long long s = 0 , sn = (n * (n+1)) /2;
    long long s2 = 0 , sn2 = (n * (n+1) * (2*n+1)) / 6;

    for(int i=0 ; i<n ; i++)
    {
        s += a[i];
        s2 += (long long)a[i] * (long long)a[i];
    }

    long long val1 = s - sn;    //x - y
    long long val2 = s2 - sn2;  //x + y   but actually x^2 - y^2
    val2 = val2 / val1;
    long long x = (val1 + val2) / 2;
    long long y = val2 - x;

    return {(int)x , (int)y};
}

int main()
{
    vector<int> a = {4,5,2,1,3,5};
    vector<int> res = missandrepeat(a);
    for(int i=0 ; i<res.size() ; i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}