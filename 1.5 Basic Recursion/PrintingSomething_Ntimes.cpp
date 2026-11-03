#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
void f(int n) {
    if( cnt == n ) {
        return;
    }
    cout << "Arnav GOAT" << endl;
    cnt++;
    f(n);
}

int main() {
    int n;
    cin >> n;

    f(n);
    return 0;
}