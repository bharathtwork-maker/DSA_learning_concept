#include <bits/stdc++.h>
using namespace std;
//when we use maps  the TC will be log(N) so we make use of unordered map
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
    map<int , int> m;   
    for(int i=0;i<n ; i++){
        m[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){ 
        int number ;
        cout<<"enter the number in the hashing method:\n";
        cin>>number ;
        //fetch
        cout<<m[number]<<'\n';

    }
    return 0;
}