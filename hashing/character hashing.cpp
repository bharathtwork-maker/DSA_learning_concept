#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"enter the string character:"; //here the input will consist of a b c d ....... z so we need a hash array of 26
    cin>>s;


    //this method does not fit to capital letter so we have to make use of 256 because we have only 256 character in the ascii so we can make use of it so that we can also compute the data even for capital letter 
    //pre computation
   /* int hash[26]={0};
    for (int i=0; i<s.size();i++)
    {
        hash[s[i] - 'a'] += 1; //why we are using s[i]-a is the character are in ascii so the value of a is 97 and f is 102 so if we subtract the f - a we get the index as 5 so the value is stored there and again we do it in the while because while fetching also we need the index for that pupose we do it again 
    }

    int q;
    cin>>q;
    
    while(q--){
        char ch;
        cout<<"enter the character which has to found out how many times it have been repeated!\n";
        cin>>ch;

        cout<<hash[ch-'a']<<'\n';
    }
    */
   int hash[256]={0};
    for (int i=0; i<s.size();i++)
    {
        hash[s[i]] += 1; //here we can remove s[i] - a because we the corresponding character is get stored in the same index for ex: a has 97 so the index will be 97 itself
    }

    int q;
    cin>>q;
    
    while(q--){
        char ch;
        cout<<"enter the character which has to found out how many times it have been repeated!\n";
        cin>>ch;

        cout<<hash[ch]<<'\n';
    }
    return 0;
}