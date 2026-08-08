#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the numbre of element to be in the array:";
    cin>>n;
    int a[n];
    cout<<"enter the array elements !"<<'\n';
    for (int i=0; i<n ; i++){
        cin>>a[i];
    }

    unordered_map<int , int> m;
    for (int i=0; i<n; i++){
        m[a[i]]++;
    }

    int maxelem= 0;
    int maxfreq = 0;
    int minelem = 0;
    //int minfreq = 0;  here if we use 0 what happens is the if loop in the for loop which has cond <minfreq so it doesn't execute the result will be 0 so we follow the below approach
    int minfreq = INT_MAX; 
    //INT_MAX is the largest number that is 2147483647 so no other number can be higher than that
    
    for (auto x : m){

        if(x.second > maxfreq){
            maxelem = x.first;
            maxfreq = x.second;
        }
        if (x.second < minfreq){
            minelem = x.first;
            minfreq = x.second;
        }
    }
    cout<<"the maximum element that is "<<maxelem <<" repeated for "<<maxfreq<<" times and the minimum element that is "<<minelem<<" repeated for "<<minfreq<<"times!";
    return 0;
}