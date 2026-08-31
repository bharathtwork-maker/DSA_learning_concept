#include<bits/stdc++.h>
using namespace std;

int linear(vector<int>& a , int num)
{
    for(int i=0 ; i<a.size() ; i++)
    {
        if(a[i] == num)
        return i;
    }
    return -1;
}
int main()
{
    int num;
    vector<int> a = {1,5,4,3,8,9,6,7,68};
    cin>>num;
    cout<< linear(a , num);
    return 0;
}