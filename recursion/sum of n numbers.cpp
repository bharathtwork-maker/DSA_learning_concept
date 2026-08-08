#include<bits/stdc++.h>
using namespace std;

int parameterised(int i, int sum)  //this is parameterised method to print the sum
{
    if (i<1){
    return sum;
    }
    return parameterised(i-1,sum+i);
}

int func(int n){
    if (n==0)
    return 0;
    return n + func(n-1);
}


int main(){
   cout<<parameterised(5,0);

   cout<<"\nthis is the output which is obtained from the function method :"<<func(5);
    return 0;
}