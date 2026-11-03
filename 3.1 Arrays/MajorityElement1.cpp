#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &arr, int n) {

    // OPTIMAL APPROACH
    // MOORE'S VOTING ALOGRITHM

    int cnt = 0;
    int element;
    for(int i=0;i<n;i++) {
        if(cnt == 0) {
            cnt = 1;
            element = arr[i];
        }
        else if(arr[i] == element) {
            cnt++;
        }
        else {
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i=0;i<n;i++) {
        if(arr[i] == element) cnt1++;
    }
    if(cnt1 > n/2) {
        return element;
    }
    return -1;


//--------------------------------------------  
    // BETTER APPROACH

    // map<int,int> mp;
    // for(int i=0;i<n;i++) {
    //     mp[arr[i]]++;
    // }
    // for(auto it : mp) {
    //     if(it.second > n / 2) {
    //         return it.first;
    //     }
    // }
    // return -1;

//--------------------------------------------
    
    // BRUTE APPROACH
    
    // for(int i=0;i<n;i++) {
    //     int cnt = 0;
    //     for(int j=0;j<n;j++) {
    //         if(arr[j] == arr[i]) {
    //             cnt++;
    //         }
    //     }
    //     if(cnt > n/2) {
    //         return arr[i];
    //     }
    // }
    // return -1;

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

    int ans = majorityElement(arr, n);
    cout << "Majority Element: " << ans << endl ;
    return 0;
}