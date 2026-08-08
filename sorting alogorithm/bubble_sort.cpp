#include<bits/stdc++.h>
using namespace std;
//bubble sort is where we compare the adjacent values and then swap if one is maximum to last i.e maximum to last

// IMPORTANT CHECK NOTES I HAVE MENTIONED IT VERY CLEARLY AND ALSO IN THE CODE IF DIDNT UNDERSTAND AND FOR TC SEE NOTES

void bubble(int a[],int n)
{
    int didswapped = 0;    //this is to optimize if all the element is in correct order then we dont need to swap as all the element will be greater than the other so the timecomplexit will be better 
    for(int i=n-1;i>=0 ; i--)
    {
        for(int j=0;j<=i-1 ; j++)   //why j<=i-1 because the last element will be checked in the last-1 iteration
        { 
            if (a[j]>a[j+1])  //swap
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                didswapped++;
            }
        }
        cout<<"runs"<<" ";          //this is to check how many times this program runs 
        if (didswapped == 0)   //if all the element is greater than the previos element the if statement i.e the swaping block will bot be perform and need not to check all the element by doing this we reduce the program and time complexity
        break;
    }
}
int main(){
    int n;
    cout<<"enter the number of element:";
    cin>>n;
    int a[n];
    for (int i=0 ; i<n;i++){
        cin>>a[i];
    }
    bubble(a,n);
    for (int i=0 ; i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
