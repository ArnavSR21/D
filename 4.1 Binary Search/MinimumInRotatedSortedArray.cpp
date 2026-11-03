#include<bits/stdc++.h>
using namespace std;

int minimum(vector<int> &arr, int n ) {

    int low = 0, high = n-1, ans = INT_MAX;
    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[low] <= arr[mid] ) {
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        else {
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " Element: ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }


    int answer = minimum(arr, n);
    cout << "The Minimum number is : " << answer << endl;

    return 0;
}