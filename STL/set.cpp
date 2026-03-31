#include <bits/stdc++.h>
using namespace std;
/* set --->  sorted and unique
   
   sorted means when we insert an element the greatest will be above 
   unique means the repeated value will not taken 

*/
int main(){
   set<int> st;
   st.insert (2);
   st.emplace(6);
   st.insert (8);
   st.insert (8);       //this value is skiped because the value should be unique so it just skips 
   st.emplace (65);

   auto i = st.find(6);
   cout<< *i<<endl;

   i = st.find(5);
   cout << *i <<endl; //if an element is not present in the set then it gives the end() value

   //proper use of find() function in set is to find whether the value is in the set or not 
   auto it =st.find(5);
   if (it !=st.end())
   cout<< "the number is found "<<endl;
   else
   cout<< "the element is not found "<< endl;

   st.erase(65);
   
   for (int x : st){
      cout<< x << " ";
   }
   cout<<endl;

   cout<<st.count(6);  //if element exist then it returns one or zero as the element only occurs once as the set stores unique value

   

   return 0;
}