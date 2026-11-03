#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int revNum = 0;
    int duplicate  = n;
    while( n > 0 ){
        int lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n = n / 10;
    }
    if(duplicate == revNum) cout << "true";
    else cout << "false";
}
