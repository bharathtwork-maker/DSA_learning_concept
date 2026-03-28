#include <iostream>
using namespace std;
/*1
  12                    for output like this we usually make use of this code 
  123
  1234
  12345*/                
void fun(int n)
{
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

/*1      for this kind of pattern we use the below code 
  22
  333
  4444
  55555*/
 
void fun1(int n)
{
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
/*12345
  1234     for this kind of pattern we make use of these formula 
  123       
  12         the formula is    j<= n-i+1          this it the formula to be remembered
  1                  for i=2 then the condition above will be (5-2)+1 = 4*/         
void fun2(int n){
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n-i+1;j++)            //if we start with  then the condition for the j <= n-i-1
        {
            cout << j;
        }
        cout << endl;
    }
}
 int main ()
 {
    int n=5;
    fun(n);
    
    return 0;
 }