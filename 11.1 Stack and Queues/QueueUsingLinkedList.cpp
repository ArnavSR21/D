#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = nullptr;
    }
};

Node* start = nullptr;
Node* tail = nullptr;
int sizee = 0;

void push(int n) {
    Node* temp = new Node(n);

    if(start == nullptr) {
        start = tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
    sizee += 1;
}

void pop() {
    if(start == nullptr) {
        cout << "Queue is empty" << endl;
        return;
    }

    Node* temp = start;
    start = start->next;
    delete temp;
    sizee -= 1;

    if(start == nullptr) {
        tail = nullptr;
    }
}

int top() {
    if(start == nullptr) {
        cout << "Queue is empty" << endl;
        return -1;
    }
    return start->val;
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

    cout << "The top element is : " << top() << endl;
    cout << "The total size: " << sizee << endl;
    cout << "popping one element: " << endl;
    pop();

    cout << "The top element after pop is: " << top() << endl;
    cout << "The size after pop is: " << sizee << endl;

    return 0;
}