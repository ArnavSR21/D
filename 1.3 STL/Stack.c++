#include<bits/stdc++.h>
using namespace std;

// LIFO (Last In First Out)

void explainStack(){
    stack<int> st; 
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(3); // {3,3,2,1}

    cout << st.top(); // prints 5 "** st[2] is invalid **"

    st.pop(); // st looks like {3,3,2,1} POP means delete

    cout << st.top(); // 3 TOP just tells what is at top

    cout << st.size(); // 4

    cout << st.empty();

    stack<int>st1, st2;
    st1.swap(st2);
}


int main(){
    
}