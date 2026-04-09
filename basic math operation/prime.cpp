#include<bits/stdc++.h>
using namespace std;


int main(){
    int number = 5;
    int cnt = 0;
    for (int i=1 ; i*i <= number; i++){
        if (number % i == 0){
            cnt++;
        }
        if(number/i != i){
            cnt++;
        }
    }
    if (cnt == 2)
    cout<<"the number is an prime number !";
    else 
    cout<<"the number is not an prime number !";
    return 0;
}