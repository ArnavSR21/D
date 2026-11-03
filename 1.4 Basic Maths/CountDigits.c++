#include<bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    if (n == 0) return 1;

    // int cnt = 0;
    // while (n>0){
    //     cnt++;
    //     n = n/10;
    // }
    // return cnt;
    int cnt = (int)(log10(n) + 1);  // TIME COMPLEXITY = O(log10(N))
    return cnt;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Number of digits: " << countDigits(n) << endl;
    return 0;
}