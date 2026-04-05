/*
map is also stores element in sorted order
map  has an key and value where
       key ---> unique 
       value --->can be same 
 */

 #include <bits/stdc++.h>
 using namespace std;

 int main()
 {
    map<int , int> m;
    m.insert ({1 , 65});        // don't forget to use ({ })
    m.insert ({2,99});         // m.insert ({2,99}); also we can define it like this 
    m.insert ({3,25});
    m[4] = 85;           //this can be also done the 4 is the key and 85 is the value here //for pair defined as key or value can use this format as m[{2,86}] = 8 

    for (auto it : m){
        cout<<it.first << " " << it.second<< '\n';
    }
    cout<< endl;

    cout<< m[4];  //it gives the value for that key 
    cout<<endl;   

    auto f = m.find(3);   //here the f-> second means the value for that key 
    cout<< f->second  << endl;    //important!! we make use of dot operator for the direct access which means it is not related to pointer but the arrow or (*p).first are used for the iterator or pointer 
    m.erase (m.find(3));

    for (auto x : m){
        cout<< x.first << " "<< x.second <<'\n';
    }
    cout<<endl;
    m.erase(m.begin(),m.end());

    cout<<m.empty();
    if(m.empty())
    cout<<"the map is empty as we used erase function to delete all the element!"<<'\n';
    else 
    cout<< "the erase function is unsuccessful!";
    return 0;
 }