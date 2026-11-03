#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n) {
    int largest = arr[0];
    for(int i=0;i<n;i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " Elements ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "Laregst Number is: " << largestElement(arr, n);
    return 0;
}