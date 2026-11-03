#include<bits/stdc++.h>
using namespace std;

int linearSearch(int n, int num, vector<int> &arr) {
    for(int i=0;i<n;i++) {
        if(arr[i] == num) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " Elements: ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int num;
    cout << "Enter num: ";
    cin >> num;
    cout << "The Index is: "<< linearSearch(n, num, arr);

    return 0;
}