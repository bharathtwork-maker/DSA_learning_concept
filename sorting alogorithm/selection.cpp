#include<bits/stdc++.h>
using namespace std;
//selection sort is the method where we get the minimum value of all the element and swap them with the first element and so on

void selection_sort(int a[] , int n)
{
  for (int i=0; i<= n-2; i++)  //this loop runs till n-2 as the last element will be sorted before it goes to it
  {
    int min = i;     //this is to fix an element so that it can be compared with the other 
    for (int j=i; j<=n-1; j++)     //this loop should run till last as it has to test all the element in all the index
    {
        if(a[j] < a[min])
        min = j;                      //this loop is to compare i to all the element
    }
    int temp = a[min];  //swaping 
    a[min] = a[i];
    a[i] = temp;
  }
}
int main(){
    int n;
    cout<<"enter the number of element of an array:";
    cin >> n ;
    int a[n] ;
    for (int i = 0; i<n; i++){
        cin >> a[i];
    }
    selection_sort(a,n);
    for (int i=0 ; i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}