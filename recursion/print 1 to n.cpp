#include <bits/stdc++.h>
using namespace std;

int printn(int i,int n);
/*
int main(){
    int n;
    cout<<"enter the value for n:";
    cin>>n;
    printn(i,n);
    return 0;
}

int printn(int i,int n){
    if (i>n){
    return 0;}
    cout<<i<<" ";
    return printn(i+1,n);
}*/

//this is method which is useful for understanding 
int main(){
    int n;
    cout<<"enter the value for n:";
    cin>>n;
    printn(n,n);
    return 0;
}

int printn(int i , int n)//make sure that last element should executes first
{
    if (i<1)
    return 0;
    printn(i-1,n); //why not return the function here is becoz if we return the function here the next line doesn't executes and terminates
    cout<<i<<" ";
    return 0;
}