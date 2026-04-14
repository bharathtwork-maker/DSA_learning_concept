#include <bits/stdc++.h>
using namespace std;
//the reverse of the number is same as the original number 
int main(){
    int num = 5379;
    int temp = num;
    int rev = 0;

    while (temp > 0){
        int ld = temp % 10;
        rev = (rev * 10) + ld;
        temp = temp / 10;
    }
    if (rev == num){
        cout<<"the number is an palindrome number that is the og num is "<<num<<" and the reversed number is "<<rev<<'\n';
    }
    else{
        cout<<"the number is not an palindrome number that is the og num is "<<num<<" and the reversed number is "<<rev<<'\n';
    }

    return 0;
}