#include <bits/stdc++.h>
using namespace std;

//time complexity here is O(2^n) as each recursion tree has 2 branches
int fib(int n){
    if (n<=1)
    return n;
    int last = fib(n-1);
    int slast = fib(n-2);
    return last + slast;
}

int main(){
    int n=5;
    cout<<fib(n);
    return 0;
}