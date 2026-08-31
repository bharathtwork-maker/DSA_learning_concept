#include<bits/stdc++.h>
using namespace std;
//the TC is O(n1+n2)  and space complexity is O(1)  but for returning the answer O(n1+n2)

/*
vector<int> unioning(vector<int>& a , vector<int>& b)     //this is brute force approach
{
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;             //  when ever we want unique then we make use of set or map
    for(int i=0 ; i<n1 ; i++)
    {
        st.insert(a[i]);        //take the first array elements into set 
    }
    for(int i=0 ; i<n1 ; i++)
    {
        st.insert(b[i]);         //take the second array elemenet into set
    }

    vector<int> temp;      //we are taking the set element which will be already sorted and unique elements will be there 
    for(auto it : st)
    {
        temp.emplace_back(it);
    }

    for(auto it:temp)
    {
        cout<<it<<" ";
    }

    return temp;
}*/

vector<int> unioning(vector<int>& a , vector<int>& b)
{
    int n1 = a.size();
    int n2 = b.size();

    vector<int> unionarr;
    
    int i = 0;    //this is a pointer for a array
    int j = 0;    //this is a pointer for b array

    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
        {
            if( unionarr.size() == 0 || unionarr.back() != a[i] )  //unionarr.size() == 0 is because in case of we are having 0 as a first element in array then there a chance of being equal to the array and union array element so we need to add that constrain 
            {
                unionarr.emplace_back(a[i]);         //why unionarr.back() != a[i]  because as we know the array will be sorted so the number will be always greater than the array further added so we ensure that the previous element is not the same 
                
            }
            i++;
        }
        else
        {
            if(unionarr.size() == 0 || unionarr.back() != b[j])
            {
                unionarr.push_back(b[j]);
                
            }
            j++;
        }
    }
    
    while(j < n2)              //what if j is still there while i is finished going through the array
    {
         if(unionarr.size() == 0 || unionarr.back() != b[j])
            {
                unionarr.push_back(b[j]);
                
            }
            j++;
    }
    
    while(i < n1)   //when i is still left j is finished going throguh the array
    {
         if(unionarr.size() == 0 || unionarr.back() != a[i])
            {
                unionarr.push_back(b[j]);
            }
            i++;
    }
    return unionarr;
}

int main()
{
    vector<int> a = {1,1,2,5,8,9};
    vector<int> b = {1,5,8,9,11,35,68};

    vector<int> uni = unioning(a , b);

    for(auto it : uni)
    {
        cout<<it<<" " ;
    }
    return 0;
}