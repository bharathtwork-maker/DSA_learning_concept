#include<bits/stdc++.h>
using namespace std;

int buysell(vector<int>& a)
{
    int profit = 0 , mini = a[0];
    int cost;

    for(int i =0 ; i<a.size() ; i++)
    {
        cost = a[i] - mini;        //we have to check with the selling cost everytime we iterate
        profit = max(profit , cost);   //we have to set the max of profit by using cost 
        mini = min(mini , a[i]);       //we have to update the value for min so that we get minimum price of stock overall while we iterate
    }
    return profit;
}

int main()
{
    vector<int> a = {7,1,5,3,6,4};
    cout<<buysell(a);
    return 0;
}