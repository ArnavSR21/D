#include<bits/stdc++.h>
using namespace std;

int fMs(int arr[], int n) {
    int XOR1 = 0;
    
    int XOR2 = 0;
    for(int i=0;i<n-1;i++) {
        XOR2 = XOR2 ^ arr[i];
        XOR1 = XOR1 ^ (i+1);
    }
    XOR1 = XOR1 ^ n;
    return XOR1 ^ XOR2;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n - 1];
    cout << "Enter " << n - 1 << " Elements: ";
    for(int i=0;i<n - 1;i++) {
        cin >> arr[i];
    }
    
    // int hash[n+1] = {0};
    // for(int i=0;i<n-1;i++) {
    //     hash[arr[i]] = 1;
    // }

    // for(int i=1;i<n;i++) {
    //     if(hash[i] == 0) {
    //         cout << "Missing number is: " << i << endl;
    //         return 0;
    //     }
    // }

    int ans = fMs(arr, n);
    cout << "Missing Number Is: " << ans << endl;

    return 0;
}