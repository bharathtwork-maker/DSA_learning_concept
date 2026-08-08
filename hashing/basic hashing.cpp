#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of element for the array:\n";
    cin>>n;
    int a[n];

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"entered for the hashing elements!\n";
    //pre computation
    int hash[13]={0};    //we assume 13 is the max number in the array pls look through the book for the max element allowed and we initialize all the element with zero
    for(int i=0; i<n ; i++){
        hash[a[i]] += 1;
    }
    int q;
    cin>>q;
    while(q--){  //for q=5 the first loop will be 5 and then it decrease to 4 and so on
        int number ;
        cout<<"enter the number in the hashing method:\n";
        cin>>number ;
        //fetch
        cout<<hash[number]<<'\n';

    }
    return 0;
}