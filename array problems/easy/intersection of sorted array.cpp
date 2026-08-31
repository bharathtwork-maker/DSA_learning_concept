#include<bits/stdc++.h>
using namespace std;


vector<int> inter(vector<int>& a , vector<int>& b)
{
    int n1 = a.size();
    int n2 = b.size();

    vector<int> intersect;
    int i = 0 ;
    int j =0 ;
    
    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
        {
            i++;
        }
        else if(b[j] < a[i])
        {
            j++;
        }
        else
        {
            intersect.push_back(a[i]);
            i++;
            j++;
        }
    }
    return intersect;
}
int main()
{
    vector<int> a = {1,1,2,5,8,9};
    vector<int> b = {1,5,8,9,11,35,68};

    vector<int> intersect = inter(a , b);

    for(auto it : intersect)
    {
        cout<<it<<" ";
    }

    return 0;
}