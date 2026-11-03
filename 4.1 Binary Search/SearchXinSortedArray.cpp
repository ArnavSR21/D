#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int n, int target) {

    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target) return mid;
        else if(target < arr[mid]) high = mid - 1;
        else low = mid + 1;
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

    sort(arr.begin(), arr.end());

    int target;
    cout << "Enter the variable you want to search: ";
    cin >> target;

    int ans = binarySearch(arr, n, target);
    cout << "The index is: " << ans << endl ;

    return 0;
}