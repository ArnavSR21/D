#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int low, int high, int target) {
    if(low > high) return -1;

    int mid = (low  + high) / 2;
    if(arr[mid] == target) return mid;
    else if(target > arr[mid]) return binarySearch(arr, mid + 1 ,high,target);
    return binarySearch(arr, low, mid - 1, target);

}

int search(vector<int> &arr, int target) {
    return binarySearch(arr, 0, arr.size() - 1, target);
}

int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " Elements: " ;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    int low = 0; 
    int high = n - 1;

    int ans = binarySearch(arr, low, high, target);
    cout << "" << ans << endl;

    return 0;
}