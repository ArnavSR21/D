#include<bits/stdc++.h>
using namespace std;

void rev(int i, int n, int arr[]) {
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    rev(i+1, n, arr);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Enter " << n << " Elements: ";
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    rev(0,n,arr);
    
    cout << "Reverse Array: ";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}