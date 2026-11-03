#include<bits/stdc++.h>
using namespace std;

stack<int> s1, s2;

// void push(int x) {
//     while(s1.size()) {
//         s2.push(s1.top());
//         s1.pop();
//     }
//     s1.push(x);
//     while(s2.size()) {
//         s1.push(s2.top());
//         s2.pop();
//     }
// }

// int top() {
//     if(s1.empty()) return -1;
//     return s1.top();
// }

// int pop() {
//     if(s1.empty()) return -1;

//     int poppedValue = s1.top();
//     s1.pop();
//     return poppedValue;
// }

void push(int x) {
    s1.push(x);
}

int pop() {
    if(s2.empty()) {
    
        while(s1.size()) {
            s2.push(s1.top());
            s1.pop();
        }
    }
    if(s2.empty()) return -1;

    int poppedValue = s2.top();
    s2.pop();
    return poppedValue;
    
}

int top() {
    if(s2.empty()) {
        while(s1.size()) {
            s2.push(s1.top());
            s1.pop();
        }
    }
    if(s2.empty()) return -1;
    return s2.top();
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

    cout << "Top Element: " << top() << endl;
    cout << "Size: " << (s1.size() + s2.size()) << endl;

    pop();
    cout << "Top element after 1 pop: " << pop() << endl;

    return 0;
}