#include <bits/stdc++.h>
using namespace std;               //also refer claude for the better understanding in dsa project 

int main (){
    // inserting and printing the vector 
    vector <int> v;

    v.push_back(5);
    v.emplace_back(6);

    cout<< v[0] <<" "<< v[1];
    cout<<'\n';

    //using pairs in the vector 
    vector <pair<int,int>> v1;
    v1.push_back({2,1});
    v1.emplace_back(3,56);          //for the pair to be declared in vector and the emplace back there is no neccessary to include ({}) directly ()

    cout<< v1[0].first<<" "<< v1[1].second;
    cout << endl;


    vector<int> v2(5,28);          //it prints 28     5 times 
    for (auto it = v2.begin() ; it != v2.end(); it++)
    {
        cout<< *it << " ";                 //vector holds the address of the index so use a * dereference operator
    }
    cout << endl;

    vector <int> v3(v);           //it copies the value from the v vector and assign it to the v3 vector
    for (auto it = v3.begin(); it != v3.end(); it++)     //here auto is used instead of vector<int> :: iterator it is long so the auto data type is used 
    cout<< *it << " ";
    cout <<endl;
    //this is one more method which can be used to print using for each loop
    for (auto it : v3)
    cout << it << " ";

    cout << endl;
    cout<< v.back();        //it prints the last element of the vector 

    //for deleting the element in the vector 
    vector<int> v4(5,60);
 /* for (auto it = v4.begin(); it != v4.end(); it++){
        cout << "enter the element in the vector :";
        cin>>*it;
    }
    for (auto it = v4.begin(); it != v4.end(); it++){
        cout << *it << " ";
    }*/
    cout<< endl;
    v4.erase (v4.begin() + 1);     //this removes the 2nd element 
    v4.erase (v4.begin()+1,v4.begin()+3);          //we have to remember that v.erase(start,end) here end will be considered as end - 1 so the element before end will be deleted but the end element will not be deleted

    for (auto it = v4.begin(); it != v4.end(); it++){
        cout << *it << " ";
    }
    cout<<endl;
    
    vector<int> v5(5,100);
    v5.insert(v5.begin()+1,34);
    v5.insert (v5.begin(),2,50);
    for (auto it=v5.begin();it!=v5.end();it++){
        cout<< *it << " ";
    }
    cout<< endl;
    v5.insert (v5.begin(),v.begin(),v.end());

    for (auto it=v5.begin();it!=v5.end();it++){
        cout<< *it << " ";
    }
    cout<< endl;

    cout<< "the size of the vector v5 is :"<<v5.size();
    cout<<endl;

    v5.pop_back(); //removes the end element    

    for (auto it=v5.begin();it!=v5.end();it++){
        cout<< *it << " ";
    }
    cout<<endl;

    v5.clear();         //clears entire vector

    for (auto it=v5.begin();it!=v5.end();it++){
        cout<< *it << " ";
    }

    cout<<v5.empty(); //checks whether the vector is empty or not and answers in boolean digits that is 1 or 0

    return 0;
}
/*even list has same operation as vector

list <int> l;
l.push_back(5)
l.emplace_back(0)
l.push_front(2)
l.emplace_front(5)      //why are we using this is this emplace front is less costlier than using insert function in vector which is coslier
*/