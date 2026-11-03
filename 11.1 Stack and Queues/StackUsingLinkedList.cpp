#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = nullptr;
int curSize = 0;

void push(int x) {
    Node* temp = new Node();
    temp->data = x;

    temp->next = top;

    top = temp;
    curSize = curSize + 1;
}

void pop() {
    if(top == nullptr) {
        cout << "There is nothing in the list";
        return;
    }
    Node* temp = top;

    top = top->next;

    delete temp;

    curSize = curSize - 1;
}

int getTop() {
    if(top == nullptr) {
        return -1;
    }
    return top->data;
}
int size() {
    return curSize;
}
int main() {
    int n;
    cout << "How many elements to push: ";
    cin >> n;

    cout << "Enter " << n << " Elements: ";
    for(int i=0;i<n;i++) {
        int val;
        cin >> val;
        push(val);
    }

    cout << "Current size: " << size() << endl;
    cout << "Top element: " << getTop() << endl;

    while(size() > 0) {
        cout << getTop() <<  " ";
        pop();
    }
    cout << endl;

    return 0;
}