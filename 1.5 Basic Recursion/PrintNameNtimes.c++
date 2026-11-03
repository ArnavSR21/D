#include<bits/stdc++.h>
using namespace std;

void f(int i,int n) {
    
    if( i > n ) {  // Base case
        return;
    }
    cout << "Arnav" << endl;
    f(i+1,n);
}
int main() {
    int n;
    cout << "Enter the no. -> ";
    cin >> n;
    
    f(1,n);
    return 0;
}