#include<bits/stdc++.h>
using namespace std;

void primeNumber(int n) {
    int cnt = 0;
    for(int i = 1; i*i <= n; i++){
        if ( n % i == 0){
            cnt++;
            if((n/i) != 1);
            cnt++;
        }   
    }
    if (cnt == 2) cout << "prime";
    else cout << "not prime";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    primeNumber(n);
    return 0;
}