#include<bits/stdc++.h>
using namespace std;

void fact(int n, int ans ) {
    if(n == 0) {
        cout << ans;
        return;
    }
    fact(n-1, ans*n);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    fact(n, 1);

    return 0;
}