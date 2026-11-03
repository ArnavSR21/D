#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    int dup = n;
    while(n > 0){
        int ld = n % 10;
        sum = sum + ( ld * ld * ld );
        n = n / 10;
    }
    if( dup == sum ) cout << "true";
    else cout << "false";
}