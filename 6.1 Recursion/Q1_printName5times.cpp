#include<bits/stdc++.h>
using namespace std;

void name(int i, int n) {
    if(i > n) return;
    cout << "Arnav" << "\n";
    name(i+1,n);
}

int main() {
    int n;
    cout << "The number of times to print: ";
    cin >> n;

    name(1,n);

    return 0;
}