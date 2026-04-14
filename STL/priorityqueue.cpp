#include <bits/stdc++.h>
using namespace std;
/*here the maximum number will be stored at the top no matter when it is pushed*/

int main()
{
    priority_queue<int > pq;

    pq.push(38);
    pq.emplace(28);
    pq.push(82);
    pq.emplace(38);

    priority_queue<int> temp = pq;
    while (!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();     //here the pop will removes the top most element 
    }
    cout<<endl;

    cout<<pq.top()<<endl;

    /*for the minimum stored in the top we make use of the below code*/
    priority_queue<int , vector<int> , greater<int>> pq1;
    pq1.push(65);
    pq1.emplace(23);

    cout<<pq1.top();
    
    return 0;
}