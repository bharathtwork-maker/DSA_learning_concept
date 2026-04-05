#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int , int> a1 , pair<int , int> a2){      //here we have to copy the datatype and give pair1 and pair2 we dont need two pair
    if(a1.second < a2.second) return true ;
    if(a1.second > a2.second) return false;
    //if there are same then we have to compare first and in descending order 
    if (a1.first > a2.first) return true;
    if(a1.first < a2.first ) return false;
    return 0;
}

int main()
{
    vector <int> v;
    

    v.emplace_back(38);
    v.emplace_back(56);
    v.emplace_back(6);
    v.emplace_back(96);
    v.emplace_back(53);

cout<<"before sorting the vector:"<<'\n';
for(auto it = v.begin() ; it != v.end(); it++){
    cout<<*it << " ";
}
cout<<endl;

sort(v.begin(), v.end());  //this is the sorting algorthm which an stl supports
//sort(a , a+n)      for array we use this type of approach 

cout<<"after sorting vector"<<'\n';
for(auto it = v.begin() ; it != v.end(); it++){
    cout<<*it << " ";
}
cout<<endl;

sort(v.begin() , v.end() , greater<int>()); //this does the sorting in an descending order which is also an inbuilt comp 

cout<<"after sorting in descending order :";
for(auto it = v.begin() ; it != v.end(); it++){
    cout<<*it << " ";
}
cout<<endl;

/* from here we use comp for sorting in our way that how ever we wish*/

pair<int , int> a[]={{1,2} , {2,1} , {4,1}};
//sort it according to the second element
//if second element are same then sort it according to the first element but in descending
int n=sizeof(a)/sizeof(a[0]);
sort(a,a+n,comp);    //here comp is the self written comparator and its in the form bool and its an boolean function

for (int i=0; i<n ; i++){
    cout<< a[i].first <<" "<<a[i].second << endl;
}
cout<< endl;

//built in popcount which returns the binary bits of an number 

int num= 7;
int cnt= __builtin_popcount(num);   //for 7 binary bits is 111 so it returns 3
cout<<cnt<<'\n';
long long num1 = 63256488336385;
int count = __builtin_popcountll(num1);  //for long long datatype we use popcountll here ll is important
cout<<count<<'\n';

//for permutation we use this stl
string s="123";   //here the permutation is 123 , 132 ,231,213,312,321 
do {
    cout<< s <<" ";     //but here we have an issue if we start the number from 312 then it only prints 312 and 321 so we need to sort it after the string
}while (next_permutation(s.begin() , s.end()));
cout<<endl; 

//this is how we sort
string s1="321"; 
cout<<"for sorting and permutating we started with "<<s1<<": ";

sort(s1.begin(),s1.end());
do{
    cout<<s1<<" ";
}while (next_permutation(s1.begin(),s1.end()));
cout<<endl;

//to find the maximum element in an array or any other datarype
int a1[] = {32,65,59,598,35,85};
int n1 = sizeof (a1)/sizeof(a1[0]);
int maxi = *max_element(a1 , a1+n1);
cout<<"the maximum element is : "<<maxi <<endl;
int min = *min_element(a1,a1+n1);
cout<<"the minimum element is: "<<min;

return 0;
}