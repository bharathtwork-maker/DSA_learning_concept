#include <bits/stdc++.h>
using namespace std;
void names(int i, int n);

int main(){
    int n=3;
    names(1,n);
    return 0;
}

void names(int i,int n){
    if (i > n)
    return ;
    cout << "bharath" << " ";
    return names(i+1,n);
}