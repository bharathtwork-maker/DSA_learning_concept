#include<bits/stdc++.h>
using namespace std;

int func(){
    static int x = 0;
    if (x==4){
        return x;
    }
    cout<<x<<" ";
    x++;
    return func();
}

int main()
{
    func();
    return 0;
}