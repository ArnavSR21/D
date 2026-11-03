#include<bits/stdc++.h>
using namespace std;

int longest_cs(vector<int> &arr, int n) {

    // OPTIMAL APPROACH

    if(n==0) return 0;
    int longest = 1;
    unordered_set<int> st;
    for(int i=0;i<n;i++) {
        st.insert(arr[i]);
    }
    for(auto it : st) {
        if(st.find(it - 1) == st.end()) {
            int cnt = 1;
            int x = it;

            while(st.find(x+1) != st.end()) {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;

//------------------------------------------------------------
    
    // BETTER APPROACH
    
    // if(n == 0) return 0;

    // sort(arr.begin(), arr.end());

    // int longest = 1, cntCur = 0, lastSmallest = INT_MIN;

    // for(int i=0;i<n;i++) {
    //     if(arr[i] - 1 == lastSmallest) {
    //         cntCur++;
    //         lastSmallest = arr[i];
    //     }
    //     else if(arr[i] != lastSmallest) {
    //         cntCur = 1;
    //         lastSmallest = arr[i];
    //     }
    //     longest = max(longest,cntCur);
    // }
    // return longest;

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


    int ans = longest_cs(arr, n);
    cout << "Longest consecutive sequence is: " << ans << endl;
    return 0;
}