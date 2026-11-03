#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int> &arr, int n) {
    int i = 0;
    for(int j=1;j<n;j++) {
        if(arr[i] != arr[j]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " Elements ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cout << "Unique Elements: " << removeDuplicate(arr, n);
    return 0;
}