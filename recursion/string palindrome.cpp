#include <bits/stdc++.h>
using namespace std;
/*paindrome is a thing where when its reversed it should be same like malayalam*/

bool pal(int i,string &s){//why we are using & because here we dont modify the actual value so it is waste of memory to pass by value which creates a copy of it 
    if (i>=s.size()/2)    //refer notes for s.size operator 
    return true;
    if (s[i]!=s[s.size()-i-1])
    return false;
    return pal(i+1,s);
}

int main(){
    string s= "malayalam";
    
    if(pal(0,s)==true)
    cout<<"it is a palindrome string!";
    else
    cout<<"it is not a palindrome string!";
    return 0;
}