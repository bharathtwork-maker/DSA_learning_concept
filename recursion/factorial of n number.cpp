#include<bits/stdc++.h>
using namespace std;

int fact(int i, int factorial)  //this is parameterised method to print the sum
{
    if (i<1){
    cout<<factorial;
    return 0;
    }
    return fact(i-1,factorial * i);
}

int fact1(int n){
    if (n==0)
    return 1;    //here the return value should be 1 otherwise it will always return 0 as the final result
    return n * fact1(n-1);
}


int main(){
   fact(5,1);

   cout<<"\nthis is the output which is obtained from the function method :"<<fact1(5);
    return 0;
}