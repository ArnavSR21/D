#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int n, int target) {
    int low = 0, high = n-1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target){
            return mid;
        }
        // the left side is sorted
        if(arr[low] <= arr[mid]) {

            // figure out if the element lies on the left half or not
            if(target >= arr[low] && target <= arr[mid]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        // right half is sorted
        else {
            if(target >= arr[mid] && target <= arr[high]) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
    }
    return -1;
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

    int target ;
    cout << "Enter the target element: ";
    cin >> target ;

    int ans = search(arr, n, target);
    cout << "The Index is :" << ans << endl;

    return 0;
}