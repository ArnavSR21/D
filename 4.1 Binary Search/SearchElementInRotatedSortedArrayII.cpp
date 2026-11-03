#include<bits/stdc++.h>
using namespace std;

bool search(vector<int> &arr, int n, int target) {
    int low = 0, high = n-1;
    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == target) return true;
        if(arr[low] == arr[mid] && arr[mid] == arr[high]) {
            low++, high--;
            continue;
        }

        if(arr[low] <= arr[mid]) {
            if(target >= arr[low] && target <= arr[mid]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        else {
            if(target >= arr[mid] && target <= arr[high]) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
    }
    return false;
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

    int target;
    cout << "Enter target: ";
    cin >> target;

    bool ans = search(arr, n , target);
    cout << "The element is: " << ans << endl;

    return 0;
}
