#include<bits/stdc++.h>
using namespace std;

// functional way

int factorial(int n){
    if(n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}


int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << factorial(n);
    return 0;
}