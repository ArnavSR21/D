#include<bits/stdc++.h>
using namespace std;

queue<int> q;

void push(int x) {
    int s = q.size();
    q.push(x);
    for(int i=0;i<s;i++) {
        q.push(q.front());
        q.pop();
    }
}

void pop() {
    q.pop();
}

int top() {
    return q.front();
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Enter " << n << " Elements: ";
    for(int i=0;i<n;i++) {
        int val;
        cin >> val;
        push(val);
    }

    cout << "Top element : " << top() << endl;
    cout << "Size of Stack: " << q.size() << endl;

    pop();
    cout << "Top element after 1 pop: " << top() << endl;

    return 0;
}