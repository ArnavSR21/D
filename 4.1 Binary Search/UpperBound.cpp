#include<bits/stdc++.h>
using namespace std;

int UpperBound(vector<int> &arr, int n, int target) {

    int low = 0, high = n - 1;
    int ans = n;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] > target) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }

    }
    return ans;
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

    sort(arr.begin(), arr.end());

    int target;
    cout << "Enter target element: ";
    cin >> target;

    int ans = UpperBound(arr,target, n);
    cout << "" << ans << endl;

    return 0;
}