#include<bits/stdc++.h>
using namespace std;

/*  //this is brute force approach 
void zero(vector<int>& a)                  TC will be O(2N)   and space complexity will be O(non_zero) or O(N) in the worst case
{
    vector<int> temp;
    for(int i=0 ; i<a.size() ; i++)
    {
        if(a[i] != 0)
        {
            temp.emplace_back(a[i]);
        }
    }
    int non_zero = temp.size();
    for(int i = 0 ; i < non_zero ; i++)
    {
        a[i] = temp[i];
    }

    for(int i=non_zero ; i < a.size() ; i++)
    {
        a[i] = 0;
    }
    
}*/

//this is optimal approach 
vector<int> zero(vector<int>& a )    //we follow 2 pointer approach
{
    int j = -1;
    for(int i=0 ; i<a.size() ; i++)    //in this loop we set the first occuring 0 to j
    {
        if(a[i] == 0)
        {
            j = i ;
            break;
        }
    }
    if(j==-1)
    return a;           //if no value of 0 then return the array 

    for(int i = j+1 ; i < a.size() ; i++)   //this loop where we place i to infront of j and follow the following 
    {
        if(a[i] != 0)
        {
            swap(a[i] , a[j]);     //if i is not a non 0 number then we have to swap it to the jth position and then increment the value of j and so on 
            j++;           //the thing is the j should always be 0
        }
    }
    return a;
}

int main()
{
    vector<int> a = {1,0,5,0,4,4,0,25,0};

    zero(a);

    for(int i=0 ; i<a.size() ; i++)
    {
        cout<<a[i]<<" " ;
    }
    return 0;

}