#include<bits/stdc++.h>
using namespace std;

int lb(vector<int> &arr, int target, int n) {
    int low = 0, high = n - 1;
    int ans = n;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] >= target) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

int ub(vector<int> &arr, int target, int n) {
    int low = 0, high = n-1;
    int ans = n;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid]> target) {
            ans = mid;
            high = mid - 1 ;
        }
        else {
            low  = mid + 1;
        }

    }
    return ans;
}

pair<int,int> FirstLast(vector<int> &arr, int target, int n) {

    int lowerbound = lb(arr, target, n);
    if(lowerbound == n || arr[lowerbound] != target) return {-1, -1};

    return{ lowerbound, ub(arr, target, n) - 1};

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
    cout << "Enter the target element: ";
    cin >> target;

    pair<int,int> ans = FirstLast(arr, target, n);
    cout << "The occurences are: " << "[" << ans.first << "," << ans.second << "]" << endl;

    return 0;
}