#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &arr, long long k){
    
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxlen = 0;
    for(int i=0;i<arr.size();i++) {
        sum += arr[i];
        if(sum == k) {
            maxlen = max(maxlen, i+1);
        }
        long long remaning = sum - k;
        if(preSumMap.find(remaning) != preSumMap.end()){
            int len = i - preSumMap[remaning];
            maxlen = max(maxlen, len);
        }
         if(preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxlen;
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

    long long k;
    cout << "Enter k: ";
    cin >> k;

    int result = longestSubarray(arr,k);
    cout << "Length of the longest subarray: " << result << endl;
    return 0;
}