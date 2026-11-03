#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Arnav";
    int len = s.size();
    s[len-1] = 'I';
    cout << s[len-1];
    return 0;
}