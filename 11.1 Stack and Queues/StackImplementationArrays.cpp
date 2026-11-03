#include<bits/stdc++.h>
using namespace std;

int top = -1;
int st[10];

void push(int x) {
    if(top >= 9) {
        cout << "Stack Overflow\n";
        return ;
    }
    top = top + 1;
    st[top] = x;
}

void pop() {
    if(top == -1) {
        cout << "Nothing to pop\n";
        return;
    }
    top = top - 1;
}

int getTop() {
    if(top == -1) {
        return -1;
    }
    return st[top];
}

int size() {
    return top + 1;
}

int main() {
    int n;
    cout << "How many Elements to push: ";
    cin >> n;

    cout << "Enter " << n << " Elements: ";
    for(int i=0;i<n;i++) {
        int val;
        cin >> val;
        push(val);
    }

    cout << "Top element: " << getTop() << endl;
    cout << "Size: " << size() << endl;

    pop();
    cout << "Top element after pop: " << getTop() << endl;

    return 0;
}