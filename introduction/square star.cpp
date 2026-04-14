#include <iostream>
using namespace std;


/* it's done in the main function
int main ()
{
    int n = 5;
    for (int i=1 ; i <= n; i ++)
    {
            for (int j=1 ; j <= n; j ++)
            {
                cout <<"*";
            }
            cout << "\n";

    }
    return 0;
}*/


void fun(int n)
{
    for (int i = 1 ; i <= n; i ++)
    {
        for (int j=1; j<=n; j++){
            cout << "*";
        }
        cout << "\n";
    }
    
}

int main(){
    int n = 5;
   
    fun (n);
    return 0;
}