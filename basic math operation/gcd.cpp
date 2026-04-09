#include <bits/stdc++.h>
using namespace std;
// important! see the note for more knowledge 
int main()
{
    int a = 9 , b = 12;
    while (a>0 && b>0){
        if (a > b) a = a%b;
        else b= b%a;
    }
    if (a == 0) cout<<b;
    else cout<<a;
    return 0;
}