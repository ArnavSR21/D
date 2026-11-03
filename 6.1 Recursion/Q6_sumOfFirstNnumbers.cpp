#include<bits/stdc++.h>
using namespace std;

void f(int i, int sum) {
    if(i < 1) {
        cout << "Summation of n elements is: " << sum;
        return;
    }
    f(i - 1, sum + i);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    f(n, 0);

    return 0;
}