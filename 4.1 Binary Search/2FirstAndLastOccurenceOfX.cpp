#include<bits/stdc++.h>
using namespace std;


int firstOccurence(vector<int> &arr, int target, int n) {
    int low = 0, high =  n-1;
    int first = -1;

    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target) {
            first = mid;
            high = mid - 1;
        }
        else if(arr[mid] < target) {
            low = mid+1;
        }
        else {
            high = mid - 1;
        }
    }
    return first;
}

int lastOccurence(vector<int> &arr, int target, int n) {
    int low = 0, high =  n-1;
    int last = -1;

    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target) {
            last = mid;
            low = mid + 1;
        }
        else if(arr[mid] < target) {
            low = mid+1;
        }
        else {
            high = mid - 1;
        }
    }
    return last;
}

pair<int,int> FirstLast(vector<int> &arr, int target, int n) {
    int first = firstOccurence(arr, target, n);
    if(first == -1) return {-1, -1};
    int last = lastOccurence(arr, target, n);
    return {first, last};
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