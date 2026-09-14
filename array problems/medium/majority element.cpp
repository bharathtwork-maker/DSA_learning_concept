#include<bits/stdc++.h>
using namespace std;

//moores voting algorithm

int majority(vector<int> a)
{
    int cnt = 0 , el;
    
    for(int i=0 ; i<a.size() ; i++)
    {
        if(cnt == 0)    //if cnt is 0 then we have to shift the el elment to the current element 
        {
            cnt = 1;    //obviosly cnt should be 1
            el = a[i];
        }
        
        else if(a[i] == el)   //if el is the same then we have to increment 
        cnt++;
        else               //else we have to decrement 
        cnt--;
    }

    //this is to verify that the el is the element which is majority so this does not account to TC or SC
    int cnt1 = 0;
    for(int i=0 ;i<a.size() ; i++)
    {
        if(a[i] == el)
        cnt1++;
    }

    if(cnt1 > (a.size()/2))
    {
        return el;
    }
    return -1;
}

int main()
{
    vector<int> a = {1,1,1,5,6,1,6,1};
    cout<<majority(a);
    return 0;
}