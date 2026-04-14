#include <bits\stdc++.h>
using namespace std;
/*for this please refer to the notebook because we have how to find the time complexity of certain things*/

int count(int n){
    int count = 0;
    while (n>0){
        int last_digit = n % 10;   //this line can also be skiped because it only say what is the last digit but when it comes to displaying the digits we can add this line 
        count = count + 1;
        n = n/10;
    }
    return count;
}
/*here the time complexity is O(log10(N)) this is because we are dividing the number by 10 and it varies as if we divide with 5 then TC will be O(log5(N))
  whenever we divide anything inside the iterative loop the time complexity will be O(log(N))*/

int main()
{
    int num;
    cout<<"enter the number to be count : \n";
    cin>>num;
    
    cout<<count(num);
    return 0;
}