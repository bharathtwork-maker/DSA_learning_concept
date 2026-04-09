#include <bits/stdc++.h>
using namespace std;
//this is important program because when every it comes to factor use sqrt method

int main(){
  /*this program runs fine but the TC is O(N) so we follow the different approach  
    int num = 36;

    for (int i=1 ; i<=num ;i++){
        if(num % i == 0)
        cout<<i<<" ";
    }*/


    //this is the program using sqrt or i*i because both the condition runs the loop till the median value(for ex 36 sqrt(36) and also 6*6 <= n)
    vector<int> divisor; //we use vector because here the number will be random so we need to sort so we take all the element in the vector and sort it
    int n = 36;
    for (int i=1; i*i /*or sqrt(n)*/<=n ;i++){
        if (n%i == 0)
        divisor.push_back(i);
        if (i != n/i)          //for i=6 we get n/i = 6 so the value is not repeated and this step is also used to display the other number like for i=1 then 1 and n/i=36 is also displayed so this way we reduce the steps
        divisor.emplace_back(n/i);
    }
    cout<<"vector before sorting:\n";
    for (auto it:divisor){      //the element are randomly displayed so we need to sort the vector
        cout<<it<<" ";         //here we use for each loop so we need not to represent *it
    }
    cout<<endl;
    sort(divisor.begin(),divisor.end());
    for (auto it:divisor){
        cout<<it<<" ";         //here we use for each loop so we need not to represent *it
    }
    return 0;
}