#include <bits/stdc++.h>
using namespace std;

/*this follows FILO

which means which elements comes first leaves the stack last*/

int main (){
    stack<int> st;
    st.push(3);
    st.push(24);
    st.push(23);
    st.emplace(42);
   
    stack<int> temp = st;
        //we use while loop like this to print every element of the stack              
    while (!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;

    cout<<st.top()<<endl;

    st.pop();

    cout<<st.top()<<endl;
    
    cout<<st.size()<<endl;

    cout<<st.empty()<<endl;

    /*stack1.swap(stack2_)      this swaps the element from the stack1 to 2 and 2 to 1 */
    return 0;
}