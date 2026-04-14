#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(34);
    q.push(982);
    q.emplace(65);
    q.emplace(820);

    queue <int> temp = q;
while(!temp.empty()){
    cout<<temp.front()<<" ";
    temp.pop();
}
    cout<< endl;
    q.back() += 2;

    cout<< q.back()<<'\n';

    cout<< q.front()<<endl;

    q.pop(); //this pop the first element not the last element like stack

    cout<<q.front()<< endl;

    queue <int> temp1 = q;
    while(!temp1.empty()){
    cout<<temp1.front()<<" ";
    temp1.pop();
    }

    return 0;
}