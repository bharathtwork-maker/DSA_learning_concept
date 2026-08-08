#include <bits/stdc++.h>
using namespace std;
//when we use unordered maps  the TC will be O(1) so we make use of unordered map
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
    unordered_map<int , int> m;
    for(int i=0;i<n ; i++){
        m[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){     //it runs exactly 5 times if the value of q is 5 it is because as the q becomes 0 then the cpp consider it 0 as false and terminates the while loop 
        int number ;
        cout<<"enter the number in the hashing method:\n";
        cin>>number ;
        //fetch
        cout<<m[number]<<'\n';

    }
    return 0;
}