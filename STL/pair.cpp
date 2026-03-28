#include <bits/stdc++.h>
using namespace std;

int main(){
    pair <int , int > a = {23,85};
    cout<< a.first << "       " << a.second << endl;
    
    pair <int , pair <int , int >> b = {234 , {65,98}};
    cout << b.first << "      " << b.second.first << " "<< b.second.second << endl; 

    pair<float ,float > arr[]= {{32.56,6583.5},{98.56,325.657}};
    cout << arr[1].first << "      "<< arr[0].second ;
    return 0;
}