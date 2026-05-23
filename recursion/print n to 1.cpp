#include <bits/stdc++.h>
using namespace std;

int printrev(int n,int i);

int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    printrev(n,1);
    return 0;
}

int printrev(int n,int i){
    if(n<i)
    return 0;
    cout<<n<<" ";
    return printrev(n-1,i);
}