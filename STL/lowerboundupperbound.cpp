/*https://www.youtube.com/watch?v=edJ19qIL8WQ*/

//watch the above video for the better understanding 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[]={2,6,6,9,10,12};
    int n = sizeof(a) / sizeof (a[0]);

    if (binary_search(a , a+n , 6)){
        cout<<"the element is found in the array"<<endl;
    }
    else{
        cout<< " element is not found in the array.";
    }

    //binary search for vector
    vector<int> v={5,6,9,11,13};

    if (binary_search(v.begin(),v.end(),7)){
        cout<< "element is found in the vector ";
    }
    else{
        cout<<"element is not found in the vector";
    }
    cout<< endl;

    int arr1[]={1,2,6,8,11,13};
    vector<int>v2={1,2,6,8,11,13};
    n = sizeof(arr1) / sizeof(arr1[0]);

    int ind = lower_bound (arr1, arr1+n , 100535) - arr1;  //this is for the array lowerbound 

    auto ind1 = lower_bound (v2.begin() , v2.end() , 6) - v2.begin();  //this is for the vector lowerbound 
    cout<< "lower bound array: "<<ind <<'\n';
    cout<< "lower bound verctor: "<<ind1 <<'\n';

    int ind2 = upper_bound(arr1, arr1+n, 6) - arr1;
    cout<< "upperbound array: "<<ind2 <<'\n';

    auto ind3 = upper_bound(v2.begin() , v2.end() , 0) - v2.begin();
    cout << "upper bound vector: "<< ind3 <<'\n';

    return 0;
}