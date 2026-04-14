#include <bits/stdc++.h>
using namespace std;
/*in multiset it stores in sorted method but it can store unique value unlike set */
/*
int main()
{
    multiset<int>ms;
    ms.insert(35);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.emplace(38);

    for (int x : ms){
        cout<< x << " ";
    }
    cout<<endl;
    ms.erase(2);   //here it erases all the 2's in the set 

    int c = ms.count(2);
    cout<< c <<endl;

    ms.erase(ms.find(2));
    

    for (int i : ms){
        cout<< i << " ";
    }
    cout<<endl;

    return 0;
}*/

int main()
{
    multiset<int> ms;
    ms.insert(35);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.emplace(38);

    // Print all elements
    cout << "Initial multiset: ";
    for (int x : ms) {
        cout << x << " ";
    }
    cout << endl;  // Output: 2 2 2 35 38

    // Count occurrences of 2 BEFORE erasing
    int c = ms.count(2);
    cout << "Count of 2: " << c << endl;  // Output: 3

    // Erase only ONE occurrence of 2 using find()
    ms.erase(ms.find(2));
    cout << "After erasing one 2: ";
    for (int i : ms) {
        cout << i << " ";
    }
    cout << endl;  // Output: 2 2 35 38

    // Erase ALL occurrences of 2
    ms.erase(2);
    cout << "After erasing all 2s: ";
    for (int i : ms) {
        cout << i << " ";
    }
    cout << endl;  // Output: 35 38

    // Count after full erase
    cout << "Count of 2 after full erase: " << ms.count(2) << endl;  // Output: 0

    return 0;
}