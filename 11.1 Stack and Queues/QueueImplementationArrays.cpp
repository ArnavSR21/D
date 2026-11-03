#include<bits/stdc++.h>
using namespace std;

const int sizee = 10;
int q[sizee];
int curSize = 0, start = -1, endd = -1;

void push(int x) {
    if(curSize == sizee) {
        cout << "Queue OverFlow\n";
        return;
    }
    if(curSize == 0) {
        start = 0;
        endd = 0;
    }
    else {
        endd = (endd + 1) % sizee;
    }
    q[endd] = x;
    curSize++;
}

int pop() {
    if(curSize == 0) {
        cout << "Queue is empty\n";
        return -1;
    }

    int poppedValue = q[start];
    if(curSize == 1) {
        start = -1;
        endd = -1;
    }
    else {
        start = (start + 1) % sizee;
    }
    curSize--;
    return poppedValue;
}

int top() {
    if(curSize == 0) return -1;
    return q[start];
}

int size() {
    return curSize;
}

int main() {
    int n;
    cout << "How many elements to push: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(int i=0;i<n;i++) {
        int val;
        cin >> val;
        push(val);
    }
    
    cout << "Current Queue Size: " << size() << "\n";
    cout << "Front Element is: " << top() << "\n"; 
    cout << "\nPopping elements out of the queue: " << endl;
    while (size() > 0) {
        cout << pop() << " "; 
    }
    cout << endl;
    return 0;
}