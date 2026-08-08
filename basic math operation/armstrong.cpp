#include<bits/stdc++.h>
using namespace std;
//the cube of each digit of an number is same as the original number
int main()
{
    int num = 371;
    int temp = num;
    int sum = 0 ;
    while (num > 0){
        int ld = num % 10;     //this gives the last digit of the number
        sum = sum + (ld * ld * ld);
        num = num / 10;    //this returns the number excluding the last digit
    }
    if(sum == temp) cout <<"armstrong number.";
    else cout<<"Not an armstrong number.";
    return 0;
}