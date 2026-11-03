#include<bits/stdc++.h>
using namespace std;

int maximumSubarray(vector<int> &arr, int n) {

    // OPTIMAL APPROACH

    int sum = 0, maxi = INT_MIN;
    for(int i=0;i<n;i++) {
        sum += arr[i];

        if( sum > maxi) {
            maxi = sum;
        }

        if(sum < 0) {
            sum = 0;
        }
    }
    return maxi;

//------------------------------------------------------
    
    // BETTER APPROACH
    
    // int maxi = INT_MIN;

    // for(int i=0;i<n;i++) {
    //     int sum = 0;
    //     for(int j=i;j<n;j++) {
    //         sum += arr[j];

    //         maxi = max(sum, maxi);
    //     }
    // }
    // return maxi;

//------------------------------------------------------

    // BETTER APPROACH

    // int maxi = INT_MIN;

    // for(int i=0;i<n;i++) {
    //     for(int j=i;j<n;j++) {
    //         int sum = 0;
    //         for(int k=i;k<j;k++) {
    //             sum += arr[k];
    //         }
    //         maxi = max(sum, maxi);
    //     }
    // }
    // return maxi;
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

    int maxSum = maximumSubarray(arr, n);
    cout << "The maximum sum is: " << maxSum << endl;
    return 0;
} 