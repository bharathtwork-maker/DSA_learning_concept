#include<bits/stdc++.h>
using namespace std;

// !!!IMPORTANT !!!!!!!!!!!!! look at the book there is more important thing about the time complexity must watch

double multiply(double mid , double n)
{
    double pro = 1.0;
    for(int i=1 ; i<=n ; i++)
    {
        pro = pro * mid;
    }
    return pro;
}

double squareroot(int n , int m)
{
    double low = 1.0 , high = m;
    double eps = 1e-6;         //this is for precesion setting so if we want 5 digit precision then we specify this like 10^-6

    while((high - low) > eps)
    {
        double mid = (low + high) / 2;

        if(multiply(mid , n) < m)
        {
            low = mid;
        }
        else 
        {
            high = mid;
        }
    }
    return high;  // or low;
}

int main()
{
    int n = 3, m = 27;
    cout<<squareroot(n , m);
    return 0;
}