#include <bits/stdc++.h>
using namespace std;
/*
void func(int a[], int i, int r, int n)
{
    if (i >= r)
    {
        for (int k = 0; k < n; k++)   // k < n, prints the full array
        {
            cout << a[k] << " ";
        }
        return;
    }

    int temp = a[i];
    a[i] = a[r];
    a[r] = temp;

    func(a, i + 1, r - 1, n);   // pass n forward unchanged
}

int main()
{
    int a[] = {12, 32, 63, 89, 35};
    int n = sizeof(a) / sizeof(a[0]);

    func(a, 0, n - 1, n);
    return 0;
}*/

void func(int a[],int i ,int n){
    if (i>=n/2) return;       //if the function reaches half then it starts returning 
    swap(a[i],a[n-i-1]);     //the first a[i] is the first element and for swaping to the corresponding element we use a[n-i-1]    
    func(a,i+1,n-1); 
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)cin>>a[i];
    func(a,0,n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}