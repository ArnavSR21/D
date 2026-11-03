#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Arnav";
    int n = s.length();
    s[n-1] = 'z';
    cout << s[n - 1];
    return 0;
}