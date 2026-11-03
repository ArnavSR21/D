#include<bits/stdc++.h>
using namespace std;

int FloorAndCeil(vector<int> &arr, int n, int target) {
   
    int ans = -1;

    int low = 0, high = n-1;

    while(low <= high) {
        int mid = (low + high)/ 2;

        if(arr[mid] <= target) { // for Ceil ( >= )
            ans = arr[mid];
            low = mid + 1; // for Ceil ( high = mid - 1 )
        }
        else {
            high = mid - 1; // for Ceil ( low = mid + 1 )
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

    sort(arr.begin(), arr.end());

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    int ans = FloorAndCeil(arr, n, target);
    cout << "The number is: " << ans << endl;

    return 0;
}