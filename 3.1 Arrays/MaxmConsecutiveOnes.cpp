#include<bits/stdc++.h>
using namespace std;

int findMaxmConsecutive(vector<int> &nums) {
    int maxi = 0;
    int cnt = 0;
    for(int i=0;i<nums.size();i++) {
        if(nums[i] == 1) {
            cnt++;
            maxi = max(maxi,cnt);
        }
        else {
            cnt = 0;
        }
    }
    return maxi;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n  << " Elements: ";
    for(int i=0;i<n;i++) {
        cin >> nums[i];
    }

    int ans = findMaxmConsecutive(nums);
    cout << "Maxm Consecutive: " << ans << endl;

    return 0;
}